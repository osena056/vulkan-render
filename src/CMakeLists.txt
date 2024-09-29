cmake_minimum_required(VERSION 3.27)

set( VKRENDER_SOURCE_FILES
	say_hello.cpp
	say_hello.h
)

target_sources(vulkan_render PRIVATE ${VKRENDER_SOURCE_FILES})