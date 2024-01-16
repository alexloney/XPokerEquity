
add_executable(joktest1
	${CMAKE_CURRENT_SOURCE_DIR}/tests/joktest1.c)
target_include_directories(joktest1 PRIVATE include)
target_link_libraries(joktest1 PRIVATE PokerEval)

add_executable(enumtest1
	${CMAKE_CURRENT_SOURCE_DIR}/tests/enumtest1.c)
target_include_directories(enumtest1 PRIVATE include)
target_link_libraries(enumtest1 PRIVATE PokerEval)

add_executable(enumtest2
	${CMAKE_CURRENT_SOURCE_DIR}/tests/enumtest2.c)
target_include_directories(enumtest2 PRIVATE include)
target_link_libraries(enumtest2 PRIVATE PokerEval)

add_executable(enumtest3
	${CMAKE_CURRENT_SOURCE_DIR}/tests/enumtest3.c)
target_include_directories(enumtest3 PRIVATE include)
target_link_libraries(enumtest3 PRIVATE PokerEval)

add_executable(enumtest5
	${CMAKE_CURRENT_SOURCE_DIR}/tests/enumtest5.c)
target_include_directories(enumtest5 PRIVATE include)
target_link_libraries(enumtest5 PRIVATE PokerEval)

add_executable(enumtest7
	${CMAKE_CURRENT_SOURCE_DIR}/tests/enumtest7.c)
target_include_directories(enumtest7 PRIVATE include)
target_link_libraries(enumtest7 PRIVATE PokerEval)

add_executable(poker_wrapper
	${CMAKE_CURRENT_SOURCE_DIR}/tests/poker_wrapper.c)
target_include_directories(poker_wrapper PRIVATE include)
target_link_libraries(poker_wrapper PRIVATE PokerEval)

add_executable(razz
	${CMAKE_CURRENT_SOURCE_DIR}/tests/razz.c)
target_include_directories(razz PRIVATE include)
target_link_libraries(razz PRIVATE PokerEval)
