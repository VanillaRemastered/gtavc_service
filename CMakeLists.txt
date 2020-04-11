cmake_minimum_required(VERSION 3.15)
project(ViceCityVR)

set(CMAKE_CXX_STANDARD 14)

include_directories(VanillaCore)
include_directories(VanillaCore/Release)
include_directories(VanillaCoreCLI/Release)

include_directories(ViceCityVR $ENV{PLUGIN_SDK_DIR}/plugin_vc/)
include_directories(ViceCityVR $ENV{PLUGIN_SDK_DIR}/plugin_vc/game_vc/)
include_directories(ViceCityVR $ENV{PLUGIN_SDK_DIR}/shared/)
include_directories(ViceCityVR $ENV{PLUGIN_SDK_DIR}/shared/game)
include_directories(ViceCityVR $ENV{RWD3D9_DIR})

include_directories(ViceCityVR)

link_directories($(PLUGIN_SDK_DIR)/output/lib)
link_directories($(RWD3D9_DIR))
link_directories(H:/Vice City)

add_executable(ViceCityVR
        VanillaCore/Release/VANILLACORE.pch
        VanillaCore/dllmain.cpp
        VanillaCore/framework.h
        VanillaCore/pch.cpp
        VanillaCore/pch.h
        VanillaCore/VanillaCore.cpp
        VanillaCore/VanillaCore.h
        ViceCityVR/ViceCityVR.cpp

        )

target_link_libraries(ViceCityVR plugin_vc.lib d3d9.lib
        d3dx9.lib
        rwd3d9.lib
        VANILLACORE.lib)

