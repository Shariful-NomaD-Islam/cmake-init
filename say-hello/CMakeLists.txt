add_library (
	say-hello
	"src/sayHello/hello.hpp"
	"src/sayHello/hello.cpp"
)

target_include_directories(say-hello PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

#target_compile_definitions(say-hello PUBLIC SAY_HELLO_VERSION=4)		# visible to all 
#target_compile_definitions(say-hello PRIVATE SAY_HELLO_VERSION=4)		# visible only to library
#target_compile_definitions(say-hello INTERFACE SAY_HELLO_VERSION=4)	# visible only to linked-consumer