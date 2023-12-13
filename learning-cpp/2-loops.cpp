//Assignment 2:

//Q1:Write a program that print from 10 to 1

//#include <iostream>
//using namespace std;
//int main() {
//	for (int i = 10; i >= 1; i--) {
//		cout << i << ' ' ;
//	}
//	return 0;
//}
//=========================================
//Q2:Write a program to read 10 numbers from the user then print the average.

//#include <iostream>
//using namespace std;
//int main() {
//	float num, sum = 0;
//	for (int i = 1; i <= 10; i++) {
//		cin >> num;
//		sum += num;
//	}
//	cout << "avg = " << sum/ 10;
//	return 0;
//}
//=========================================
//Q3:Write a program i to display the multiplication table of a given integer

//#include <iostream>
//using namespace std;
//int main() {
//	int num = 5;
//	for (int i = 1; i <= 12; i++) {
//		int res = i * num;
//		cout << i << " * " << num << " = " << res << '\n';
//	}
//	return 0;
//}
//===========================================
//Q4:Write a program that allows the user to insert two integers N and M and print the
//summation of all numbers between N and M.

//#include <iostream>
//using namespace std;
//int main() {
//	int N, M, sum = 0;
//	cin >> N >> M;
//	for (int i = N; i <= M; i++) {
//		sum += i;
//	}
//	cout << sum;
//	return 0;
//}
//===========================================
//Q5:Write a program that allows the user to insert infinite integers until insert negative
//number then print summation of all integers

//#include <iostream>
//using namespace std;
//int main() {
//	int num, sum = 0;
//	for (int i = 1; ; i++) {
//		cin >> num;
//		if (num < 0) {
//			break;
//		}
//		else {
//			sum += num;
//		}
//	}
//	cout << sum;
//	return 0;
//}
//===========================================
//Q6:Write a program that allows the user to insert infinite integers until insert negative
//number then print the max integer.

//#include <iostream>
//using namespace std;
//int main() {
//	int num, max = 0;
//	for (int i = 1; ; i++) {
//		cin >> num;
//		if (num < 0) {
//			break;
//		}
//		else if (num > max){
//			max = num;
//		}
//	}
//	cout << max;
//	return 0;
//}
//=========================================================
//Q7:Enter Number and Count the number of steps required to make the Number
//equal to Zero.

//#include <iostream>
//using namespace std;
//int main() {
//	int num = 15, steps = 0;
//	while (num != 0)
//	{
//		if (num % 2 != 0) {
//			num -= 1;
//		}
//		else {
//			num /= 2;
//		}
//		steps += 1;
//	}
//	cout << steps;
//	return 0;
//}
//=========================================================
//Q8:Write a program to find the power of a number.

//#include <iostream>
//using namespace std;
//int main() {
//	int base, exp, result = 1;
//	cin >> base >> exp;
//	for (int i = 1; i <= exp; i++) {
//		result *= base;
//	}
//	cout << base << '^' << exp << '=' << result;
//	return 0;
//}
//=========================================================
//Q9:Write a program to take 10 numbers from the user and count the odd numbers

//#include <iostream>
//using namespace std;
//int main() {
//	int num, counter = 0;
//	for (int i = 1; i <= 10; i++) {
//		cin >> num;
//		if (num % 2 != 0) {
//			counter += 1;
//		}
//	}
//	cout << counter;
//	return 0;
//}
//=========================================================
//Q10:Write a program to take 2 integers from the user and find the Greatest Common
//Divisor of two numbers.

//#include <iostream>
//using namespace std;
//int main() {
//	int num1, num2, max = 0;
//	cin >> num1 >> num2;
//	for (int i = 1; i <= num1 && i <= num2; i++) {
//		if (num1 % i == 0 && num2 % i == 0) {
//			if (i > max) max = i;
//		}
//	}
//	cout << max << '\n';
//	return 0;
//}
//=========================================================
//Q11:Write a program to take 10 numbers from the user and find the second max.

//#include <iostream>
//using namespace std;
//int main() {
//	int num, max = 0, sec_max;
//	for (int i = 1; i <= 10; i++) {
//		cin >> num;
//		if (num > max) {
//			sec_max = max;
//			max = num;
//		}
//		else if (num > sec_max && num < max) {
//			sec_max = num;
//		}
//	}
//	cout << sec_max<< '\n';
//	return 0;
//}
//=========================================================
