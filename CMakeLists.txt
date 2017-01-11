cmake_minimum_required(VERSION 3.0)
project(sdl_barebones)

include_directories(include $ENV{SDL2_ROOT}/include)
file(GLOB sources src/*.*)

add_executable(game ${sources})
target_link_libraries(game $ENV{SDL2_ROOT}/lib/x86/sdl2.lib)

add_custom_command(TARGET game POST_BUILD
					COMMAND ${CMAKE_COMMAND} -E copy
					$ENV{SDL2_ROOT}/lib/x86/sdl2.dll
					${CMAKE_CURRENT_BINARY_DIR}
					)