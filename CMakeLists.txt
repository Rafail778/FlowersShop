cmake_minimum_required(VERSION 3.17)
project(FlowerStore)

set(CMAKE_CXX_STANDARD 14)

add_executable(FlowerStore main.cpp FlowerStore.h Brand.h Requisites.h Staff.h Branch.h Person.h FIO.h Date.h Flowers.h Products.h Toys.h Balloons.h Owner.h Address.h)