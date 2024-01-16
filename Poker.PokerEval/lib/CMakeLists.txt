
add_library(PokerEval STATIC
	${CMAKE_CURRENT_SOURCE_DIR}/lib/combinations.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/deck.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/deck_astud.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/deck_joker.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/deck_std.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/enumerate.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/enumord.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/evx.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/lowball.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/rules_astud.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/rules_joker.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/rules_std.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/t_astudcardmasks.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/t_botcard.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/t_botfivecards.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/t_botfivecardsj.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/t_cardmasks.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/t_evx_flushcards.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/t_evx_pairval.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/t_evx_strval.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/t_evx_tripsval.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/t_jokercardmasks.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/t_jokerstraight.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/t_maskrank.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/t_nbits.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/t_nbitsandstr.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/t_straight.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/t_topbit.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/t_topcard.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/t_topfivebits.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/t_topfivecards.c
	${CMAKE_CURRENT_SOURCE_DIR}/lib/t_toptwobits.c)
target_include_directories(PokerEval PRIVATE include)
set_target_properties(PokerEval PROPERTIES LINKER_LANGUAGE C)
set_target_properties(PokerEval PROPERTIES POSITION_INDEPENDENT_CODE ON)

add_executable(mktab_basic
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/mktable.c
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/mktable_utils.c
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/mktab_basic.c)
target_include_directories(mktab_basic PRIVATE include)
set_target_properties(mktab_basic PROPERTIES LINKER_LANGUAGE C)
target_link_libraries(mktab_basic PRIVATE PokerEval)

add_executable(mktab_joker
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/mktable.c
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/mktable_utils.c
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/mktab_joker.c)
target_include_directories(mktab_joker PRIVATE include)
set_target_properties(mktab_joker PROPERTIES LINKER_LANGUAGE C)
target_link_libraries(mktab_joker PRIVATE PokerEval)

add_executable(mktab_packed
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/mktable.c
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/mktable_utils.c
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/mktab_packed.c)
target_include_directories(mktab_packed PRIVATE include)
set_target_properties(mktab_packed PROPERTIES LINKER_LANGUAGE C)
target_link_libraries(mktab_packed PRIVATE PokerEval)

add_executable(mktab_evx
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/mktable.c
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/mktable_utils.c
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/mktab_evx.c)
target_include_directories(mktab_evx PRIVATE include)
set_target_properties(mktab_evx PROPERTIES LINKER_LANGUAGE C)
target_link_libraries(mktab_evx PRIVATE PokerEval)

add_executable(mktab_astud
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/mktable.c
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/mktable_utils.c
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/mktab_astud.c)
target_include_directories(mktab_astud PRIVATE include)
set_target_properties(mktab_astud PROPERTIES LINKER_LANGUAGE C)
target_link_libraries(mktab_astud PRIVATE PokerEval)

add_executable(mktab_lowball
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/mktable.c
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/mktable_utils.c
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/mktab_lowball.c)
target_include_directories(mktab_lowball PRIVATE include)
set_target_properties(mktab_lowball PROPERTIES LINKER_LANGUAGE C)
target_link_libraries(mktab_lowball PRIVATE PokerEval)

# add_executable(evx_gen5
#     ${CMAKE_CURRENT_SOURCE_DIR}/lib/evx_generate.c)
# target_include_directories(evx_gen5 PRIVATE include)
# set_target_properties(evx_gen5 PROPERTIES LINKER_LANGUAGE C)
# set_target_properties(evx_gen5 PROPERTIES CMAKE_C_FLAGS "-DCARDS_DEALT=5")
# target_link_libraries(evx_gen5 PRIVATE PokerEval)
# 
# add_executable(evx_gen7
#     ${CMAKE_CURRENT_SOURCE_DIR}/lib/evx_generate.c)
# target_include_directories(evx_gen7 PRIVATE include)
# set_target_properties(evx_gen7 PROPERTIES LINKER_LANGUAGE C)
# set_target_properties(evx_gen7 PROPERTIES CMAKE_C_FLAGS "-DCARDS_DEALT=7")
# target_link_libraries(evx_gen7 PRIVATE PokerEval)
