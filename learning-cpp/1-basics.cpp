//Assignment 1:

//Q1:Write a program that takes an integer from user then print it

//#include <iostream>
//using namespace std;
//int main() {
//	int x;
//	cin >> x;
//	cout << x;
//	return 0;
//}
//=========================================
//Q2:write a program that ask the user to insert 3 numbers then print the sum
//Input
 
//#include <iostream>
//using namespace std;
//int main() {
//	int x, y, z;
//	cin >> x >> y >> z;
//	cout << x + y + z;
//	return 0;
//}
//=========================================
//Q3:write a program that ask the user to insert 3 integers then print the average as
//decimal number
 
//#include <iostream>
//using namespace std;
//int main() {
//	float x, y, z;
//	cin >> x >> y >> z;
//	cout << (x + y + z) / 3;
//	return 0;
//}
//===========================================
//Q4:Write a program to compute the perimeter and area of a rectangle. Your code
//should ask the user to insert the width and the height
 
//#include <iostream>
//using namespace std;
//int main() {
//	int width, height;
//	cin >> width >> height;
//	int p = (width + height) * 2;
//	int a = width * height;
//	cout << "per is " << p << '\n';
//	cout << "area is " << a;
//	return 0;
//}
//===========================================
//Q5:Write a program to calculate the sum of the digits of a 3-digit number.

//#include <iostream>
//using namespace std;
//int main() {
//	int x = 132;
//	cout << (x % 10) + ((x / 10) % 10) + (x / 100);
//	return 0;
//}
//===========================================
//Q6:Write a program to convert a given integer (in seconds) to hours,
//minutes and seconds.

//#include <iostream>
//using namespace std;
//int main() {
//	int x = 25300;
//	int s = 25300 % 60;
//	int m = ((x - s) / 60) % 60;
//	int h = (x - s) / 3600;
//	cout << "H:M:s - " << h << ":" << m << ":" << s;
//	return 0;
//}
//=========================================================
//Q7:Write a program that allows the user to insert an integer then print negative if it
//is a negative number otherwise print positive.

//#include <iostream>
//using namespace std;
//int main() {
//	int x;
//	cin >> x;
//	if (x < 0) {
//		cout << "negative";
//	}
//	else {
//		cout << "positive";
//	}
//	return 0;
//}
//=========================================================
//Q8:Write a program to read any digit from 1 to 5, display it as a word

//#include <iostream>
//using namespace std;
//int main() {
//	int x;
//	cin >> x;
//	if (x == 1) {
//		cout << "one";
//	}
//	else if (x == 2) {
//		cout << "two";
//	}
//	else if (x == 3) {
//		cout << "three";
//	}
//	else if (x == 4) {
//		cout << "four";
//	}
//	else if (x == 5) {
//		cout << "five";
//	}
//	else {
//		cout << "we don't have that number";
//	}
//	return 0;
//}
//=========================================================
//Q9:Write a program that reads 5 numbers and sum of all odd values between
//them.

//#include <iostream>
//using namespace std;
//int main() {
//	int a, b, c, d, e;
//  int sum = 0;
//	cin >> a >> b >> c >> d >> e;
//	if (a % 2 != 0) {
//      sum += a;
//	}
//	else if (b % 2 != 0) {
//      sum += b;
//	}
//	else if (c % 2 != 0) {
//      sum += c;
//	}
//	else if (d % 2 != 0) {
//      sum += d;
//	}
//	else if (e % 2 != 0) {
//      sum += e;
//  }
//  cout << "sum off all odd values is " << sum;
//	return 0;
//}
//=========================================================
//Q10:Write a program that reads a year then check if a year is a leap year or not: a
//leap year is divisible by 400 or 4 only

//#include <iostream>
//using namespace std;
//int main() {
//	int year;
//	cin >> year;
//	if (year % 400 == 0 || year % 4 == 0) {
//		cout << "this is a leap year";
//	}
//	else {
//		cout << "this is not a leap year";
//	}
//	return 0;
//}
//=========================================================
//Q11:take the birth year and check if he is above 18 or not

