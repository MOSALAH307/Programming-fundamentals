//Asssignment 8:

//Task 1:
//
//#include <iostream>
//using namespace std;
//
//class Vehicle
//{
//protected:
//	string model;
//	string regNumber;
//	int speed;
//	double fuelCapacity;
//	double fuelCompustion;
//public:
//	Vehicle(string m, string n, int s, double fuelCapacity, double fuelCompustion) {
//		model = m;
//		regNumber = n;
//		speed = s;
//		this->fuelCapacity = fuelCapacity;
//		this->fuelCompustion = fuelCompustion;
//	}
//	void fuelNeeded(float distance) {
//		double fuelNeeded = distance * fuelCompustion;
//		cout << "fuelNeeded for " << distance << " kms is : " << fuelNeeded << " liter.\n";
//	}
//	void distanceCovered(float time) {
//		float distance = speed * time;
//		cout << "the distance for " << time << " hours is : " << distance << " km.\n";
//	}
//	virtual void display() = 0;
//};
//
//class Truck :public Vehicle
//{
//private:
//	int cargoWeightLimit;
//public:
//	Truck(int cargoWeightLimit, string model, string regNumber, int speed, double fuelCapacity, double fuelCompustion) 
//		:Vehicle(model, regNumber, speed, fuelCapacity, fuelCompustion) {
//		this->cargoWeightLimit = cargoWeightLimit;
//	}
//	void setCargoWeightLimit(int cargoweightLimit) {
//		this->cargoWeightLimit = cargoweightLimit;
//	}
//	int getCargoWeightLimit() {
//		return cargoWeightLimit;
//	}
//	void display() {
//		cout << "\nModel : " << model << "\nRegistration Number : " << regNumber << "\nSpeed : " << speed 
//			<< " km/hour\nFuel Capacity : " << fuelCapacity << " liters\nFuel Compustion : " << fuelCompustion 
//			<< " liter/km\nCargo Weight Limit : " << cargoWeightLimit << " kg\n";
//	}
//};
//
//class Buss :public Vehicle
//{
//private: 
//	int numOfPassengers;
//public:
//	Buss(int numOfPassengers, string model, string regNumber, int speed, double fuelCapacity, double fuelCompustion) 
//		:Vehicle(model, regNumber, speed, fuelCapacity, fuelCompustion) {
//		this->numOfPassengers = numOfPassengers;
//	}
//	void setNumOfPassengers(int numOfPassengers) {
//		this->numOfPassengers = numOfPassengers;
//	}
//	int getNumOfPassengers() {
//		return numOfPassengers;
//	}
//	void display() {
//		cout << "\nModel : " << model << "\nRegistration Number : " << regNumber << "\nSpeed : " << speed 
//			<< " km/hour\nFuel Capacity : " << fuelCapacity << " liters\nFuel Compustion : " << fuelCompustion
//			<< " liter/km\nNumber Of Passengers : " << numOfPassengers << '\n';
//	}
//};
//
//void fuelNeeded(Vehicle* v, int distance) {
//	v->fuelNeeded(distance);
//}
//
//void distanceCovered(Vehicle* v, float hours) {
//	v->distanceCovered(hours);
//}
//
//int main() {
//	Truck merc(300, "2017", "#MER876", 100, 50, 0.2);
//	cout << "For Merc : \n";
//	merc.display();
//	merc.fuelNeeded(50);
//	merc.distanceCovered(5);
//	Buss mits(50, "2020", "#LANC369", 120, 60, 0.2);
//	cout << "\nFor Mits : \n";
//	mits.display();
//	mits.fuelNeeded(50);
//	mits.distanceCovered(5);
//	
//	cout << "\nFor Merc : \n";
//
//	Vehicle* v = &merc;
//	fuelNeeded(v, 50);
//	distanceCovered(v, 5);
//
//	cout << "\nFor Mits : \n";
//
//	v = &mits;
//	fuelNeeded(v, 50);
//	distanceCovered(v, 5);
//	return 0;
//}
//=================================================================================

//Task 2:

//#include <iostream>
//using namespace std;
//
//class BankAccount
//{
//protected:
//	double balance;
//public:
//	BankAccount() {
//		balance = 0;
//	}
//	BankAccount(double balance) {
//		this->balance = balance;
//	}
//	virtual double deposit(double amount) = 0;
//	virtual double withdraw(double amount) = 0;
//};
//
//class SavingsAccount :public BankAccount
//{
//public:
//	SavingsAccount(double balance) :BankAccount(balance) {};
//	double deposit(double amount) {
//		balance += amount;
//		cout << "balance = " << balance << "      amount = " << amount << '\n';
//		return balance;
//	}
//	double withdraw(double amount) {
//		balance -= amount;
//		cout << "balance = " << balance << "      amount = " << amount << '\n';
//		return balance;
//	}
//};
//
//class CurrentAccount :public BankAccount
//{
//public:
//	CurrentAccount(double balance) :BankAccount(balance) {};
//	double deposit(double amount) {
//		balance += amount;
//		cout << "deposit : balance = " << balance << "    amount = " << amount << '\n';
//		return balance;
//	}
//	double withdraw(double amount) {
//		balance -= amount;
//		cout << "withdraw : balance = " << balance << "    amount = " << amount << '\n';
//		return balance;
//	}
//};
//
//int main() {
//	SavingsAccount s(7000);
//	CurrentAccount c(7000);
//	
//	cout << c.withdraw(1000) << '\n';
//	cout << c.deposit(1000);
//	
//	return 0;
//}
//=================================================================================

