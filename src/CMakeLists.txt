file(GLOB adventure_files *.c)

add_executable(adventure ${adventure_files})
target_link_libraries(adventure ${libs})

install(
	TARGETS adventure
	RUNTIME DESTINATION bin
)