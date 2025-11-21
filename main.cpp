/* Program name: main.cpp
 * Author: Sahar Musleh
 * Date last updated: 11/21/2025
 * Purpose: Demonstrate polymorphism with RPG character classes.
 */
 
#include <iostream>
#include "character.h"

int main() {
    int num;
    std::cout << "How many characters do you want to create? ";
    std::cin >> num;

    Character** party = new Character*[num];

    for (int i = 0; i < num; i++) {
        std::string name;
        int choice;
        std::cout << "What is the name for character #" << (i+1) << "? ";
        std::cin.ignore();
        std::getline(std::cin, name);

        std::cout << "What character class do you want " << name << " to be?\n"
                  << "1. Fighter Class\n2. Rogue Class\n3. Magician Class\n4. Cleric Class\n";
        std::cin >> choice;

        switch(choice) {
            case 1: party[i] = new Fighter(name); break;
            case 2: party[i] = new Rogue(name); break;
            case 3: party[i] = new Magician(name); break;
            case 4: party[i] = new Cleric(name); break;
            default: std::cout << "Invalid choice, defaulting to Fighter.\n";
                     party[i] = new Fighter(name);
        }
    }

    std::cout << "\nYour Party:\n";
    for (int i = 0; i < num; i++) {
        std::cout << party[i]->toString() << "\n";
        delete party[i];
    }
    delete[] party;

    return 0;
}