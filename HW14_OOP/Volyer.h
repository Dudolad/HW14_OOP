#pragma once
#include <vector>
#include "Animal.h"

class Volyer {
    int number;
    int maxAnimals;
    vector<Animal*> animals;

public:
    Volyer(int num, int max) : number(num), maxAnimals(max) {}

    int getNumber() { return number; }
    void setNumber(int n) { number = n; }

    int getMaxAnimals() { return maxAnimals; }
    void setMaxAnimals(int m) { maxAnimals = m; }

    int getCurrentAnimals() { return animals.size(); }

    void addAnimal(Animal* a) {
        if (animals.size() >= maxAnimals) throw MaxCapacityException();

        if (!animals.empty()) {
            bool firstPredator = animals[0]->getPredator();
            if (a->getPredator() != firstPredator) {
                throw PredatorException();
            }
        }
        animals.push_back(a);
    }

    void showAnimals() {
        cout << "Вольєр #" << number << " містить " << animals.size() << " тварин:\n";
        for (auto a : animals)
            a->showDescription();
    }

  
    void removeAnimal(const string& n) {
        for (auto it = animals.begin(); it != animals.end(); ++it) {
            if ((*it)->getName() == n) {
                animals.erase(it);
                cout << "Тварину '" << n << "' видалено.\n";
                return;
            }
        }
        cout << "Тварину '" << n << "' не знайдено.\n";
    }

    Animal* findAnimal(const string& n) {
        for (auto a : animals)
            if (a->getName() == n) return a;
        return nullptr;
    }

    ~Volyer() {
        for (auto a : animals)
            delete a;
    }
};
