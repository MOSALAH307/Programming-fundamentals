//Assignment 9:


//Task 3:The sqrt method in math class may throw exception if number is negative modify the code to solve this problem.

//#include <iostream>
//#include <math.h>
//using namespace std;
//
//double Sqrt(double number) {
//
//	if (number < 0) {
//		throw "square root for negative number error";
//	}
//
//	return sqrt(number);
//}
//
//int main() {
//	int x;
//	cin >> x;
//
//	try
//	{
//		cout << Sqrt(x);
//	}
//	catch (const char* z)
//	{
//		cout << z;
//	}
//
//	return 0;
//}
//=================================================================================

//Tasl 4:Write a C++ program that uses a try and catch block to handle a division by zero exception. Prompt the user for input and perform the division, catching the exception and displaying an error message if necessary.

//#include <iostream>
//using namespace std;
//
//int main() {
//	int x, y;
//	cout << "enter the numbers you want to divide\n";
//	cin >> x >> y;
//
//	try
//	{
//		if (y == 0) {
//			cout << "divide by zero error";
//		}
//		cout << x / y;
//	}
//	catch (const char* z)
//	{
//		cout << z;
//	}
//
//	return 0;
//}
//=================================================================================

//Task 5:Define a custom exception class in C++ (e.g., MyException) and create a program that throws this custom exception within a try block and catches it in a catch block.

//#include<iostream>
//#include<math.h>
//using namespace std;
//
//class MyException
//{
//public:
//	class Exception1
//	{
//	public:
//		void divideByZeroError() {
//			cout << "divide by zero error";
//		}
//	};
//	class Exception2
//	{
//	public:
//		void negativeSqrtError() {
//			cout << "Square root for negative number error";
//		}
//	};
//};
//
//int main() {
//	int x, y;
//	cin >> x >> y;
//
//	try
//	{
//		if (y == 0) {
//			throw MyException::Exception1();
//		}
//		if (x < 0) {
//			throw MyException::Exception2();
//		}
//		cout << x / y << '\n';
//		cout << sqrt(x) << '\n';
//	}
//	catch (MyException::Exception1 z)
//	{
//		z.divideByZeroError();
//	}
//	catch (MyException::Exception2 z)
//	{
//		z.negativeSqrtError();
//	}
//
//	return 0;
//}
