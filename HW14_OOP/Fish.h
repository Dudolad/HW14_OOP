#pragma once
#include "Animal.h"

class Fish : public Animal
{
	bool deepWater;
public:
	Fish(string n, bool p, bool deep) : Animal(n, p), deepWater(deep) {}

	bool getDeepWater() { return deepWater; }
	void setDeepWater(bool d) { deepWater = d; }

	void showDescription() override {
		cout << "Риба: " << name
			<< (predator ? " (хижа)" : " (не хижа)")
			<< ", глибоководна: " << (deepWater ? "так" : "ні") << endl;
	}
};