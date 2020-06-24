# Jade
Realtime HTTP2 based Game Server and Client SDK using Lidgren and Google Protobuf targeted towards Unity3D

1. Realtime UDP Game Server and Client SDK to talk to it.
2. Smart Load Balancer which can work with any amount of Game Serevers.
3. Uses GRPC[https://github.com/google/grpc] for communication.
4. Uses Google Protobuf[https://github.com/google/protobuf] for data serialization/deserialization.
5. Built in command system, and command queue system to make game development easy.

# Why Grpc?
![why_grpc](https://miro.medium.com/max/960/1*abrqHMQzGtMyi4iy3qHkoA.gif "Why Grpc?")


# Install

1. Windows

- Install vcpkg package manager on your system using the official instructions
  - git clone https://github.com/Microsoft/vcpkg.git
  - cd vcpkg
  - bootstrap-vcpkg.bat
  - .\vcpkg.exe integrate install

- Install gRPC using vcpkg package manager
  - x-64
      - .\vcpkg.exe install grpc --triplet x64-windows

  - x-86
      - .\vcpkg.exe install grpc

- Fixing Please compile grpc with _WIN32_WINNT of at least 0x600
    - Add this line - #include <SDKDDKVer.h> in port_platform.h right after
    - /* Get windows.h included everywhere (we need it) */
    - #if defined(_WIN64) || defined(WIN64) || defined(_WIN32) || defined(WIN32)
