/* Program name: character.h
 * Author: Sahar Musleh
 * Date last updated: 11/21/2025
 * Purpose: Implements constructors and toString() methods for Character classes to demonstrate polymorphism in an RPG character system.
 */

#include "character.h"
#include <sstream>

Fighter::Fighter(std::String n) : Character(n) {
    HP = 300; MP = 0; Strength = 16; Dexterity = 10; Intelligence = 5;
    Speed = 8; Endurance = 15; Faith = 5;
}

std::string Fighter::toString() const {
    std::ostringstream out;
    out << name << " the Fighter stats:\n"
        << "HP: " << HP << " MP: " << "\n"
        << "Strength: " << Strength << " Dexterity: " << Dexterity << "\n"
        << "Intelligence: " << Intelligence << " Speed: " << Speed << "\n"
        << "Endurance: " << Endurance << " Faith: " << Faith << "\n";
    return out.str();
}