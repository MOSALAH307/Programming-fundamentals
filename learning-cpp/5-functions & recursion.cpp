//Assignment 5:

// Q1:Write a program to print all elements of an array using the function.

//#include <iostream>
//using namespace std;
//void print(int arr[], int n) {
//	cout << "Array elements: ";
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << ',';
//	}
//}
//int main() {
//	int arr[50], n;
//	cout << "please enter the size of the list" << '\n';
//	cin >> n;
//	cout << "please enter the elements in the list" << '\n';
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	print(arr, n);
//	return 0;
//}
//=========================================
// Q2:Write a program to find the sum of array elements using the function.

//#include <iostream>
//using namespace std;
//int summation(int arr[], int size) {
//	int sum = 0;
//	for (int i = 0; i < size; i++) {
//		sum += arr[i];
//	}
//	return sum;
//}
//int main() {
//	int arr[50], n;
//	cout << "please enter the size of the list" << '\n';
//	cin >> n;
//	cout << "please enter the elements in the list" << '\n';
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	cout << "Sum of array: " << summation(arr, n);
//	return 0;
//}
//=========================================
// Q3:Write a function takes a matrix then return the sum of main diagonal
//(Major diagonal) elements of the matrix.

//#include <iostream>
//using namespace std;
//int sumOfDiagonal(int matrix[][10], int row, int colomn) {
//	int sum = 0;
//	for (int j = 0; j < row; j++) {
//		for (int i = 0; i < colomn; i++) {
//			if (j == i) sum += matrix[j][i];
//		}
//	}
//	return sum;
//}
//int main() {
//	int matrix[10][10], rows, colomns;
//	cout << "please enter the number of rows then colomns" << '\n';
//	cin >> rows >> colomns;
//	cout << "please enter the elements in the matrix" << '\n';
//	for (int j = 0; j < rows; j++) {
//		for (int i = 0; i < colomns; i++) {
//			cin >> matrix[j][i];
//		}
//	}
//	cout << sumOfDiagonal(matrix, rows, colomns);
//	return 0;
//}
//===========================================
// Q4:Function to reverse int using recursion

//#include <iostream>
//using namespace std;
//void reverse(int num) {
//	if (num < 10) cout << num;
//	else {
//		cout << num % 10;
//		reverse(num / 10);
//	}
//}
//int main() {
//	int num;
//	cin >> num;
//	reverse(num);
//	return 0;
//}
//===========================================
// Q5:Function to return the max digit in int

//#include <iostream>
//using namespace std;
//int max(int num, int mx) {
//	if (num == 0) return mx;
//	else if (mx < num % 10) {
//		mx = num % 10;
//	}
//	max(num / 10, mx);
//}
//int main() {
//	int n;
//	cin >> n;
//	cout << max(n, 0);
//}
//===========================================
// Q6:Write a recursive function in CPP programming to print all natural numbers between 1 to n.

//#include <iostream>
//using namespace std;
//void print(int num) {
//	if (num == 1) cout << 1 << ' ';
//	else {
//		print(num - 1);
//		cout << num << ' ';
//	}
//}
//int main() {
//	int n;
//	cin >> n;
//	cout << "Natural numbers between 1 to " << n << ": ";
//	print(n);
//	return 0;
//}
//=========================================================
// Q7:7Write a recursive function in CPP programming to print all even or odd numbers between 1
//to n.

//#include <iostream>
//using namespace std;
//void odd(int num) {
//	if (num == 1) cout << num << ',';
//	else if (num % 2 != 0) {
//		odd(num - 1);
//		cout << num << ',';
//	}
//	else odd(num - 1);
//}
//void even(int num) {
//	if (num == 1) return;
//	else if (num % 2 == 0) {
//		even(num - 1);
//		cout << num << ',';
//	}
//	else even(num - 1);
//}
//int main() {
//	int n;
//	cin >> n;
//	cout << "Even numbers between 1 to " << n << ": ";
//	even(n);
//	cout << '\n' << "Odd numbers between 1 to " << n << ": ";
//	odd(n);
//	return 0;
//}
//=========================================================
// Q8:Write a recursive function in CPP programming to find reverse of a number.

//#include <iostream>
//using namespace std;
//void reverse(int num) {
//	if (num < 10) cout << num;
//	else {
//		cout << num % 10;
//		reverse(num / 10);
//	}
//}
//int main() {
//	int n;
//	cin >> n;
//	reverse(n);
//	return 0;
//}
//=========================================================
// Another solution for Q8:

// #include <iostream>
//using namespace std;
//int reverse(int num, int num2) {
//	if (num == 0) return num2;
//	num2 = num2 * 10 + (num % 10);
//	reverse(num / 10, num2);
//}
//int main() {
//	int n;
//	cin >> n;
//	cout << reverse(n, 0);
//	return 0;
//}
//=========================================================
// Q9:Write a recursive function in CPP to find factorial of a number.

//#include <iostream>
//using namespace std;
//int factorial(int num) {
//	if (num == 1) return num;
//	int result = num * factorial(num - 1);
//	return result;
//}
//int main() {
//	int n;
//	cin >> n;
//	cout << "Factorial of n = " << factorial(n);
//	return 0;
//}
//=========================================================
// Q10:Write a recursive function in CPP to find factorial of a number.

//#include <iostream>
//using namespace std;
//int reverse(int num, int num2) {
//	if (num == 0) return num2;
//	num2 = num2 * 10 + (num % 10);
//	reverse(num / 10, num2);
//}
//int main() {
//	int n;
//	cin >> n;
//	if (n == reverse(n, 0)) cout << n << " is palindrome";
//	else cout << n << " is not palindrome";
//	return 0;
//}
//=========================================================
