find_package(SDL3 REQUIRED)
find_package(SDL3_image REQUIRED)
find_package(glm REQUIRED)

add_executable (sdl3demo "sdl3demo.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET sdl3demo PROPERTY CXX_STANDARD 20)
endif()

target_include_directories(sdl3demo PRIVATE
    "D:/SDL/SDL3/include;D:/SDL/SDL3_image-3.2.4/include;D:/SDL/glm-1.0.1-VC/include"
)
target_link_libraries(sdl3demo PRIVATE "D:/SDL/SDL3/lib/x64/SDL3.lib;D:/SDL/SDL3_image-3.2.4/lib/x64/SDL3_image.lib;D:/SDL/glm-1.0.1-VC/lib/glm.lib")
)