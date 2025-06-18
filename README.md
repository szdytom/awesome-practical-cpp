# Awesome Practical C++

A choice list of the most practical and recognized C++ frameworks and libraries that are production ready...

Finding a suitable library from [fffaraz/awesome-cpp](https://github.com/fffaraz/awesome-cpp) can be maddening -- there are so many repositories listed, some of them have been abandoned for years, some of them are just toys instead, true treasure was buried in tons of other stuffs. In this repository, I'd like to list repository which:

1. ...is a library/framework (not documentations, blogs, demo/example code, applications)
2. ...is well recognized (2K stars at least)
3. ...is still been maintained/developed (commited recently)
4. ...is ready for use (not WIP)
5. ...is wrote in C++ or has a *friendly* C++ API
6. ...is open-source and hosted(at least mirrored) on GitHub.

Note: a few interesting and potential repositories that don't have 2K stars or still in active development is in the list with a :construction: mark, still it's OK to use them in personal hobby projects.

Please feel free to open a PR and add things to the list!

## Contents

- [Awesome Practical C++](#awesome-practical-c--)
	- [Basic Utility](#basic-utility)
	- [CLI](#cli)
	- [Concurrency](#concurrency)
	- [Cryptography](#cryptography)
	- [Data Visualization](#data-visualization)
	- [Database](#database)
	- [Debugging](#debugging)
	- [Embedded](#embedded)
	- [Formatting](#formatting)
	- [GPU](#gpu)
	- [GUI](#gui)
	- [Game Utility](#game-utility)
	- [Image Processing](#image-processing)
	- [Internationalization](#internationalization)
	- [JIT](#jit)
	- [JSON](#json)
	- [Logging](#logging)
	- [Machine Learning](#machine-learning)
	- [Math](#math)
	- [Multimedia](#multimedia)
	- [Networking](#networking)
	- [Physics](#physics)
	- [Reflection](#reflection)
	- [Rendering](#rendering)
	- [Scripting](#scripting)
	- [Serialization](#serialization)
	- [TUI](#tui)
	- [Unit Testing](#unit-testing)
	- [XML](#xml)
	- [YAML](#yaml)

## Basic Utility

- [facebook/folly](https://github.com/facebook/folly) :zap: - A library of C++17 components designed with practicality and efficiency in mind. ![stars](https://img.shields.io/github/stars/facebook/folly?style=flat-square) ![license](https://img.shields.io/github/license/facebook/folly?style=flat-square)
- [microsoft/proxy](https://github.com/microsoft/proxy) - Next Generation Polymorphism in C++. ![stars](https://img.shields.io/github/stars/microsoft/proxy?style=flat-square) ![license](https://img.shields.io/github/license/microsoft/proxy?style=flat-square)

## CLI

- [p-ranav/argparse](https://github.com/p-ranav/argparse) - A header-only argument parser for Modern C++. ![stars](https://img.shields.io/github/stars/p-ranav/argparse?style=flat-square) ![license](https://img.shields.io/github/license/p-ranav/argparse?style=flat-square)
- [p-ranav/indicators](https://github.com/p-ranav/indicators) - Activity Indicators for Modern C++. ![stars](https://img.shields.io/github/stars/p-ranav/indicators?style=flat-square) ![license](https://img.shields.io/github/license/p-ranav/indicators?style=flat-square)

## Concurrency

- [David-Haim/concurrencpp](https://github.com/David-Haim/concurrencpp) :construction: - Modern concurrency for C++. Tasks, executors, timers and C++20 coroutines to rule them all. ![stars](https://img.shields.io/github/stars/David-Haim/concurrencpp?style=flat-square) ![license](https://img.shields.io/github/license/David-Haim/concurrencpp?style=flat-square)
- [max0x7ba/atomic_queue](https://github.com/max0x7ba/atomic_queue) :construction: - C++14 multiple-producer-multiple-consumer lock-free queues. ![stars](https://img.shields.io/github/stars/max0x7ba/atomic_queue?style=flat-square) ![license](https://img.shields.io/github/license/max0x7ba/atomic_queue?style=flat-square)
- [netcan/asyncio](https://github.com/netcan/asyncio) :construction: - A C++20 library to write concurrent code using the async/await syntax. ![stars](https://img.shields.io/github/stars/netcan/asyncio?style=flat-square) ![license](https://img.shields.io/github/license/netcan/asyncio?style=flat-square)
- [taskflow/taskflow](https://github.com/taskflow/taskflow) :zap: - A general-purpose parallel and heterogeneous task programming system. ![stars](https://img.shields.io/github/stars/taskflow/taskflow?style=flat-square) ![license](https://img.shields.io/github/license/taskflow/taskflow?style=flat-square)

## Cryptography

- [weidai11/cryptopp](https://github.com/weidai11/cryptopp) - Free C++ class library of cryptographic schemes. ![stars](https://img.shields.io/github/stars/weidai11/cryptopp?style=flat-square) ![license](https://img.shields.io/github/license/weidai11/cryptopp?style=flat-square)

## Data Visualization

- [alandefreitas/matplotplusplus](https://github.com/alandefreitas/matplotplusplus) - A C++ Graphics Library for Data Visualization. ![stars](https://img.shields.io/github/stars/alandefreitas/matplotplusplus?style=flat-square) ![license](https://img.shields.io/github/license/alandefreitas/matplotplusplus?style=flat-square)

## Database

- [google/leveldb](https://github.com/google/leveldb) :zap: - A fast key-value storage library that provides an ordered mapping from string keys to string values. ![stars](https://img.shields.io/github/stars/google/leveldb?style=flat-square) ![license](https://img.shields.io/github/license/google/leveldb?style=flat-square)

## Debugging

- [sharkdp/dbg-macro](https://github.com/sharkdp/dbg-macro) -  A single-header dbg(…) macro for C++. ![stars](https://img.shields.io/github/stars/sharkdp/dbg-macro?style=flat-square) ![license](https://img.shields.io/github/license/sharkdp/dbg-macro?style=flat-square)

## Embedded

- [bblanchon/ArduinoJson](https://github.com/bblanchon/ArduinoJson) - Simple and efficient JSON library for Arduino and embedded C++. ![stars](https://img.shields.io/github/stars/bblanchon/ArduinoJson?style=flat-square) ![license](https://img.shields.io/github/license/bblanchon/ArduinoJson?style=flat-square)
- [idea4good/GuiLite](https://github.com/idea4good/GuiLite) - The smallest header-only GUI library(4 KLOC) for all platforms. ![stars](https://img.shields.io/github/stars/idea4good/GuiLite?style=flat-square) ![license](https://img.shields.io/github/license/idea4good/GuiLite?style=flat-square)

## Formatting

- [fmtlib/fmt](https://github.com/fmtlib/fmt) :zap: - A modern formatting library. ![stars](https://img.shields.io/github/stars/fmtlib/fmt?style=flat-square) ![license](https://img.shields.io/github/license/fmtlib/fmt?style=flat-square)

## GPU

- [arrayfire/arrayfire](https://github.com/arrayfire/arrayfire) - A general-purpose tensor library that simplifies the software development process for the parallel architectures found in CPUs, GPUs, and other hardware acceleration devices. ![stars](https://img.shields.io/github/stars/arrayfire/arrayfire?style=flat-square) ![license](https://img.shields.io/github/license/arrayfire/arrayfire?style=flat-square)

## GUI

- [GNOME/gtkmm](https://github.com/GNOME/gtkmm) - The official C++ interface for the popular GUI library GTK+. ![stars](https://img.shields.io/github/stars/GNOME/gtkmm?style=flat-square) ![license](https://img.shields.io/github/license/GNOME/gtkmm?style=flat-square)
- [idea4good/GuiLite](https://github.com/idea4good/GuiLite) - The smallest header-only GUI library(4 KLOC) for all platforms. ![stars](https://img.shields.io/github/stars/idea4good/GuiLite?style=flat-square) ![license](https://img.shields.io/github/license/idea4good/GuiLite?style=flat-square)
- [mikke89/RmlUi](https://github.com/mikke89/RmlUi) - The HTML/CSS User Interface library evolved. ![stars](https://img.shields.io/github/stars/mikke89/RmlUi?style=flat-square) ![license](https://img.shields.io/github/license/mikke89/RmlUi?style=flat-square)
- [ocornut/imgui](https://github.com/ocornut/imgui) :zap: - Bloat-free Graphical User interface for C++ with minimal dependencies. ![stars](https://img.shields.io/github/stars/ocornut/imgui?style=flat-square) ![license](https://img.shields.io/github/license/ocornut/imgui?style=flat-square)
- [webui-dev/webui](https://github.com/webui-dev/webui) - Use any web browser or WebView as GUI, with modern web technologies in the frontend, all in a lightweight portable library. ![stars](https://img.shields.io/github/stars/webui-dev/webui?style=flat-square) ![license](https://img.shields.io/github/license/webui-dev/webui?style=flat-square)

## Game Utility

- [BehaviorTree/BehaviorTree.CPP](https://github.com/BehaviorTree/BehaviorTree.CPP) - Behavior Trees Library in C++. ![stars](https://img.shields.io/github/stars/BehaviorTree/BehaviorTree.CPP?style=flat-square) ![license](https://img.shields.io/github/license/BehaviorTree/BehaviorTree.CPP?style=flat-square)
- [erincatto/Box2D](https://github.com/erincatto/Box2D) - Box2D is a 2D physics engine for games. ![stars](https://img.shields.io/github/stars/erincatto/Box2D?style=flat-square) ![license](https://img.shields.io/github/license/erincatto/Box2D?style=flat-square)
- [godotengine/godot](https://github.com/godotengine/godot) :zap: - Multi-platform 2D and 3D game engine. ![stars](https://img.shields.io/github/stars/godotengine/godot?style=flat-square) ![license](https://img.shields.io/github/license/godotengine/godot?style=flat-square)
- [jrouwe/JoltPhysics](https://github.com/jrouwe/JoltPhysics) - A multi core friendly rigid body physics and collision detection library, written in C++, suitable for games and VR applications. ![stars](https://img.shields.io/github/stars/jrouwe/JoltPhysics?style=flat-square) ![license](https://img.shields.io/github/license/jrouwe/JoltPhysics?style=flat-square)
- [pocketpy/pocketpy](https://github.com/pocketpy/pocketpy) :construction: - A header-only Python interpreter for game scripting in Modern C++. ![stars](https://img.shields.io/github/stars/pocketpy/pocketpy?style=flat-square) ![license](https://img.shields.io/github/license/pocketpy/pocketpy?style=flat-square)
- [raysan5/raylib](https://github.com/raysan5/raylib) :zap: - A simple and easy-to-use library to enjoy videogames programming. ![stars](https://img.shields.io/github/stars/raysan5/raylib?style=flat-square) ![license](https://img.shields.io/github/license/raysan5/raylib?style=flat-square)
- [skypjack/entt](https://github.com/skypjack/entt) :zap: - Gaming meets modern C++ - a fast and reliable entity component system (ECS) and much more. ![stars](https://img.shields.io/github/stars/skypjack/entt?style=flat-square) ![license](https://img.shields.io/github/license/skypjack/entt?style=flat-square)
- [ThePhD/sol2](https://github.com/ThePhD/sol2) - a C++ <-> Lua API wrapper with advanced features and top notch performance. ![stars](https://img.shields.io/github/stars/ThePhD/sol2?style=flat-square) ![license](https://img.shields.io/github/license/ThePhD/sol2?style=flat-square)

## Image Processing

- [davisking/dlib](https://github.com/davisking/dlib) :zap: - A toolkit for making real world machine learning and data analysis applications in C++. ![stars](https://img.shields.io/github/stars/davisking/dlib?style=flat-square) ![license](https://img.shields.io/github/license/davisking/dlib?style=flat-square)
- [opencv/opencv](https://github.com/opencv/opencv) :zap: - Open Source Computer Vision Library. ![stars](https://img.shields.io/github/stars/opencv/opencv?style=flat-square) ![license](https://img.shields.io/github/license/opencv/opencv?style=flat-square)
- [PointCloudLibrary/pcl](https://github.com/PointCloudLibrary/pcl) - A standalone, large scale, open project for 2D/3D image and point cloud processing. ![stars](https://img.shields.io/github/stars/PointCloudLibrary/pcl?style=flat-square) ![license](https://img.shields.io/github/license/PointCloudLibrary/pcl?style=flat-square)

## Internationalization

- [unicode-org/icu](https://github.com/unicode-org/icu) - A set of C/C++ libraries providing Unicode and Globalization support. ![stars](https://img.shields.io/github/stars/unicode-org/icu?style=flat-square) ![license](https://img.shields.io/github/license/unicode-org/icu?style=flat-square)

## JIT

- [herumi/xbyak](https://github.com/herumi/xbyak) - A JIT assembler for x86/x64 architectures supporting MMX, SSE (1-4), AVX (1-2, 512), FPU, APX, and AVX10.2. ![stars](https://img.shields.io/github/stars/herumi/xbyak?style=flat-square) ![license](https://img.shields.io/github/license/herumi/xbyak?style=flat-square)
- [libriscv/libriscv](https://github.com/libriscv/libriscv) - a simple, slim and complete sandbox that is highly embeddable and configurable, specializes in low-latency, low-footprint emulation. ![stars](https://img.shields.io/github/stars/libriscv/libriscv?style=flat-square) ![license](https://img.shields.io/github/license/libriscv/libriscv?style=flat-square)

## JSON

- [bblanchon/ArduinoJson](https://github.com/bblanchon/ArduinoJson) - Simple and efficient JSON library for Arduino and embedded C++. ![stars](https://img.shields.io/github/stars/bblanchon/ArduinoJson?style=flat-square) ![license](https://img.shields.io/github/license/bblanchon/ArduinoJson?style=flat-square)
- [nlohmann/json](https://github.com/nlohmann/json) :zap: - JSON for Modern C++. ![stars](https://img.shields.io/github/stars/nlohmann/json?style=flat-square) ![license](https://img.shields.io/github/license/nlohmann/json?style=flat-square)
- [simdjson/simdjson](https://github.com/simdjson/simdjson) :zap: - Parsing gigabytes of JSON per second. ![stars](https://img.shields.io/github/stars/simdjson/simdjson?style=flat-square) ![license](https://img.shields.io/github/license/simdjson/simdjson?style=flat-square)
- [Tencent/rapidjson](https://github.com/Tencent/rapidjson) :zap: - A fast JSON parser/generator for C++ with both SAX/DOM style API. ![stars](https://img.shields.io/github/stars/Tencent/rapidjson?style=flat-square) ![license](https://img.shields.io/github/license/Tencent/rapidjson?style=flat-square)

## Logging

- [gabime/spdlog](https://github.com/gabime/spdlog) :zap: - Fast C++ logging library. ![stars](https://img.shields.io/github/stars/gabime/spdlog?style=flat-square) ![license](https://img.shields.io/github/license/gabime/spdlog?style=flat-square)

## Machine Learning

- [davisking/dlib](https://github.com/davisking/dlib) :zap: - A toolkit for making real world machine learning and data analysis applications in C++. ![stars](https://img.shields.io/github/stars/davisking/dlib?style=flat-square) ![license](https://img.shields.io/github/license/davisking/dlib?style=flat-square)
- [flashlight/flashlight](https://github.com/flashlight/flashlight) - A C++ standalone library for machine learning. ![stars](https://img.shields.io/github/stars/flashlight/flashlight?style=flat-square) ![license](https://img.shields.io/github/license/flashlight/flashlight?style=flat-square)
- [mlpack/mlpack](https://github.com/mlpack/mlpack) - A fast, header-only C++ machine learning library. ![stars](https://img.shields.io/github/stars/mlpack/mlpack?style=flat-square) ![license](https://img.shields.io/github/license/mlpack/mlpack?style=flat-square)
- [pytorch/pytorch](https://github.com/pytorch/pytorch) :zap: - The PyTorch C++ frontend is a pure C++ interface to the PyTorch machine learning framework. ![stars](https://img.shields.io/github/stars/pytorch/pytorch?style=flat-square) ![license](https://img.shields.io/github/license/pytorch/pytorch?style=flat-square)

## Math

- [arrayfire/arrayfire](https://github.com/arrayfire/arrayfire) - A general-purpose tensor library that simplifies the software development process for the parallel architectures found in CPUs, GPUs, and other hardware acceleration devices. ![stars](https://img.shields.io/github/stars/arrayfire/arrayfire?style=flat-square) ![license](https://img.shields.io/github/license/arrayfire/arrayfire?style=flat-square)
- [dpilger26/NumCpp](https://github.com/dpilger26/NumCpp) -  C++ implementation of the Python Numpy library . ![stars](https://img.shields.io/github/stars/dpilger26/NumCpp?style=flat-square) ![license](https://img.shields.io/github/license/dpilger26/NumCpp?style=flat-square)
- [g-truc/glm](https://github.com/g-truc/glm) :zap: - OpenGL Mathematics. ![stars](https://img.shields.io/github/stars/g-truc/glm?style=flat-square) ![license](https://img.shields.io/github/license/g-truc/glm?style=flat-square)

## Multimedia

- [libsdl-org/SDL](https://github.com/libsdl-org/SDL) - Simple Directmedia Layer. ![stars](https://img.shields.io/github/stars/libsdl-org/SDL?style=flat-square) ![license](https://img.shields.io/github/license/libsdl-org/SDL?style=flat-square)
- [SFML/SFML](https://github.com/SFML/SFML) :zap: - Simple and Fast Multimedia Library. ![stars](https://img.shields.io/github/stars/SFML/SFML?style=flat-square) ![license](https://img.shields.io/github/license/SFML/SFML?style=flat-square)

## Networking

- [boostorg/asio](https://github.com/boostorg/asio) - A cross-platform C++ library for network and low-level I/O programming. ![stars](https://img.shields.io/github/stars/boostorg/asio?style=flat-square) ![license](https://img.shields.io/github/license/boostorg/asio?style=flat-square)
- [boostorg/beast](https://github.com/boostorg/beast) - HTTP and WebSocket built on Boost.Asio in C++11. ![stars](https://img.shields.io/github/stars/boostorg/beast?style=flat-square) ![license](https://img.shields.io/github/license/boostorg/beast?style=flat-square)
- [CrowCpp/Crow](https://github.com/CrowCpp/Crow) - A Fast and Easy to use microframework for the web. ![stars](https://img.shields.io/github/stars/CrowCpp/Crow?style=flat-square) ![license](https://img.shields.io/github/license/CrowCpp/Crow?style=flat-square)
- [libcpr/cpr](https://github.com/libcpr/cpr) - C++ Requests: Curl for People, a spiritual port of Python Requests. ![stars](https://img.shields.io/github/stars/libcpr/cpr?style=flat-square) ![license](https://img.shields.io/github/license/libcpr/cpr?style=flat-square)
- [netcan/asyncio](https://github.com/netcan/asyncio) :construction: - A C++20 library to write concurrent code using the async/await syntax. ![stars](https://img.shields.io/github/stars/netcan/asyncio?style=flat-square) ![license](https://img.shields.io/github/license/netcan/asyncio?style=flat-square)
- [pocoproject/poco](https://github.com/pocoproject/poco) - A Powerful cross-platform C++ libraries for building network- and internet-based applications that run on desktop, server, mobile, IoT, and embedded systems. ![stars](https://img.shields.io/github/stars/pocoproject/poco?style=flat-square) ![license](https://img.shields.io/github/license/pocoproject/poco?style=flat-square)
- [sogou/workflow](https://github.com/sogou/workflow) :zap: - C++ Parallel Computing and Asynchronous Networking Framework. ![stars](https://img.shields.io/github/stars/sogou/workflow?style=flat-square) ![license](https://img.shields.io/github/license/sogou/workflow?style=flat-square)
- [uNetworking/uWebSockets](https://github.com/uNetworking/uWebSockets) :zap: - Simple, secure & standards compliant web server for the most demanding of applications. ![stars](https://img.shields.io/github/stars/uNetworking/uWebSockets?style=flat-square) ![license](https://img.shields.io/github/license/uNetworking/uWebSockets?style=flat-square)

## Physics

- [erincatto/Box2D](https://github.com/erincatto/Box2D) - Box2D is a 2D physics engine for games. ![stars](https://img.shields.io/github/stars/erincatto/Box2D?style=flat-square) ![license](https://img.shields.io/github/license/erincatto/Box2D?style=flat-square)
- [jrouwe/JoltPhysics](https://github.com/jrouwe/JoltPhysics) - A multi core friendly rigid body physics and collision detection library, written in C++, suitable for games and VR applications. ![stars](https://img.shields.io/github/stars/jrouwe/JoltPhysics?style=flat-square) ![license](https://img.shields.io/github/license/jrouwe/JoltPhysics?style=flat-square)

## Reflection

- [Neargye/magic_enum](https://github.com/Neargye/magic_enum) - Static reflection for enums (to string, from string, iteration) for modern C++, work with any enum type without any macro or boilerplate code. ![stars](https://img.shields.io/github/stars/Neargye/magic_enum?style=flat-square) ![license](https://img.shields.io/github/license/Neargye/magic_enum?style=flat-square)

## Rendering

- [bkaradzic/bgfx](https://github.com/bkaradzic/bgfx) :zap: - Cross-platform, graphics API agnostic, "Bring Your Own Engine/Framework" style rendering library. ![stars](https://img.shields.io/github/stars/bkaradzic/bgfx?style=flat-square) ![license](https://img.shields.io/github/license/bkaradzic/bgfx?style=flat-square)
- [libsdl-org/SDL](https://github.com/libsdl-org/SDL) - Simple Directmedia Layer. ![stars](https://img.shields.io/github/stars/libsdl-org/SDL?style=flat-square) ![license](https://img.shields.io/github/license/libsdl-org/SDL?style=flat-square)
- [raysan5/raylib](https://github.com/raysan5/raylib) :zap: - A simple and easy-to-use library to enjoy videogames programming. ![stars](https://img.shields.io/github/stars/raysan5/raylib?style=flat-square) ![license](https://img.shields.io/github/license/raysan5/raylib?style=flat-square)
- [SFML/SFML](https://github.com/SFML/SFML) :zap: - Simple and Fast Multimedia Library. ![stars](https://img.shields.io/github/stars/SFML/SFML?style=flat-square) ![license](https://img.shields.io/github/license/SFML/SFML?style=flat-square)

## Scripting

- [herumi/xbyak](https://github.com/herumi/xbyak) - A JIT assembler for x86/x64 architectures supporting MMX, SSE (1-4), AVX (1-2, 512), FPU, APX, and AVX10.2. ![stars](https://img.shields.io/github/stars/herumi/xbyak?style=flat-square) ![license](https://img.shields.io/github/license/herumi/xbyak?style=flat-square)
- [libriscv/libriscv](https://github.com/libriscv/libriscv) - a simple, slim and complete sandbox that is highly embeddable and configurable, specializes in low-latency, low-footprint emulation. ![stars](https://img.shields.io/github/stars/libriscv/libriscv?style=flat-square) ![license](https://img.shields.io/github/license/libriscv/libriscv?style=flat-square)
- [pocketpy/pocketpy](https://github.com/pocketpy/pocketpy) :construction: - A header-only Python interpreter for game scripting in Modern C++. ![stars](https://img.shields.io/github/stars/pocketpy/pocketpy?style=flat-square) ![license](https://img.shields.io/github/license/pocketpy/pocketpy?style=flat-square)
- [ThePhD/sol2](https://github.com/ThePhD/sol2) - a C++ <-> Lua API wrapper with advanced features and top notch performance. ![stars](https://img.shields.io/github/stars/ThePhD/sol2?style=flat-square) ![license](https://img.shields.io/github/license/ThePhD/sol2?style=flat-square)

## Serialization

- [google/flatbuffers](https://github.com/google/flatbuffers) :zap: - A cross platform serialization library architected for maximum memory efficiency. ![stars](https://img.shields.io/github/stars/google/flatbuffers?style=flat-square) ![license](https://img.shields.io/github/license/google/flatbuffers?style=flat-square)
- [protocolbuffers/protobuf](https://github.com/protocolbuffers/protobuf) :zap: - A language-neutral, platform-neutral, extensible mechanism for serializing structured data. ![stars](https://img.shields.io/github/stars/protocolbuffers/protobuf?style=flat-square) ![license](https://img.shields.io/github/license/protocolbuffers/protobuf?style=flat-square)
- [USCiLab/cereal](https://github.com/USCiLab/cereal) - A C++11 library for serialization. ![stars](https://img.shields.io/github/stars/USCiLab/cereal?style=flat-square) ![license](https://img.shields.io/github/license/USCiLab/cereal?style=flat-square)

## TUI

- [ArthurSonzogni/FTXUI](https://github.com/ArthurSonzogni/FTXUI) - A simple cross-platform C++ library for terminal based user interfaces. ![stars](https://img.shields.io/github/stars/ArthurSonzogni/FTXUI?style=flat-square) ![license](https://img.shields.io/github/license/ArthurSonzogni/FTXUI?style=flat-square)

## Unit Testing

- [catchorg/Catch2](https://github.com/catchorg/Catch2) :zap: - A modern, C++-native, test framework for unit-tests, TDD and BDD - using C++14, C++17 and later. ![stars](https://img.shields.io/github/stars/catchorg/Catch2?style=flat-square) ![license](https://img.shields.io/github/license/catchorg/Catch2?style=flat-square)

## XML

- [leethomason/tinyxml2](https://github.com/leethomason/tinyxml2) - A simple, small, efficient, C++ XML parser that can be easily integrated. ![stars](https://img.shields.io/github/stars/leethomason/tinyxml2?style=flat-square) ![license](https://img.shields.io/github/license/leethomason/tinyxml2?style=flat-square)

## YAML

- [jbeder/yaml-cpp](https://github.com/jbeder/yaml-cpp) - A YAML parser and emitter in C++. ![stars](https://img.shields.io/github/stars/jbeder/yaml-cpp?style=flat-square) ![license](https://img.shields.io/github/license/jbeder/yaml-cpp?style=flat-square)

## Contributing

Please refer to [CONTRIBUTING.md](CONTRIBUTING.md) for more information.
