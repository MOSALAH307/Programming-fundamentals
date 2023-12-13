//Assignment 4:
// NOTE: Make the Size of Any 1D Array 10!
// Q1:Given a list of integers, determine whether the sum of its elements is odd or even.
//Give your answer as a string matching "odd" or "even".
//If the input array is empty, consider it as: [0] (array with a zero).

//#include <iostream>
//using namespace std;
//int main() {
//	int arr[10], sum = 0, n;
//	cout << "Enter number of integers in the list" << '\n';
//	cin >> n;
//	if (n == 0) cout << "sum of elements in the list is even" << '\n';
//	else {
//		cout << "Now enter the integers in the list" << '\n';
//		for (int i = 0; i < n; i++) {
//			cin >> arr[i];
//			sum += arr[i];
//		}
//		if (sum % 2 == 0) cout << "sum of integers in the list is even" << '\n';
//		else cout << "sum of integers in the list is odd" << '\n';
//	}
//	return 0;
//}
//=========================================
// Q2:Given a set of numbers, return the additive inverse of each. Each positive becomes negative, and the negative becomes positive.

//#include <iostream>
//using namespace std;
//int main() {
//	int arr1[10], arr2[10], n;
//	cout << "Enter number of integers in the list" << '\n';
//	cin >> n;
//	cout << "Now enter the integers in the list 1" << '\n';
//	for (int i = 0; i < n; i++) {
//		cin >> arr1[i];
//		arr2[i] = -arr1[i];
//		cout << arr2[i] << ' ';
//	}
//	return 0;
//}
//=========================================
// Q3:Given an array of integers, return a new array with each value doubled.

//#include <iostream>
//using namespace std;
//int main() {
//	int arr1[10], arr2[10], n;
//	cout << "Enter number of integers in the list" << '\n';
//	cin >> n;
//	cout << "Now enter the integers in the list 1" << '\n';
//	for (int i = 0; i < n; i++) {
//		cin >> arr1[i];
//		arr2[i] = 2 * arr1[i];
//		cout << arr2[i] << ' ';
//	}
//	return 0;
//}
//===========================================
// Q4:Write a program to read elements in a matrix and find the sum of main diagonal
//(Major diagonal) elements of the matrix.

//#include <iostream>
//using namespace std;
//int main() {
//	int arr[3][3], sum = 0;
//	for (int j = 0; j < 3; j++) {
//		for (int i = 0; i < 3; i++) {
//			cin >> arr[j][i];
//			if (j == i) sum += arr[j][i];
//		}
//	}
//	cout << "Sum of main diagonal = " << sum;
//	return 0;
//}
//===========================================
// Q5:You will be given an array of integers whose elements have both a negative and a positive value, except for one integer that is either only negative or only positive. Your task will be to find that integer.

