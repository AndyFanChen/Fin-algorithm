cmake_minimum_required(VERSION 3.21)
project(Fin_algorithm_MC)

set(CMAKE_CXX_STANDARD 20)
add_executable(Fin_algorithm_MC main.cpp src/Simulator.cpp includes/Simulator.h includes/Payoff.h src/Payoff.cpp includes/VanillaOption.h src/VanillaOption.cpp src/LookBack.cpp includes/LookBack.h src/CRRBinomialTree.cpp includes/CRRBinomialTree.h includes/ImpliedVolatility.h src/ImpliedVolatility.cpp)
