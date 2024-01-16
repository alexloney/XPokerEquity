
add_executable(five_card_hands
	${CMAKE_CURRENT_SOURCE_DIR}/examples/five_card_hands.c)
target_include_directories(five_card_hands PRIVATE include)
target_link_libraries(five_card_hands PRIVATE PokerEval)

add_executable(hcmp2
	${CMAKE_CURRENT_SOURCE_DIR}/examples/hcmp2.c)
target_include_directories(hcmp2 PRIVATE include)
target_link_libraries(hcmp2 PRIVATE PokerEval)

add_executable(hcmpn
	${CMAKE_CURRENT_SOURCE_DIR}/examples/hcmpn.c)
target_include_directories(hcmpn PRIVATE include)
target_link_libraries(hcmpn PRIVATE PokerEval)

add_executable(pokenum
	${CMAKE_CURRENT_SOURCE_DIR}/examples/pokenum.c)
target_include_directories(pokenum PRIVATE include)
target_link_libraries(pokenum PRIVATE PokerEval)

add_executable(seven_card_hands
	${CMAKE_CURRENT_SOURCE_DIR}/examples/seven_card_hands.c)
target_include_directories(seven_card_hands PRIVATE include)
target_link_libraries(seven_card_hands PRIVATE PokerEval)

add_executable(usedecks
	${CMAKE_CURRENT_SOURCE_DIR}/examples/usedecks.c)
target_include_directories(usedecks PRIVATE include)
target_link_libraries(usedecks PRIVATE PokerEval)