//#include <iostream>
//using namespace std;
//int main() {
//	int arr[10], uniq = 0, n;
//	cout << "Enter the number of elements in the list" << '\n';
//	cin >> n;
//	cout << "Now enter the elements of the list" << '\n';
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	for (int j = 0; j < n; j++) {
//		for (int i = 0; i < n; i++) {
//			if (i == j) continue;
//			else {
//				if (arr[j] != -arr[i]) uniq = arr[j];
//				else {
//					uniq = 0;
//					break;
//				}
//			}
//		}
//		if (uniq == arr[j]) cout << arr[j] << '\n';
//	}
//	return 0;
//}
//===========================================
// Q6:Write a CPP program to delete element from array at specified position.

// #include <iostream>
// using namespace std;;

// int main() {
// 	int arr[10], n, position;
// 	cin >> n;
// 	for (int i = 0; i < n; i++) {
// 		cin >> arr[i];
// 	}
// 	cin >> position;
// 	position--;
// 	for (int i = position; i < n - 1; i++) {
// 		arr[i] = arr[i + 1];
// 	}
// 	for (int i = 0; i < n - 1; i++) {
// 		cout << arr[i] << ' ';
// 	}
// }
//=========================================================
// Q7:Write a program to read elements in two matrices and add elements of both
//matrices.

//#include <iostream>
//using namespace std;
//int main() {
//	int arr1[3][3], arr2[3][3];
//	cout << "Enter elements of matrix 1" << '\n';
//	for (int j = 0; j < 3; j++) {
//		for (int i = 0; i < 3; i++) {
//			cin >> arr1[j][i];
//		}
//	}
//	cout << "Enter elements of matrix 2" << '\n';
//	for (int j = 0; j < 3; j++) {
//		for (int i = 0; i < 3; i++) {
//			cin >> arr2[j][i];
//		}
//	}
//	cout << "Sum of both matrix = " << '\n';
//	for (int j = 0; j < 3; j++) {
//		for (int i = 0; i < 3; i++) {
//			cout << arr1[j][i] + arr2[j][i] << ' ';
//		}
//		cout << '\n';
//	}
//	return 0;
//}
//=========================================================
// Q8:Write a program to read elements in a matrix and find the sum of elements of
//each row of the matrix.

//#include <iostream>
//using namespace std;
//int main() {
//	int arr[3][3], sum1 = 0, sum2 = 0, sum3 = 0;
//	cout << "Enter elements of the matrix " << '\n';
//	for (int j = 0; j < 3; j++) {
//		for (int i = 0; i < 3; i++) {
//			cin >> arr[j][i];
//			if (j == 0) sum1 += arr[j][i];
//			else if (j == 1) sum2 += arr[j][i];
//			else sum3 += arr[j][i];
//		}
//	}
//	cout << "Sum of row 1 = " << sum1 << '\n';
//	cout << "Sum of row 2 = " << sum2 << '\n';
//	cout << "Sum of row 3 = " << sum3 << '\n';
//	return 0;
//}
//=========================================================
// Q9:Write a CPP program to read elements in a matrix and check whether the given matrix is symmetric matrix or not. 

//#include <iostream>
//using namespace std;
//int main() {
//	int arr[3][3];
//	cout << "Enter the elements of the matrix " << '\n';
//	for (int j = 0; j < 3; j++) {
//		for (int i = 0; i < 3; i++) {
//			cin >> arr[j][i];
//		}
//	}
//	bool symmetric = false;
//	for (int j = 0; j < 3; j++) {
//		for (int i = 0; i < 3; i++) {
//			if (arr[j][i] == arr[i][j]) symmetric = true;
//			else {
//				symmetric = false;
//				break;
//			}
//		}
//		if (symmetric == false) break;
//	}
//	if (symmetric == true) cout << "Given matrix is symmetric" << '\n';
//	else cout << "Given matrix is not symmetric" << '\n';
//	return 0;
//}
//=========================================================
// Q10:Create a void function, take an integer then print it then call this method in main

//#include <iostream>
//using namespace std;
//void print() {
//	int num;
//	cin >> num;
//	cout << num;
//}
//int main() {
//	print();
//	return 0;
//}
//=========================================================
// Q11:Create a function, take three integers then return the average as float value then
//call this method in main.

//#include <iostream>
//using namespace std;
//float average() {
//	int a, b, c;
//	cin >> a >> b >> c;
//	return (float(a)+b+c) / 3;
//}
//int main() {
//	cout << average();
//	return 0;
//}
//=========================================
// Q12:Write a CPP program to input two or more numbers from user and find maximum and minimum of the given numbers using functions.

//#include <iostream>
//using namespace std;
//void getMax(int a, int b) {
//	if (a > b) cout << a;
//	else cout << b;
//}
//int main() {
//	int num1, num2;
//	cin >> num1 >> num2;
//	getMax(num1, num2);
//	return 0;
//}
//=========================================
// Q13:Write a CPP program to input a number from user and check whether given number is even or odd using functions

//#include <iostream>
//using namespace std;
//void check(int num) {
//	if (num % 2 == 0) cout << num << " is even";
//	else cout << num << " is odd";
//}
//int main() {
//	int num;
//	cin >> num;
//	check(num);
//	return 0;
//}
//=========================================
// Q14:Create a function, take an integer then return true if this number is prime otherwise return false
 
//#include <iostream>
//using namespace std;
//bool isPrime() {
//	int num, counter = 0;
//	cin >> num;
//	for (int i = 1; i <= num; i++) {
//		if (num % i == 0) counter++;
//	}
//	if (counter == 2) return true;
//	else return false;
//}
//int main() {
//	if (isPrime() == true) cout << "true";
//  else cout << "false";
//	return 0;
//}
//=========================================
// Q15:Write a function to find a cube of a given number.

//#include <iostream>
//using namespace std;
//void pow() {
//	int num, power;
//	cin >> num >> power;
//	int result = 1;
//	for (int i = 1; i <= power; i++) {
//		result *= num;
//	}
//	cout << result;
//}
//int main() {
//	pow();
//	return 0;
//}
//=========================================
//another solution for Q15:

//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int main() {
//	int num, power;
//	cin >> num >> power;
//	cout << pow(num, power);
//	return 0;
//}
//=========================================
// Q16:Write a program to input radius of circle from user and find diameter,
//circumference and area of the given circle using function.

//#include <iostream>
//using namespace std;
//void circle(int r) {
//	int diameter = 2 * r;
//	float circum = 2 * 3.1416 * r;
//	float area = 3.1416 * r * r;
//	cout << "Diameter = " << diameter << " units" << '\n';
//	cout << "Circumference = " << circum << " units" << '\n';
//	cout << "Area = " << area << " sq.units" << '\n';
//}
//int main() {
//	int radius;
//	cin >> radius;
//	circle(radius);
//	return 0;
//}
//=========================================
// Q17:Write a program to input radius of circle from user and find diameter,
//circumference and area of the given circle using function.

//#include <iostream>
//using namespace std;
//void divisors() {
//	int num;
//	cin >> num;
//	for (int i = 1; i <= num; i++) {
//		if (num % i == 0) cout << i << ' ';
//	}
//}
//int main() {
//	divisors();
//	return 0;
//}
//=========================================
// Q18 (bonus):Write a CPP program to get the difference between the largest and smallest values in an array of integers. The array must have a length of at least 1.

//#include <iostream>
//using namespace std;
//int main() {
//	int arr[10], max = 0, min, n;
//	cout << "Enter number of elements in the list" << '\n';
//	cin >> n;
//	cout << "Now enter elements of the list" << '\n';
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//		if (arr[i] > max) max = arr[i];
//	}
//	min = arr[0];
//	for (int i = 0; i < n; i++) {
//		if (arr[i] < min) min = arr[i];
//	}
//	cout << "the difference between largest and smallest = " << max - min;
//	return 0;
//}
//=========================================================
