// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Nov/5/2023
// This program allows the user to buy
// a burger with 2 sizes, fries, and a drink.
// The program will print the subtotal, tax,
// and total cost of the purchase.

#include <cstdlib>
#include <iomanip>
#include <string>
#include <iostream>

int main() {
    // Declaring constant for tax.
    const float TAX = 0.13;

    // Declaring variables.
    // Allowing for the different prices of
    // a burger to be under 1 variable.
    // Source: https://cplusplus.com/forum/general/75370/
    float burgerPrices[] = {5.00, 7.00};
    int friesPrice = 3.00;
    int drinkPrice = 1.00;
    float subtotal = 0.0;
    float tax = 0.0;
    float total = 0.0;

    // Initialize fries_as_integer and drink_as_integer
    // and burger_size_as_integer with default values of 0.
    int burgerSizeAsInteger = 0;
    int friesAsInteger = 0;
    int drinkAsInteger = 0;

    // Initialing the burgerSize,
    // friesChoice and drinkChoice
    // variables as strings.
    std::string burgerSize;
    std::string friesChoice;
    std::string drinkChoice;

    // Asking the user what size of
    // burger they want.
    std::cout << "What size of burger do you want?\n";
    std::cout << "1 - Small\n";
    std::cout << "2 - Large\n";
    std::cout <<
    "Enter the number representing the option you would like to select.\n";
    std::cout << "If you do not want to order a burger then press enter";
    std::cout << "to proceed to the other menu options.\n";

    // Getting user input for the size
    // of the burger they want.
    std::cout
        << "Enter your size of burger: ";
    // Allowing for the user to skip the question
    // if they do not want a burger.
    // Source:
    // https://stackoverflow.com/questions/6819082/why-does-a-stdgetline-call-on-stdcin-not-wait-for-user-input
    std::getline(std::cin, burgerSize);

    // Initiating try catch.
    try {
        // Converting user input to an integer.
        burgerSizeAsInteger = std::stoi(burgerSize);

        // If the user enters 1, the burger is $5.00.
        if (burgerSizeAsInteger == 1) {
            burgerPrices[1] = 5.00;

            // Else the user enters 2, the burger is $7.00.
        } else {
            burgerPrices[2] = 7.00;
        }

        // Catching any errors.
    } catch (std::invalid_argument) {
        std::cout << "Invalid choice for burger size.\n";
    }

    // Asking the user if they want fries.
    std::cout << "Would you like fries?\n";
    std::cout << "1 - Yes\n";
    std::cout << "2 - No\n";
    std::cout <<
    "Enter the number representing the option you would like to select.\n";
    std::cout << "If you do not want to order a burger then press enter";
    std::cout << "to proceed to the other menu options.\n";

    // Getting user input for fries.
    std::cout << "Enter your choice for fries: ";
    // Allowing for the user to skip the question
    // if they do not want fries.
    // Source:
    // https://stackoverflow.com/questions/6819082/why-does-a-stdgetline-call-on-stdcin-not-wait-for-user-input
    std::getline(std::cin, friesChoice);

    // Initiating try catch.
    try {
        // Converting user input to an integer.
        friesAsInteger = std::stoi(friesChoice);

        // If the user enters 1, the fries are $3.00.
        if (friesAsInteger == 1) {
            friesPrice = 3.00;
            // Else the user enters 2, the fries are $0.00.
        } else {
            friesPrice = 0.00;
        }
        // Catching any errors.
    } catch (std::invalid_argument) {
        std::cout << "Invalid choice for fries.\n";
    }

    // Asking the user if they want a drink.
    std::cout << "Would you like a drink?\n";
    std::cout << "1 - Yes\n";
    std::cout << "2 - No\n";
    std::cout <<
    "Enter the number representing the option you would like to select.\n";
    std::cout <<
    "If you do not want to order a burger then press enter";
    std::cout << "to proceed to the other menu options.\n";

    // Getting user input for drinks.
    std::cout
        << "Enter your choice for a drink: ";
    // Allowing for the user to skip the question
    // if they do not want a drink.
    // Source:
    // https://stackoverflow.com/questions/6819082/why-does-a-stdgetline-call-on-stdcin-not-wait-for-user-input
    std::getline(std::cin, drinkChoice);

    // Initiating try catch.
    try {
        drinkAsInteger = std::stoi(drinkChoice);

        // If the user enters 1, the drink is $1.00.
        if (drinkAsInteger == 1) {
            drinkPrice = 1.00;
            // Else the user enters 2, the drink is $0.00.
        } else {
            drinkPrice = 0.00;
        }
        // Catching errors.
    } catch (std::invalid_argument) {
        std::cout << "Invalid choice for a drink.\n";
    }

    // Calculating the subtotal.
    // Using if, elif and else statements for the several possibilities.

    // If the user wants a small burger,
    // with fries and a drink.
    if (burgerSizeAsInteger == 1 && friesAsInteger == 1 &&
        drinkAsInteger == 1) {
        subtotal = burgerPrices[1] + friesPrice + drinkPrice;
        // Else if the user wants a large burger, with fries and a drink.
    } else if (burgerSizeAsInteger == 2 &&
    friesAsInteger == 1 && drinkAsInteger == 1) {
        subtotal = burgerPrices[2] + friesPrice + drinkPrice;
        // Else if the user wants fries and a drink.
    } else if (friesAsInteger == 1 && drinkAsInteger == 1) {
        subtotal = friesPrice + drinkPrice;
        // Else if the user wants a small burger and a drink.
    } else if (burgerSizeAsInteger == 1 && drinkAsInteger == 1) {
        subtotal = burgerPrices[1] + drinkPrice;
        // Else if the user wants a large burger and a drink.
    } else if (burgerSizeAsInteger == 2 && drinkAsInteger == 1) {
        subtotal = burgerPrices[2] + drinkPrice;
        // Else if the user wants a small burger and fries.
    } else if (burgerSizeAsInteger == 1 && friesAsInteger == 1) {
        subtotal = burgerPrices[1] + friesPrice;
        // Else if the user wants a large burger and fries.
    } else if (burgerSizeAsInteger == 2 && friesAsInteger == 1) {
        subtotal = burgerPrices[2] + friesPrice;
        // Else if the user wants fries.
    } else if (friesAsInteger == 1) {
        subtotal = friesPrice;
        // Else if the user wants a drink.
    } else if (drinkAsInteger == 1) {
        subtotal = drinkPrice;
        // Else if the user wants a small burger.
    } else if (burgerSizeAsInteger == 1) {
        subtotal = burgerPrices[1];
        // Else if the user wants a large burger.
    } else if (burgerSizeAsInteger == 2) {
        subtotal = burgerPrices[2];
    } else {
        std::cout << "We did not get your order. Please try again.\n";
    }

    // Calculating the tax.
    tax = subtotal * TAX;

    // Calculating the total.
    total = subtotal + tax;

    // Displaying the subtotal back to the user.
    std::cout << "Subtotal: $ "
              // Rounding subtotal to 2 decimal places.
              << std::fixed
              << std::setprecision(2)
              << std::setfill('0') << subtotal << "\n";

    // Displaying the tax back to the user.
    std::cout << "Tax: $ "
              // Rounding tax to 2 decimal places.
              << std::fixed << std::setprecision(2)
              << std::setfill('0') << tax << "\n";

    // Displaying the total back to the user.
    std::cout << "Total: $ "
              // Rounding total to 2 decimal places.
              << std::fixed
              << std::setprecision(2)
              << std::setfill('0') << total << "\n";
}
