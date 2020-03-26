project(src)
set(HEADER_FILES Knoten.h)
set(SOURCE_FILES Knoten.cpp Suchbaum.cpp Suchbaum.h)
add_library(src STATIC ${SOURCE_FILES} ${HEADER_FILES})
