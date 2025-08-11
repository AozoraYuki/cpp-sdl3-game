# CMakeList.txt: sdl3demo için CMake projesi, kaynağı ekleyin ve tanımlayın
# projeye özgü mantık burada bulunur.

cmake_minimum_required (VERSION 3.8)

# Destekleniyorsa MSVC derleyicileri için Çalışırken Yeniden Yükleme aracını etkinleştirin.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("sdl3demo")

# Kaynağı bu projenin yürütülebilir dosyasına ekleyin.
add_executable (sdl3demo "demo/sdl3demo.cpp"  "demo/timer.h" "demo/Animation.h" "demo/gameobject.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET sdl3demo PROPERTY CXX_STANDARD 20)
endif()

# TODO: Gerekirse testleri ve yükleme hedeflerini ekleyin.
target_include_directories(sdl3demo PRIVATE
    "D:/SDL/SDL3/include;D:/SDL/SDL3_image-3.2.4/include;D:/SDL/glm-1.0.1-VC/include"
)
target_link_libraries(sdl3demo PRIVATE "D:/SDL/SDL3/lib/x64/SDL3.lib;D:/SDL/SDL3_image-3.2.4/lib/x64/SDL3_image.lib;D:/SDL/glm-1.0.1-VC/lib/glm.lib")
