//Assignment 3:

//Q1:Write a program to print right triangle number pattern series using loop.
// Example:
// Input:5
// Output:
// 1
// 22
// 333
// 4444
// 55555

//#include <iostream>
//using namespace std;
//int main() {
//	int num = 5;
//	for (int j = 1; j <= num; j++) {
//		for (int i = 1; i <= j; i++) {
//			cout << j << ' ';
//		}
//		cout << '\n';
//	}
//	return 0;
//}
//=========================================
//Q2:Write a program to print hollow right triangle star pattern series using loop.
// Example:
// Input rows: 6
// output
// *
// **
// * *
// *  *
// *   *
// ******

//#include <iostream>
//using namespace std;
//int main() {
//	int rows = 6;
//	for (int j = 1; j <= rows; j++) {
//		for (int i = 1; i <= j; i++) {
//			if (j == 1 || j == 2 || j == rows) {
//				cout << '*' << ' ';
//			}
//			else {
//				if (i == 1 || i == j) {
//					cout << '*' << ' ';
//				}
//				else {
//					cout << "  ";
//				}
//			}
//		}
//		cout << '\n';
//	}
//	return 0;
//}
//=========================================
//Q3:Write a program to print inverted right triangle star pattern series using loop.
// Example:
// Input rows: 6
// output
// ******
// *****
// ****
// ***
// **
// *

//#include <iostream>
//using namespace std;
//int main() {
//	int rows = 6;
//	for (int j = 1; j <= rows; j++) {
//		for (int i = rows; i >= j; i--) {
//			cout << '*';
//		}
//		cout << '\n';
//	}
//	return 0;
//}
//===========================================
//Q4:Write a program to take a number and find a list of non-prime numbers from 1 to
// this number.
// Example:
// Input:25.
// Output: 4 6 8 9 10 12 14 15 16 18 20 21 22 24 25.

//#include <iostream>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	for (int j = 2; j <= n; j++) {
//		for (int i = 2; i < j; i++) {
//			if (j % i == 0) {
//				cout << j << ' ';
//				break;
//			}
//		}
//	}
//	return 0;
//}
//===========================================
//Q5:Write a program in C++ to input any number and print it in words.

//#include <iostream>
//using namespace std;
//int main() {
//	int num, num2 = 0, digit;
//	cin >> num;
//	while (num > 0) {
//		digit = num % 10;
//		num2 = num2 * 10 + digit;
//		num /= 10;
//	}
//	num = num2;
//	while (num > 0)
//	{
//		digit = num % 10;
//		switch (digit)
//		{
//			case 0: cout << "zero ";
//				break;
//			case 1:cout << "one ";
//				break;
//			case 2: cout << "two ";
//				break;
//			case 3: cout << "three ";
//				break;
//			case 4:cout << "four ";
//				break;
//			case 5: cout << "five ";
//				break;
//			case 6: cout << "six ";
//				break;
//			case 7:cout << "seven ";
//				break;
//			case 8: cout << "eight ";
//				break;
//			case 9: cout << "nine ";
//				break;
//			default: cout << "wrong digit";
//		}
//		num /= 10;
//	}
//	return 0;
//}
//===========================================
// more obtimized for Q5:

// #include <iostream>
// using namespace std;
// int main () {
// char arr[2000];
// cin>>arr;
// int i = 0;
// while(arr[i] != '\0') {
// 	switch (arr[i])
//		{
//			case '0': cout << "zero ";
//				break;
//			case '1':cout << "one ";
//				break;
//			case '2': cout << "two ";
//				break;
//			case '3': cout << "three ";
//				break;
//			case '4':cout << "four ";
//				break;
//			case '5': cout << "five ";
//				break;
//			case '6': cout << "six ";
//				break;
//			case '7':cout << "seven ";
//				break;
//			case '8': cout << "eight ";
//				break;
//			case '9': cout << "nine ";
//				break;
//			default: cout << "wrong number";
//		}
//	i++;
// }
//	return 0;
// }
//===========================================
//Q6:Write a program to input elements in an array from the user and count even and
//odd elements in the array.

//#include <iostream>
//using namespace std;
//int main() {
//	int arr[10];
//	for (int i = 0; i < 9; i++) {
//		cin >> arr[i];
//	}
//	int even_counter = 0, odd_counter = 0;
//	for (int i = 0; i < 9; i++) {
//		if (arr[i] % 2 == 0) {
//			even_counter += 1;
//		}
//		else {
//			odd_counter += 1;
//		}
//	}
//	cout << "Total even elements: " << even_counter << '\n';
//	cout << "Total odd elements: " << odd_counter << '\n';
//	return 0;
//}
//=========================================================
//Q7:Write a program to input elements in an array and search whether an element
//exists in the array or not.

