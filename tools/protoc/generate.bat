REM Remove server
rd /s /q ..\..\core\gen
mkdir ..\..\core\gen

bin\protoc.exe -I ..\..\core\proto --grpc_out=..\..\core\gen --plugin=protoc-gen-grpc=bin\grpc_cpp_plugin.exe ..\..\core\proto\server.proto
bin\protoc.exe -I ..\..\core\proto  ..\..\core\proto\server.proto --cpp_out=..\..\core\gen
