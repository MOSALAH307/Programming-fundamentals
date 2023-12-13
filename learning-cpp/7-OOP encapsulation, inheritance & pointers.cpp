//Asssignment 7:

//Q1:

//#include <iostream>
//using namespace std;
//
//class Circle
//{
//private:
//	double radius;
//	string color;
//public:
//	Circle() {
//		radius = 1;
//		color = "red";
//	}
//	Circle(double r) {
//		radius = r;
//	}
//	Circle(double r, string c) {
//		radius = r;
//		color = c;
//	}
//	void setRadius(double r) {
//		radius = r;
//	}
//	void setColor(string c) {
//		color = c;
//	}
//	double getRadius() {
//		return radius;
//	}
//	string getColor() {
//		return color;
//	}
//	double getArea() {
//		return 3.14 * radius * radius;
//	}
//};
//
//class Cylinder : public Circle
//{
//private:
//	double height;
//public:
//	Cylinder() {
//		height = 1;
//	}
//	Cylinder(double r) : Circle(r)
//	{
//		height = 1;
//	}
//	Cylinder(double r, double h) : Circle(r) {
//		height = h;
//	}
//	Cylinder(double r, string c, double h) : Circle(r, c) {
//		height = h;
//	}
//	void setHeight(double h) {
//		height = h;
//	}
//	double getHeight() {
//		return height;
//	}
//	double getVolume() {
//		return getArea() * height;
//	}
//};
//
//int main() {
//	Circle c(5.5);
//	Cylinder cy(7.2, 11.3);
//	cout << "Circle Area: " << c.getArea() << '\n';
//	cout << "Cylinder Volume: " << cy.getVolume();
//	return 0;
//}
//=================================================================================

//Q2:

//#include <iostream>
//#include <math.h>
//using namespace std;
//
//class MyPoint
//{
//private:
//	int x;
//	int y;
//public:
//	MyPoint() {
//		x = 0;
//		y = 0;
//	}
//	void setX(int z) {
//		x = z;
//	}
//	void setY(int a) {
//		y = a;
//	}
//	int getX() {
//		return x;
//	}
//	int getY() {
//		return y;
//	}
//};
//
//class MyLine
//{
//private:
//	MyPoint begin;
//	MyPoint end;
//public:
//	MyLine(int x1, int y1, int x2, int y2) {
//		begin.setX(x1);
//		begin.setY(y1);
//		end.setX(x2);
//		end.setY(y2);
//	}
//	MyLine(MyPoint b, MyPoint e) {
//		begin = b;
//		end = e;
//	}
//	void setBegin(MyPoint b) {
//		begin = b;
//	}
//	MyPoint getBegin() {
//		return begin;
//	}
//	void setEnd(MyPoint e) {
//		end = e;
//	}
//	MyPoint getEnd() {
//		return end;
//	}
//	void setBeginX(int x) {
//		begin.setX(x);
//	}
//	int getBeginX() {
//		return begin.getX();
//	}
//	void setBeginY(int y) {
//		begin.setY(y);
//	}
//	int getBeginY() {
//		return begin.getY();
//	}
//	void setEndX(int x) {
//		end.setX(x);
//	}
//	int getEndX() {
//		return end.getX();
//	}
//	void setEndY(int y) {
//		end.setY(y);
//	}
//	int getEndY() {
//		return end.getY();
//	}
//	void setBeginXY(int x, int y) {
//		begin.setX(x);
//		begin.setY(y);
//	}
//	int* getBeginXY() {
//		static int b[2] = { begin.getX(), begin.getY() };
//		return b;
//	}
//	void setEndXY(int x, int y) {
//		end.setX(x);
//		end.setY(y);
//	}
//	int* getEndXY() {
//		static int e[2] = { end.getX(), end.getY() };
//		return e;
//	}
//	double getLength() {
//		double length;
//		if (begin.getY() == end.getY()) {
//			if (begin.getX() > end.getX()) {
//				length = begin.getX() - end.getX();
//			}
//			else {
//				length = end.getX() - begin.getX();
//			}
//		}
//		else if (begin.getX() == end.getX()) {
//				if (begin.getY() > end.getY()) {
//					length = begin.getY() - end.getY();
//				}
//				else {
//					length = end.getY() - begin.getY();
//				}
//		}
//		else {
//			length = sqrt((pow(end.getY() - begin.getY(), 2) + pow(end.getX() - begin.getX(), 2)));
//		}
//		return length;
//	}
//	double getGradient() {
//		double yDiff = end.getY() - begin.getY();
//		double xDiff = end.getX() - begin.getX();
//		double gradient = abs(yDiff / xDiff);
//		return gradient;
//	}
//};
//
//int main() {
//	MyLine l(1, 2, 4, 6);
//	cout << "Line length is : " << l.getLength() << '\n';
//	cout << "Line Gradient is : " << l.getGradient();
//	return 0;
//}
//=================================================================================

