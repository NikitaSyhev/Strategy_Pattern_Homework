//Этот проект создан с помощью классического шаблона
#include <iostream>


class IStock {
public:
	virtual const void treateCargo() = 0;
	virtual ~IStock(){};
};

class StockTypeA : public IStock {
public:
	const void treateCargo() override {
		std::cout << "We used Stock Type A." << std::endl;
	};
};

class StockTypeB : public IStock {
public:
	const void treateCargo() override {
		std::cout << "We used Stock Type B." << std::endl;
	};
};

class IVehicle {
public:
	virtual const void useVehicle() = 0;
	virtual ~IVehicle() {};

};
class Ship : public IVehicle {
	const void useVehicle() override {
		std::cout << "We used ship." << std::endl;
	}
};

class Van : public IVehicle {
	const void useVehicle() override {
		std::cout << "We used van." << std::endl;
	}
};

class Context {
public:
	const void treat(IStock& stock, IVehicle & vehicle) {
		stock.treateCargo();
		vehicle.useVehicle();
	}
};


int main() {
	setlocale(LC_ALL, "Russian");
	

	StockTypeA stockA;
	StockTypeB stockB;

	Ship ship;
	Van van;



	std::cout << "Situation number 1: " << std::endl;

	Context situation1;

	situation1.treat(stockA, van);

	std::cout << "\n\n";


	std::cout << "Situation number 2: " << std::endl;

	Context situation2;

	situation2.treat(stockB, ship);



















	return 0;
}