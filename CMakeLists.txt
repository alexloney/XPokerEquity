cmake_minimum_required(VERSION 3.1)

project(PokerEquityTest
	VERSION 1.0
	LANGUAGES C CXX)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/Poker.PokerEval/)

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