//Tasl 3:

//#include <iostream>
//#include <math.h>
//using namespace std;
//
//class Shape3D
//{
//public:
//	virtual void calculateVolume(float a) = 0;
//	virtual void calculateArea(float a) = 0;
//};
//
//class Sphere :public Shape3D
//{
//private:
//	float radius;
//public:
//	Sphere() {
//		radius = 0;
//	}
//	Sphere(float radius) {
//		this->radius = radius;
//	}
//	void calculateVolume(float radius) {
//		double volume = 4 / 3 * 3.14 * pow(radius, 3);
//		cout << "volume of Sphere = " << volume << '\n';
//	}
//	void calculateArea(float radius) {
//		double area = 4 * 3.14 * pow(radius, 2);
//		cout << "area of Sphere = " << area << '\n';
//	}
//};
//
//class Cube :public Shape3D
//{
//private:
//	float side;
//public:
//	Cube() {
//		side = 0;
//	}
//	Cube(float side) {
//		this->side = side;
//	}
//	void calculateVolume(float side) {
//		double volume = pow(side, 3);
//		cout << "volume of Cube = " << volume << '\n';
//	}
//	void calculateArea(float side) {
//		double area = 6 * pow(side, 2);
//		cout << "area of Cube = " << area << '\n';
//	}
//};
//
//int main() {
//	Sphere s;
//	Cube c;
//
//	s.calculateVolume(5.5);
//	s.calculateArea(5.5);
//
//	c.calculateVolume(7.3);
//	c.calculateArea(7.3);
//
//	return 0;
//}
//=================================================================================

//Tasl 4:

//#include <iostream>
//using namespace std;
//
//class Shape
//{
//public:
//	virtual void draw() {
//		cout << "Shape" << '\n';
//	}
//};
//
//class Circle :public Shape
//{
//public:
//	void draw() {
//		cout << "Circle" << '\n';
//	}
//};
//
//class Square :public Shape
//{
//public:
//	void draw() {
//		cout << "Square" << '\n';
//	}
//};
//
//class Triangle :public Shape
//{
//public:
//	void draw() {
//		cout << "Triangle" << '\n';
//	}
//};
//
//void drawShape(Shape* s) {
//	s->draw();
//}
//
//int main() {
//	Shape* s[3] = {new Circle, new Square, new Triangle};
//
//	for (int i = 0; i < 3; i++) {
//		drawShape(s[i]);
//	}
//
//	for (int i = 0; i < 3; i++) {
//		delete[] s[i];
//	}
//
//	return 0;
//}
//=================================================================================

//Tasl 5:

//#include <iostream>
//using namespace std;
//
//class Vehicle
//{
//protected:
//	int speed;
//public:
//	Vehicle() {
//		speed = 0;
//	}
//	Vehicle(int speed) {
//		this->speed = speed;
//	}
//	void speedShow() {
//		cout << "speed = " << speed << '\n';
//	}
//	virtual int speedUp() {
//		speed += 10;
//		return speed;
//	}
//};
//
//class Car :public Vehicle
//{
//public:
//	Car(int speed) :Vehicle(speed) {};
//	int speedUp() {
//		speed += 20;
//		return speed;
//	}
//};
//
//class Bicycle :public Vehicle
//{
//public:
//	Bicycle(int speed) :Vehicle(speed) {};
//	int speedUp() {
//		speed += 5;
//		return speed;
//	}
//};
//
//int speedUp(Vehicle* v) {
//	return v->speedUp();
//}
//
//int main() {
//	Vehicle v(90);
//	Car c(100);
//	Bicycle b(30);
//
//	cout << v.speedUp() << '\n';
//	Vehicle* v1 = &c;
//
//	cout << speedUp(v1) << '\n';
//
//	v1 = &b;
//
//	cout << speedUp(v1);
//	return 0;
//}
//=================================================================================

//Tasl 6:

//#include <iostream>
//using namespace std;
//template<class T>
//T getMax(T a, T b) {
//	if (a > b) return a;
//	else if (a < b) return b;
//	else cout << "equal\n";
//}
//
//int main() {
//	cout << getMax<int>(7, 5);
//	return 0;
//}
//=================================================================================

//Tasl 7:

//#include<iostream>
//using namespace std;
//
//template<class T1,class T2>
//class Calculator
//{
//private:
//	T1 num1;
//	T2 num2;
//public:
//	Calculator(T1 num1, T2 num2) {
//		this->num1 = num1;
//		this->num2 = num2;
//	}
//	void add() {
//		cout << num1 + num2 << '\n';
//	}
//	void subtract() {
//		if(num1>=num2) cout << num1 - num2 << '\n';
//		else cout << num2 - num1 << '\n';
//	}
//	void multiply() {
//		cout << num1 * num2 << '\n';
//	}
//	void divide() {
//		if (num1 >= num2) cout << num1 / num2 << '\n';
//		else cout << num2 / num1 << '\n';
//	}
//};
//
//int main() {
//	Calculator<int,float> c(10, 20.56);
//	c.add();
//	c.subtract();
//	c.multiply();
//	c.divide();
//	return 0;
//}