//#include <iostream>
//using namespace std;
//int main() {
//	int arr[10], N;
//	for (int i = 0; i < 10; i++) {
//		cin >> arr[i];
//	}
//	cin >> N;
//	for (int i = 0; i < 10; i++) {
//		if (arr[i] == N) {
//			cout << "Element found at index " << i;
//			break;
//		}
//	}
//	return 0;
//}
//=========================================================
//Q8:Write a C++ program to count the number of occurrences of a given number in
//an array of integers.

//#include <iostream>
//using namespace std;
//int main() {
//	int arr[10], N;
//	for (int i = 0; i < 8; i++) {
//		cin >> arr[i];
//	}
//	cin >> N;
//	int counter = 0;
//	for (int i = 0; i < 8; i++) {
//		if (arr[i] == N) {
//			counter += 1;
//		}
//	}
//	cout << "Number of occurrences of " << N << " : " << counter;
//	return 0;
//}
//=========================================================
//Q9:Write a program to input elements in an array and copy all elements of the first
//array into the second array.

//#include <iostream>
//using namespace std;
//int main() {
//	int arr1[10], arr2[10];
//	cout << "input array 1 elements" << '\n';
//	for (int i = 0; i < 10; i++) {
//		cin >> arr1[i];
//	}
//	cout << "Array1 : ";
//	for (int i = 0; i < 10; i++) {
//		cout << arr1[i] << ' ';
//		arr2[i] = arr1[i];
//	}
//	cout << '\n' << "Array2 : ";
//	for (int i = 0; i < 10; i++) {
//		cout << arr2[i] << ' ';
//	}
//	return 0;
//}
//=========================================================
//Q10:Write a program to input elements in array then print all unique elements in array.

//#include <iostream>
//using namespace std;
//int main() {
//	int arr[10];
//	for (int i = 0; i < 10; i++) {
//		cin >> arr[i];
//	}
//	cout << "All unique elements in the array are: ";
//	for (int j = 0; j < 10; j++) {
//		int uniq = 0;
//		for (int i = 0; i < 10; i++) {
//			if (i == j) {
//				continue;
//			}
//			else if (arr[j] != arr[i]) {
//				uniq = arr[j];
//			}
//			else {
//				uniq = 0;
//				break;
//			}
//		}
//		if (uniq == arr[j])
//		cout << uniq << ' ';
//	}
//	return 0;
//}
//=========================================================
//Q11:Write a program to input elements in an array and find two numbers whose sum
//equals the last element in the array .

//#include <iostream>
//using namespace std;
//int main() {
//	int arr[8];
//	for (int i = 0; i < 8; i++) {
//		cin >> arr[i];
//	}
//	cout << "Array pairs whose sum equal to last element: " << '\n';
//	for (int j = 0; j < 7; j++) {
//		for (int i = 0; i < 7; i++) {
//			if (i <= j) {
//				continue;
//			}
//			else if (arr[j] + arr[i] == arr[7]) {
//				cout << arr[j] << ',' << arr[i] << '\n';
//			}
//		}
//	}
//	return 0;
//}
//=========================================================
//Q12:Write a program to print an equilateral triangle or Pyramid star pattern series
//of n rows using a loop.

//#include <iostream>
//using namespace std;
//int main() {
//	int rows;
//	cin >> rows;
//	for (int j = 1; j <= rows; j++) {
//		for (int i = 1; i <= 9; i++) {
//			if (j == 1) {
//				if (i == 5) cout << '*' << ' ';
//				else cout << "  ";
//			}
//			if (j == 2) {
//				if (i == 4 || i == 5 || i == 6) cout << '*' << ' ';
//				else cout << "  ";
//			}
//			if (j == 3) {
//				if (i==3 || i == 4 || i == 5 || i == 6 || i==7) cout << '*' << ' ';
//				else cout << "  ";
//			}
//			if (j == 4) {
//				if (i==1 || i==9) cout << "  ";
//				else cout << '*' << ' ';
//			}
//			if (j == 5) cout << '*' << ' ';
//		}
//		cout << endl;
//	}
//	return 0;
//}
//=========================================
// more optimized solution for Q12:

