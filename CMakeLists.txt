CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
SET(CMAKE_CXX_STANDARD 11)
PROJECT(CPPLeetCodeTemplate)
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY build)


ADD_LIBRARY(TemplateFunctions
  src/TreeFunctions.cpp
  src/LinkedListFunctions.cpp
)

TARGET_INCLUDE_DIRECTORIES(TemplateFunctions PUBLIC
  "${PROJECT_SOURCE_DIR}/lib"
)

ADD_EXECUTABLE(main
  src/main.cpp
)


TARGET_LINK_LIBRARIES(main PUBLIC TemplateFunctions)