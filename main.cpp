/* Program name: main.cpp
 * Author: Sahar Musleh
 * Date last updated: 11/21/2025
 * Purpose: Demonstrate polymorphism with RPG character classes.
 */
 
#include <iostream>
#include <string>
#include "character.h"

int main() {
    int num;
    std::cout << "How many characters do you want to create?\n";
    std::cin >> num;
    // Allocate dynamic array for characters
    Character** party = new Character*[num];
    // Loop to create each character
    for (int i = 0; i < num; i++) {
        std::string name;
        int choice;

        std::cout << "What is the name for character #" << (i + 1) << "?\n";
        std::cin.ignore();
        std::getline(std::cin, name);

        std::cout << "What character class do you want " << name << " to be?\n";
        std::cout << "1. Fighter Class\n2. Rogue Class\n3. Magician Class\n4. Cleric Class\n";

        while (!(std::cin >> choice) || choice < 1 || choice > 4) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "That is not a valid choice. Please choose the class by number from the list.\n";
        }

        switch (choice) {
            case 1: party[i] = new Fighter(name); break;
            case 2: party[i] = new Rogue(name); break;
            case 3: party[i] = new Magician(name); break;
            case 4: party[i] = new Cleric(name); break;
        }
    }
    // Display all characters in the party
    std::cout << "\nYour Party:\n";
    for (int i = 0; i < num; i++) {
        std::cout << party[i]->toString() << "\n";
        delete party[i];
    }
    // Clean up memory
    delete[] party;
    return 0;
}