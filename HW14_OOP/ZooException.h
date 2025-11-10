#pragma once
#include <string>
class ZooException
{
public:
	virtual ~ZooException() = default;
	virtual std::string showMessage() const = 0;
};

class PredatorException : public ZooException
{
public:
	std::string showMessage() const override {

		return "Помилка: не можна додати хижака до вольєру з не хижими тваринами (або навпаки)!";
	}
};

class MaxCapacityException : public ZooException
{
public:
	std::string showMessage() const override {

		return "Помилка: перевищено максимальну кількість тварин у вольєрі!";
	}
};

class NameException : public ZooException
{
	std::string showMessage() const override {
		return "Неможливо створити тварину - не вказана назва";
	}
};