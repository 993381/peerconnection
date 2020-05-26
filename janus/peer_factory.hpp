// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from janus-client.djinni

#pragma once

#include <cstdint>
#include <memory>
#include <janus/protocol.hpp>
namespace Janus {

class Peer;
class Protocol;

class PeerFactory {
public:
    virtual ~PeerFactory() {}

    virtual std::shared_ptr<Peer> create(int64_t id, const std::shared_ptr<Protocol> & owner) = 0;
};

class JanusPeerFactory : public PeerFactory
//	class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::Janus::PeerFactory
{
public:
	JanusPeerFactory(){};
	~JanusPeerFactory(){};

	std::shared_ptr<::Janus::Peer> create(int64_t id, const std::shared_ptr<::Janus::Protocol> & owner) override;
	void onIceCompleted();
	std::shared_ptr<::Janus::Protocol> c_owner;
	int64_t c_id;
};


}  // namespace Janus
