#include "SessionBpfImpl.h"

/**************************************************************************************************/
SessionBpfImpl::SessionBpfImpl(pfcp_session_t_& session) : SessionBpf() {
  mSession = session;
}

/**************************************************************************************************/
SessionBpfImpl::~SessionBpfImpl() {}

/**************************************************************************************************/
seid_t_ SessionBpfImpl::getSeid() {
  return mSession.seid;
}

/**************************************************************************************************/
pfcp_session_t_ SessionBpfImpl::getData() {
  return mSession;
}
/**************************************************************************************************/
