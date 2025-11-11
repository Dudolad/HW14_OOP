#pragma once
#include "Animal.h"

class Bird : public Animal {
    double flySpeed;
public:
    Bird(string n, bool p, double s) : Animal(n, p), flySpeed(s) {}

    double getFlySpeed() { return flySpeed; }
    void setFlySpeed(double s) { flySpeed = s; }

    void showDescription() override {
        cout << "ѕтах: " << name
            << (predator ? " (хижа)" : " (не хижа)")
            << ", швидк≥сть польоту: " << flySpeed << " км/год" << endl;
    }
};