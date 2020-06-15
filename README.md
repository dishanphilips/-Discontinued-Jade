# Jade
Realtime UDP based Game Server and Client SDK using Lidgren and Google Protobuf targeted towards Unity3D

1. Realtime UDP Game Server and Client SDK to talk to it.
2. Smart Load Balancer which can work with any amount of Game Serevers.
3. Uses GRPC[https://github.com/google/grpc] for communication.
4. Uses Google Protobuf[https://github.com/google/protobuf] for data serialization/deserialization.
5. Built in command system, and command queue system to make game development easy.


# Install

# Windows

# Install vcpkg package manager on your system using the official instructions
git clone https://github.com/Microsoft/vcpkg.git
cd vcpkg
./vcpkg integrate install

# Install gRPC using vcpkg package manager

# x-64
vcpkg install grpc --triplet x64-windows

# x-86
vcpkg install grpc