//#include <iostream>
//using namespace std;
//int main() {
//	int rows;
//	cin >> rows;
//	for (int j = rows; j >= 1; j--) {
//		for (int i = 1; i <= rows; i++) {
//			if (i >= j) cout << '*' << ' ';
//			else cout << "  ";
//		}
//		for(int i = rows; i >= j; i--){
//			if (j == rows || i == rows) continue;
//			else cout << '*' << ' ';
//		}
//		cout << '\n';
//	}
//	return 0;
//}
//=========================================
//Q13:Write a program to print a rhombus star pattern of N rows using a loop.

//#include <iostream>
//using namespace std;
//int main() {
//	int rows;
//	cin >> rows;
//	for (int j = 1; j <= rows; j++) {
//		for (int i = 1; i <= 11; i++) {
//			if (j == 1) {
//				if (i == 6 || i == 7 || i == 8 || i == 9 || i == 10 || i == 11) cout << '*' << ' ';
//				else cout << "  ";
//			}
//			if (j == 2) {
//				if (i == 5 || i == 6 || i == 7 || i == 8 || i == 9 || i == 10) cout << '*' << ' ';
//				else cout << "  ";
//			}
//			if (j == 3) {
//				if (i == 4 || i == 5 || i == 6 || i == 7 || i == 8 || i == 9) cout << '*' << ' ';
//				else cout << "  ";
//			}
//			if (j == 4) {
//				if (i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8) cout << '*' << ' ';
//				else cout << "  ";
//			}
//			if (j == 5) {
//				if (i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 ) cout << '*' << ' ';
//				else cout << "  ";
//			}
//			if (j == 6) {
//				if (i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 ) cout << '*' << ' ';
//				else cout << "  ";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}
//=========================================
// more optimized solution for Q13:
// 
//#include <iostream>
//using namespace std;
//int main() {
//	int rows;
//	cin >> rows;
//	for (int j = rows; j >= 1; j--) {
//		for (int i = 1; i <= rows; i++) {
//			if (i >= j) cout << '*' << ' ';
//			else cout << "  ";
//		}
//		for (int i = 1; i <= j; i++) {
//			if (i == 1) continue;
//			else cout << '*' << ' ';
//		}
//		cout << '\n';
//	}
//	return 0;
//}
//=========================================
// Q14:Given a number N. Print a diamond that has 2N rows.
// input
// 4
// output
//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *

//#include <iostream>
//using namespace std;
//int main() {
//	int rows;
//	cin >> rows;
//	for (int j = rows; j >= 1; j--) {
//		for (int i = 1; i <= rows; i++) {
//			if (i >= j) cout << '*' << ' ';
//			else cout << "  ";
//		}
//		for(int i = rows; i >= j; i--){
//			if (j == rows || i == rows) continue;
//			else cout << '*' << ' ';
//		}
//		cout << '\n';
//	}
//	for (int j = 1; j <= rows; j++) {
//		for (int i = 1; i <= rows; i++) {
//			if (i >= j) cout << '*' << ' ';
//			else cout << "  ";
//		}
//		for (int i = rows; i >= j; i--) {
//			if (i == rows) continue;
//			else cout << '*' << ' ';
//		}
//		cout << '\n';
//	}
//	return 0;
//}
//=========================================
// Q15:Given three numbers N, A, B. Print the summation of the numbers between 1 and N whose sum of digits is between A and B inclusive.

//#include <iostream>
//using namespace std;
//int main() {
//	int N, A, B, sum = 0;
//	cin >> N >> A >> B;
//	for (int j = 1; j <= N; j++) {
//		for (int i = A; i <= B; i++) {
//			if (j < 10) {
//				if (j % 10 == i) sum += j;
//			}
//			else if (j < 100) {
//				if ((j % 10) + (j / 10) == i) sum += j;
//			}
//			else if (j < 1000) {
//				if ((j % 10) + ((j / 10) % 10) + (j / 100) == i) sum += j;
//			}
//			else if (j < 10000) {
//				if ((j % 10) + ((j / 10) % 10) + ((j / 100)%10) + (j / 1000) == i) sum += j;
//			}
//		}
//	}
//	cout << sum;
//	return 0;
//}
//=========================================
//more optimization for Q15:

// #include <iostream>
//using namespace std;
//int sumOfDigits(int num) {
//	int sum = 0;
//	while (num > 0) {
//		sum += (num % 10);
//		num /= 10;
//	}
//	return sum;
//}
//int main() {
//	int N, A, B, sum = 0;
//	cin >> N >> A >> B;
//	for (int i = 1; i <= N; i++) {
//		if (sumOfDigits(i) >= A && sumOfDigits(i) <= B) {
//			sum += i;
//		}
//	}
//	cout << sum;
//}