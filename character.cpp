/* Program name: character.cpp
 * Author: Sahar Musleh
 * Date last updated: 11/21/2025
 * Purpose: Implements constructors and toString() methods for Character classes to demonstrate polymorphism in an RPG character system.
 */

#include "character.h"
#include <sstream>
#include <iomanip>

// Fighter implementation
Fighter::Fighter(std::string n) : Character(n) {
    // Fighter attributes
    HP = 300; MP = 0;
    Strength = 16; Dexterity = 10; Intelligence = 5;
    Speed = 8; Endurance = 15; Faith = 5;
}
// Return formatted stats for Fighter
std::string Fighter::toString() const {
    std::ostringstream out;
    out << name << " the Fighter stats:\n"
        << "HP: " << std::fixed << std::setprecision(2) << HP << "\n"
        << "MP: " << MP << "\n"
        << "Strength: " << Strength << "\n"
        << "Dexterity: " << Dexterity << "\n"
        << "Intelligence: " << Intelligence << "\n"
        << "Speed: " << Speed << "\n"
        << "Endurance: " << Endurance << "\n"
        << "Faith: " << Faith << "\n";
    return out.str();
}

// Rogue implementation
Rogue::Rogue(std::string n) : Character(n) {
    // Rogue attributes
    HP = 200; MP = 0;
    Strength = 10; Dexterity = 16; Intelligence = 16;
    Speed = 15; Endurance = 8; Faith = 5;
}
// Returns formatted stats for Rogue
std::string Rogue::toString() const {
    std::ostringstream out;
    out << name << " the Rogue stats:\n"
        << "HP: " << std::fixed << std::setprecision(2) << HP << "\n"
        << "MP: " << MP << "\n"
        << "Strength: " << Strength << "\n"
        << "Dexterity: " << Dexterity << "\n"
        << "Intelligence: " << Intelligence << "\n"
        << "Speed: " << Speed << "\n"
        << "Endurance: " << Endurance << "\n"
        << "Faith: " << Faith << "\n";
    return out.str();
}

// Magician implementation
Magician::Magician(std::string n) : Character(n) {
    // Magician atttibutes
    HP = 250; MP = 200;
    Strength = 5; Dexterity = 10; Intelligence = 16;
    Speed = 16; Endurance = 5; Faith = 8;
}
// Returns formatted stats for Magician
std::string Magician::toString() const {
    std::ostringstream out;
    out << name << " the Magician stats:\n"
        << "HP: " << std::fixed << std::setprecision(2) << HP << "\n"
        << "MP: " << MP << "\n"
        << "Strength: " << Strength << "\n"
        << "Dexterity: " << Dexterity << "\n"
        << "Intelligence: " << Intelligence << "\n"
        << "Speed: " << Speed << "\n"
        << "Endurance: " << Endurance << "\n"
        << "Faith: " << Faith << "\n";
    return out.str();
}

// Cleric implementation
Cleric::Cleric(std::string n) : Character(n) {
   // Cleric attrubutes 
    HP = 200; MP = 200;
    Strength = 5; Dexterity = 10; Intelligence = 8;
    Speed = 16; Endurance = 5; Faith = 16;
}
// Returns formatted stats for Cleric
std::string Cleric::toString() const {
    std::ostringstream out;
    out << name << " the Cleric stats:\n"
        << "HP: " << std::fixed << std::setprecision(2) << HP << "\n"
        << "MP: " << MP << "\n"
        << "Strength: " << Strength << "\n"
        << "Dexterity: " << Dexterity << "\n"
        << "Intelligence: " << Intelligence << "\n"
        << "Speed: " << Speed << "\n"
        << "Endurance: " << Endurance << "\n"
        << "Faith: " << Faith << "\n";
    return out.str();
}
