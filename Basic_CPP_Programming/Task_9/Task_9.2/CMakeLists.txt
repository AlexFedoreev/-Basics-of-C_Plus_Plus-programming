# CMakeList.txt: проект CMake для Task_9.2_CMake; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.10)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("Task_9.2_CMake.")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Task_9.2_CMake "Task_9.2_CMake.cpp" "classFigures.cpp" "ClassFigures_h.h" "ClassThreeSideFigures.h" "ClassFourSideFigures.h" "ClassRightAngleTriangle.h" "ClassIsoscelesSideTriangle.h" "EqualSidedTriangle.h" "ClassRectangle.h" "ClassSquare.h" "ClassParallelogram.h" "ClassRhombus.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Task_9.2_CMake PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
