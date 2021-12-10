// Copyright (c) 2021 Zack Isingoma
//
// Created by: Zack Isingoma
// Created on: Dec, 10 2021.
// This program makes users guess numbers.

#include <iostream>
#include <random>

int main() {
    int someRandomNumber;

std::random_device rseed;

  std::mt19937 rgen(rseed());

  std::uniform_int_distribution<int> idist(0, 9);

  someRandomNumber = idist(rgen);
    int number;
    std::cout << "Guess A number between 1 and 9: ";
    std::cin >> number;
    std::cout << "" << std::endl;
    if (number == someRandomNumber) {
        std::cout << "Well done!";
    } else {
        std::cout << "That is incorrect, the right answer was " \
            << someRandomNumber << "\n";
    }
}
