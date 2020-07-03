#pragma once

#ifndef JADE_SERVER_INCLUDE_SERVER_SERVER_RPC_H_
#define JADE_SERVER_INCLUDE_SERVER_SERVER_RPC_H_

#include <memory>

#include <grpcpp/server.h>

#include "../../../core/include/jadecore.h"

#include "../../include/rpc/rpc_handler.h"

using std::thread;
using std::shared_ptr;
using std::unique_ptr;
using std::unordered_map;
using grpc::Server;
using grpc::ServerCompletionQueue;
using JadeCore::RpcBase;
using JadeServer::RpcHandler;

namespace JadeServer
{
	class Rpc final : public JadeCore::RpcBase::AsyncService
	{
	private:

		/**
		 * \brief The completion queue for Rpc
		 */
		std::unique_ptr<ServerCompletionQueue> rpc_queue {};

		/**
		 * \brief The completion queue for notifications
		 */
		std::unique_ptr<ServerCompletionQueue> notification_queue_ {};
		
		/**
		 * \brief Instance of the Rpc server
		 */
		std::unique_ptr<Server> server_ {};

		/**
		 * \brief Async service
		 */
		RpcBase::AsyncService service_ {};

		/**
		 * \brief The thread that handles the Rpc completion queue
		 */
		thread rpc_thread_;

		/**
		 * \brief The thread that handles the notification completion queue
		 */
		thread notification_thread_;
				
		/**
		 * \brief Denotes if the rpc server is listening
		 */
		bool listening_ = false;

		/**
		 * \brief Used to allocate new sessions
		 */
		std::atomic_int64_t handler_allocator {0};

		/**
		 * \brief A lock to ensure no overstepping on handler processes
		 */
		mutex handlers_lock_;

		/**
		 * \brief A collection of all the handlers that are being handled by the rpc server
		 */
		unordered_map<uint64_t, shared_ptr<RpcHandler>> handlers_ {};

		/**
		 * \brief A map of all connected clients
		 */
		unordered_map<string, uint64_t> clients_ {};
		
		/**
		 * \brief Start handling RPCs
		 */
		void Handle();

		/**
		 * \brief Stop the server
		 */
		void Stop();
		
		/**
		 * \brief Process the completion queue
		 * \param completion_queue_
		 */
		void ProcessCompletionQueue(unique_ptr<ServerCompletionQueue> & completion_queue_);

		/**
		 * \brief Spawn a new handler
		 */
		std::shared_ptr<RpcHandler> SpawnHandler();

		/**
		 * \brief Get a handler with a given session
		 * \param handler_id_
		 */
		std::shared_ptr<RpcHandler> GetHandler(uint64_t handler_id_);

		/**
		 * \brief Remove a given handler
		 * \param handler_id_ 
		 */
		void RemoveHandler(uint64_t handler_id_);
		
	public:

		/**
		 * \brief Run the Rpc server
		 */
		void Listen();

		/**
		 * \brief Send a command to a connected client
		 * \param client_id 
		 * \param operation 
		 * \param command 
		 */
		void SendClientCommand(string client_id, int operation, Message* command);

		/**
		 * \brief Send a command to a connected client
		 * \param handler_id
		 * \param operation
		 * \param command
		 */
		void SendClientCommand(uint64_t handler_id, int operation, Message* command);
	};
}

#endif