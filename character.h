/* Program name: character.h
 * Author: Sahar Musleh
 * Date last updated: 11/21/2025
 * Purpose: Header file defining the base Character class and derived classes (Fighter, Rogue, Magician, Cleric) for RPG character polymorphism.
 */

#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>

class Character {
protected:
    std::string name;
    double HP, MP;
    int Strength, Dexterity, Intelligence, Speed, Endurance, Faith;

public:
    Character(std::string n) : name(n) {}
    virtual ~Character() {}
    virtual std::string toString() const = 0;
};

class Fighter : public Character {
public:
    Fighter(std::string n);
    std::string toString() const override;
};

class Rogue : public Character {
public:
    Rogue(std::string n);
    std::string toString() const override;
};

class Magician : public Character {
public:
    Magician(std::string n);
    std::string toString() const override;
};

class Cleric : public Character {
public:
    Cleric(std::string n);
    std::string toString() const override;
};

#endif