//Q3:

//#include <iostream>
//using namespace std;
//
//class MyComplex
//{
//private:
//	double real;
//	double imag;
//public:
//	MyComplex() {
//		real = 0.0;
//		imag = 0.0;
//	}
//	MyComplex(double r, double i) {
//		real = r;
//		imag = i;
//	}
//	void setReal(double r) {
//		real = r;
//	}
//	double getReal() {
//		return real;
//	}
//	void setImag(double i) {
//		imag = i;
//	}
//	double getImag() {
//		return imag;
//	}
//	void setValue(double r, double i) {
//		real = r;
//		imag = i;
//	}
//	bool isReal() {
//		if (imag == 0) return true;
//		else return false;
//	}
//	bool isImaginary() {
//		if (real == 0) return true;
//		else return false;
//	}
//	bool equals(double r, double i) {
//		if (real == r && imag == i) return true;
//		else return false;
//	}
//	bool equals(MyComplex a) {
//		if (real == a.getReal() && imag == a.getImag()) return true;
//		else return false;
//	}
//	double magnitude() {
//		double m = sqrt((pow(real, 2) + pow(imag, 2)));
//		return m;
//	}
//	MyComplex addInto(MyComplex right) {
//		real += right.getReal();
//		imag += right.getImag();
//		MyComplex a(real, imag);
//		return a;
//	}
//	MyComplex addNew(MyComplex right) {
//		MyComplex newComplex((real + right.getReal()), (imag + right.getImag()));
//		return newComplex;
//	}
//};
//
//int main() {
//	MyComplex c1(3, 5.7);
//	MyComplex c2(5, 3.5);
//	MyComplex c3 = c1.addInto(c2);
//	MyComplex c4 = c1.addNew(c2);
//	cout << c3.getReal() << ',' << c3.getImag() << '\n';
//	cout << c4.getReal() << ',' << c4.getImag();
//	return 0;
//}
//=================================================================================

//Q4:

//#include <iostream>
//using namespace std;
//
//class Point
//{
//private:
//	float x;
//	float y;
//public:
//	Point() {
//		x = 0.0;
//		y = 0.0;
//	}
//	Point(float x1, float y1) {
//		x = x1;
//		y = y1;
//	}
//	void setX(float a) {
//		x = a;
//	}
//	float getX() {
//		return x;
//	}
//	void setY(float z) {
//		y = z;
//	}
//	float getY() {
//		return y;
//	}
//	void setXY(float a, float b) {
//		x = a;
//		y = b;
//	}
//	float* getXy() {
//		static float a[2] = {x, y};
//		return a;
//	}
//};
//
//class MovablePoint : public Point
//{
//private:
//	float xSpeed;
//	float ySpeed;
//public:
//	MovablePoint() {
//		xSpeed = 0.0;
//		ySpeed = 0.0;
//	}
//	MovablePoint(float a, float b, float xS, float yS) :Point(a, b) {
//		xSpeed = xS;
//		ySpeed = yS;
//	}
//	MovablePoint(float xS, float yS) {
//		xSpeed = xS;
//		ySpeed = yS;
//	}
//	void setXSpeed(float xS) {
//		xSpeed = xS;
//	}
//	float getXSpeed() {
//		return xSpeed;
//	}
//	void setYSpeed(float yS) {
//		ySpeed = yS;
//	}
//	float getYSpeed() {
//		return ySpeed;
//	}
//	void setSpeed(float xS, float yS) {
//		xSpeed = xS;
//		ySpeed = yS;
//	}
//	float* getSpeed() {
//		static float s[2] = { xSpeed, ySpeed };
//		return s;
//	}
//	MovablePoint move() {
//		setX(getX() + xSpeed);
//		setY(getY() + ySpeed);
//		MovablePoint mp(getX(), getY(), xSpeed, ySpeed);
//		return mp;
//	}
//};
//
//int main() {
//	MovablePoint mp(2, 3, 6, 7);
//	MovablePoint mp2 = mp.move();
//	cout << mp2.getX() << ',' << mp2.getY();
//	return 0;
//}
//=================================================================================
// Q5:

// Composition defines a mandatory relation which is (has a) such as car has a engine.
//Inheritance defines a relation whis is (is a) such as student is a person.
//Task 2 is an example for Composition.
//Task 1 & 4 are examples for Inheritance.