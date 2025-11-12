#pragma once
#include <string>
using namespace std;
class ZooException
{
public:
	virtual ~ZooException() {};
	virtual string showMessage() const = 0;
};

class PredatorException : public ZooException
{
public:
	string showMessage() const override {

		return "Помилка: не можна додати хижака до вольєру з не хижими тваринами (або навпаки)!";
	}
};

class MaxCapacityException : public ZooException
{
public:
	string showMessage() const override {

		return "Помилка: перевищено максимальну кількість тварин у вольєрі!";
	}
};

class NameException : public ZooException
{
public:
	string showMessage() const override {
		return "Неможливо створити тварину - не вказана назва";
	}
};