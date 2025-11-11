#pragma once
#include "Animal.h"

class Mammal : public Animal {
    string habitat;
public:
    Mammal(string n, bool p, string h) : Animal(n, p), habitat(h) {}

    string getHabitat() { return habitat; }
    void setHabitat(string h) { habitat = h; }

    void showDescription() override {
        cout << "Ссавець: " << name
            << (predator ? " (хижа)" : " (не хижа)")
            << ", середовище проживання: " << habitat << endl;
    }
};
