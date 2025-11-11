#pragma once
#include <string>
#include <iostream>
#include "ZooException.h"
using namespace std;

class Animal
{
protected:
	std::string name;
	bool predator;
public:
    Animal(string n, bool p) : name(n), predator(p) {
        if (n.empty()) throw NameException();
    }

    virtual ~Animal() {}

    string getName() { return name; }
    void setName(string n) {
        if (n.empty()) throw NameException();
        name = n;
    }

    bool getPredator() { return predator; }
    void setPredator(bool p) { predator = p; }

    virtual void showDescription() = 0;
};