//#include <iostream>
//using namespace std;
//int main() {
//	int birthyear;
//	cin >> birthyear;
//	if (birthyear >= 18) {
//		cout << "age is OK";
//	}
//	else {
//		cout << "age is below 18";
//	}
//	return 0;
//}
//=========================================================
//Q12:A school has following rules for grading system:
// a. Below 25 - F
// b. 25 to 45 - E
// c. 45 to 50 - D
// d. 50 to 60 - C
// e. 60 to 80 - B
// f. Above 80 - A
// Ask the user to enter marks and print the corresponding grade.

//#include <iostream>
//using namespace std;
//int main() {
//	int marks;
//	cin >> marks;
//	if (marks > 80) {
//		cout << "A";
//	}
//	else if (marks >= 60) {
//		cout << "B";
//	}
//	else if (marks >= 50) {
//		cout << "C";
//	}
//	else if (marks >= 45) {
//		cout << "D";
//	}
//	else if (marks >= 25) {
//		cout << "E";
//	}
//	else {
//		cout << "F";
//	}
//	return 0;
//}
//==========================================================
//Q13:Search for Switch Case and use it to write a program that reads an
//integer between 1 and 12 and print the month of the year in English.

//#include <iostream>
//using namespace std;
//int main() {
//	int year;
//	cin >> year;
//	switch (year) {
//		case 1:cout << "january";
//			break;
//		case 2:cout << "february";
//			break;
//		case 3:cout << "march";
//			break;
//		case 4:cout << "april";
//			break;
//		case 5:cout << "may";
//			break;
//		case 6:cout << "june";
//			break;
//		case 7:cout << "july";
//			break;
//		case 8:cout << "august";
//			break;
//		case 9:cout << "septemper";
//			break;
//		case 10:cout << "october";
//			break;
//		case 11:cout << "november";
//			break;
//		case 12:cout << "december";
//			break;
//		default:cout << "ivalid input";
//	}
//	return 0;
//}
//=========================================================
//Q14:Search for ternary operator and use it to write a program that allows the
//user to insert integer number then Even or Odd

//#include <iostream>
//using namespace std;
//int main() {
//	int x;
//	cin >> x;
//	(x % 2) == 0 ? cout<<"even" : cout<<"odd";
//	return 0;
//}
//=========================================================
//Q15:Write a program that take character from user then if it is vowel chars (a,e,I,o,u)
//then print vowel otherwise print consonant

//#include <iostream>
//using namespace std;
//int main() {
//	char letter;
//	cin >> letter;
//	if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
//		cout << "vowel";
//	}
//	else {
//		cout << "consonant";
//	}
//	return 0;
//}
//=========================================================
//Q16:Write a program that take 3 integer from user then print the max element and
t//he min element.

//#include <iostream>
//using namespace std;
//int main() {
//	int a, b, c;
//	cin >> a >> b >> c;
//	if ((a > b) && (a > c) && (b < c)) {
//		cout << "max element = " << a << '\n';
//		cout << "min element = " << b;
//	}
//	else if ((a > b) && (a > c) && (c < b)) {
//		cout << "max element = " << a << '\n';
//		cout << "min element = " << c;
//	}
//	else if ((b > a) && (b > c) && (a < c)) {
//		cout << "max element = " << b << '\n';
//		cout << "min element = " << a;
//	}
//	else if ((b > a) && (b > c) && (c < a)) {
//		cout << "max element = " << b << '\n';
//		cout << "min element = " << c;
//	}
//	else if ((c > b) && (c > a) && (b < a)) {
//		cout << "max element = " << c << '\n';
//		cout << "min element = " << b;
//	}
//	else if ((c > b) && (c > a) && (a < b)) {
//		cout << "max element = " << c << '\n';
//		cout << "min element = " << a;
//	}
//	return 0;
//}
//=========================================================