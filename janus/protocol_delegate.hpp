// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from janus-client.djinni

#pragma once

#include <memory>
#include <string>
//#include "examples/peerconnection/client/peer_connection_client.h"
//#include "examples/peerconnection/client/conductor.h"

namespace Janus {

class Bundle;
class JanusEvent;
struct JanusError;

class ProtocolDelegate {
public:
    virtual ~ProtocolDelegate() {}

    virtual void onReady() = 0;
	virtual void onReady_withId(int64_t peer_id, int offer) = 0;

    virtual void onClose() = 0;

    virtual void onError(const JanusError & error, const std::shared_ptr<Bundle> & context) = 0;

    virtual void onEvent(const std::shared_ptr<JanusEvent> & event, const std::shared_ptr<Bundle> & context) = 0;

    virtual void onHangup(const std::string & reason) = 0;
};

}  // namespace Janus
