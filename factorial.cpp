// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: April, 2022
// Factorial calculator

#include <iostream>

int main() {
  // declaring variables
  int counter = 0;
  int factorial = 1;
  std::string userNum;
  int userInt;
  // get the user number as a string
  std::cout << "Enter a whole number: ";
  std::cin >> userNum;
  std::cout << std::endl;

  try {
       // Casting to int
       userInt = std::stoi(userNum);
       // The user entered a negative number
       if (userInt < 0) {
              
              std::cout << "Invalid input.\n";
              std::exit(EXIT_FAILURE);
       } do  {
              counter = counter + 1;
              std::cout << "Tracking " << counter;
              std::cout << " times through the loop.\n";
              factorial = factorial * counter;
       } while (counter < userInt);

       // display the factorial
       std::cout << "\n" << counter << "! = " << factorial;
       } catch (std::invalid_argument) {
      // The user did not enter a number
      std::cout << "Invalid input.\n";
      std::exit(EXIT_FAILURE);
}
}
