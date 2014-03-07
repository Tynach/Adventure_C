file(GLOB adveng_files *.c)
add_library(adveng SHARED ${adveng_files})

install(
	TARGETS adveng
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib
)