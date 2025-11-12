#include <iostream>
#include "Volyer.h"
#include "Fish.h"
#include "Bird.h"
#include "Mammal.h"
#include "Windows.h"
using namespace std;

int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    try {
        try {
            Animal* bad = new Mammal("", true, "Ліс");
        }
        catch (const NameException& e) {
            cout << e.showMessage() << endl;
        }

        Volyer v1(1, 2);

        Animal* a1 = new Mammal("Вовк", true, "Ліс");
        Animal* a2 = new Bird("Орел", true, 120);
        Animal* a3 = new Fish("Щука", false, false);

        try {
            v1.addAnimal(a1);
            v1.addAnimal(a2);
            v1.addAnimal(a3);
        }
        catch (const ZooException& e) {
            cout << e.showMessage() << endl;
        }

        v1.showAnimals();

    }
    catch (const exception& e) {
        cout << "Сталася помилка: " << e.what() << endl;
    }

    return 0;
}
