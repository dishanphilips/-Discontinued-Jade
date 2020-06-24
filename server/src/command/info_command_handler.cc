#include "info_command_handler.h"

namespace JadeServer
{
	JadeCore::InfoResponse* JadeServer::InfoCommandHandler::Execute(const std::string raw)
	{
		JadeCore::InfoRequest* request = new JadeCore::InfoRequest();
		request->ParseFromString(raw);
		
		JadeCore::InfoResponse* response = new JadeCore::InfoResponse();
		response->set_message(request->message()+ " Hello! Server Running : Time Is : " + JadeCore::DateTimeUtils::GetCurrentDateTime());
		return response;
	}
}
