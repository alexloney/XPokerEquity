cmake_minimum_required(VERSION 3.1)

project(PokerEquityTest
	VERSION 1.0
	LANGUAGES C CXX)

add_library(PokerEval STATIC
	Poker.PokerEval/lib/combinations.c
	Poker.PokerEval/lib/deck.c
	Poker.PokerEval/lib/deck_astud.c
	Poker.PokerEval/lib/deck_joker.c
	Poker.PokerEval/lib/deck_std.c
	Poker.PokerEval/lib/enumerate.c
	Poker.PokerEval/lib/enumord.c
	Poker.PokerEval/lib/evx.c
	Poker.PokerEval/lib/lowball.c
	Poker.PokerEval/lib/rules_astud.c
	Poker.PokerEval/lib/rules_joker.c
	Poker.PokerEval/lib/rules_std.c
	Poker.PokerEval/lib/t_astudcardmasks.c
	Poker.PokerEval/lib/t_botcard.c
	Poker.PokerEval/lib/t_botfivecards.c
	Poker.PokerEval/lib/t_botfivecardsj.c
	Poker.PokerEval/lib/t_cardmasks.c
	Poker.PokerEval/lib/t_evx_flushcards.c
	Poker.PokerEval/lib/t_evx_pairval.c
	Poker.PokerEval/lib/t_evx_strval.c
	Poker.PokerEval/lib/t_evx_tripsval.c
	Poker.PokerEval/lib/t_jokercardmasks.c
	Poker.PokerEval/lib/t_jokerstraight.c
	Poker.PokerEval/lib/t_maskrank.c
	Poker.PokerEval/lib/t_nbits.c
	Poker.PokerEval/lib/t_nbitsandstr.c
	Poker.PokerEval/lib/t_straight.c
	Poker.PokerEval/lib/t_topbit.c
	Poker.PokerEval/lib/t_topcard.c
	Poker.PokerEval/lib/t_topfivebits.c
	Poker.PokerEval/lib/t_topfivecards.c
	Poker.PokerEval/lib/t_toptwobits.c)
target_include_directories(PokerEval PRIVATE Poker.PokerEval/include)
set_target_properties(PokerEval PROPERTIES LINKER_LANGUAGE C)
set_target_properties(PokerEval PROPERTIES POSITION_INDEPENDENT_CODE ON)

add_library(PokerEquity SHARED
	Poker.Equity/AgnosticHand.cpp
	Poker.Equity/Card.cpp
	Poker.Equity/CardConverter.cpp
	Poker.Equity/dllmain.cpp
	Poker.Equity/HoldemCalculator.cpp
	Poker.Equity/HoldemHandDistribution.cpp
	Poker.Equity/mtrand.cpp
	Poker.Equity/PGTRACE.CPP
	Poker.Equity/Poker.Equity.cpp
	Poker.Equity/stdafx.cpp)
target_include_directories(PokerEquity PRIVATE Poker.PokerEval/include)
target_include_directories(PokerEquity PRIVATE Poker.PokerEval/inlines)
set_target_properties(PokerEquity PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries(PokerEquity PRIVATE PokerEval)

add_executable(PokerEquityTest
	Poker.Equity/PGTRACE.CPP
	Poker.Equity.Test/Poker.Equity.Test.cpp
	Poker.Equity.Test/stdafx.cpp)
set_target_properties(PokerEquityTest PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries(PokerEquityTest PRIVATE PokerEquity)
target_include_directories(PokerEquityTest PRIVATE Poker.PokerEval/include)
target_include_directories(PokerEquityTest PRIVATE Poker.PokerEval/inlines)
