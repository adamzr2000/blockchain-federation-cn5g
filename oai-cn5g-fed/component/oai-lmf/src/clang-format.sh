#!/bin/bash

# Variable that will hold the name of the clang-format command
FMT=""

# Some distros just call it clang-format. Others (e.g. Ubuntu) are insistent
# that the version number be part of the command. We prefer clang-format if
# that's present, otherwise we work backwards from highest version to lowest
# version.
for clangfmt in clang-format{,-{4,3}.{9,8,7,6,5,4,3,2,1,0}}; do
    if which "$clangfmt" &>/dev/null; then
        FMT="$clangfmt"
        break
    fi
done

# Check if we found a working clang-format
if [ -z "$FMT" ]; then
    echo "failed to find clang-format"
    exit 1
fi

function format() {
    for f in $(find $@ -name '*.h' -or -name '*.m' -or -name '*.mm' -or -name '*.c' -or -name '*.cpp' -or -name '*.hpp'); do 
        echo "format ${f}";
        ${FMT} -style=file -i ${f};
    done

    echo "~~~ $@ Done ~~~";
}

# Check all of the arguments first to make sure they're all directories
for dir in "$@"; do
    if [ ! -d "${dir}" ]; then
        echo "${dir} is not a directory";
    else
        format ${dir};
    fi
done