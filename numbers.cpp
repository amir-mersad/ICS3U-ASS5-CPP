// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on November 2019
// This program gets numbers from the user and gives
//  the number of positive, negative, and zeros

#include <iostream>


int main() {
    // This function gets numbers from the user and gives
    //  the number of positive, negative, and zeros
    int positive_numbers = 0;
    int zeros = 0;
    int negative_numbers = 0;
    std::string counter_str;
    int counter;
    std::string number_str;
    int number;
    int count = 1;

    // Input
    std::cout << "How many numbers would you like to enter: ";
    std::cin >> counter_str;

    // Process
    try {
        counter = std::stoi(counter_str);
    } catch(std::invalid_argument) {
        std::cout << "Wrong input!!!" << std::endl;
        return 0;
    }
    if (counter > 0) {
        for (count = 1; count <= counter; count++) {
            std::cout << "Please enter a number: ";
            std::cin >> number_str;
            try {
                number = std::stoi(number_str);
            } catch (std::invalid_argument) {
                std::cout << "Wrong input!!!" << std::endl;
                return 0;
            }
            if (number == 0) {
                zeros++;
            } else if (number > 0) {
                positive_numbers++;
            } else if (number < 0) {
                negative_numbers++;
            }
        }
        std::cout << "\nPositive numbers: " << positive_numbers << std::endl;
        std::cout << "zeros: " << zeros << std::endl;
        std::cout << "negative numbers: " << negative_numbers << std::endl;
    } else {
        std::cout << "number should be more than 0!" << std::endl;
    }
}
