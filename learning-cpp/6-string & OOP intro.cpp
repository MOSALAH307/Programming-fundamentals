//Assignment 6:

//Q5:Write a function receive string and convert it to lowercase

//#include <iostream>
//#include<string>
//using namespace std;
//
//string toLowerCase(string &s) {
//	for (int i = 0; i < s.length(); i++) {
//		s[i] = tolower(s[i]);
//	}
//	return s;
//}
//
//int main() {
//	string s;
//	cout << "Please enter the string\n";
//	getline(cin, s);
//	cout <<"string in lower case: " << toLowerCase(s);
//	return 0;
//}
//=========================================
//Q16:Write a CPP program to count the total number of words in a string

//#include <iostream>
//#include <string>
//using namespace std;
//
//int wordsCounter(string s) {
//	int counter = 1;
//	for (int i = 0; i < s.length(); i++) {
//		if (s[i] == ' ') counter++;
//	}
//	return counter;
//}
//
//int main() {
//	string s;
//	cout << "Please enter the string\n";
//	getline(cin, s);
//	cout << "Total number of words: " << wordsCounter(s);
//	return 0;
//}
//=========================================
//Q17:Write a C program to find reverse of a given string using loop.

//#include <iostream>
//#include <string>
//using namespace std;
//
//void reverse(string s) {
//	for (int i = s.length() - 1; i >= 0; i--) {
//		cout << s[i];
//	}
//}
//
//int main() {
//	string s;
//	cout << "Please enter the string\n";
//	getline(cin, s);
//	reverse(s);
//	return 0;
//}

//OR :

//#include <iostream>
//#include <string>
//using namespace std;
//
//void reverse(string &s) {
//	int n = s.length();
//	for (int i = 0; i < n/2; i++) {
//		swap(s[i], s[n - i - 1]);
//	}
//	cout << s;
//}
//int main() {
//	string s;
//	cout << "Please enter the string\n";
//	getline(cin, s);
//	reverse(s);
//	return 0;
//}
//===========================================
//Q18:Write a C++ program to change every letter in a given string with the letter following it in the alphabet

//#include <iostream>
//#include <string>
//using namespace std;
//
//string followigLetter(string s) {
//	for (int i = 0; i < s.length(); i++) {
//		if ((s[i] >= 48 && s[i] <= 57) || s[i] == ' ') continue;
//		s[i]++;
//	}
//	return s;
//}
//
//int main() {
//	string s;
//	cout << "Please enter the string\n";
//	getline(cin, s);
//	cout << followigLetter(s);
//	return 0;
//}
//===========================================
//Q19:Write a C++ program to capitalize the first letter of each word in a given string. Words must be separated by only one space.

//#include <iostream>
//#include <string>
//using namespace std;
//
//string capitalize(string s) {
//	for (int i = 0; i < s.length(); i++){
//		if (i == 0) s[i] = toupper(s[i]);
//		else if (s[i] == ' ') s[i + 1] = toupper(s[i + 1]);
//	}
//	return s;
//}
//
//int main() {
//	string s;
//	cout << "Please enter the string\n";
//	getline(cin, s);
//	cout << capitalize(s);
//	return 0;
//}
//===========================================
//Q20:Complete the function/method so that it returns the url with anything after the anchor (#) removed. 

//#include <iostream>
//#include <string>
//using namespace std;
//
//string urlEditor(string url) {
//	int n = url.length();
//	for (int i = 0; i < n; i++) {
//		if (url[i] == '#') {
//			url.erase(i, n - i);
//			break;
//		}
//	}
//	return url;
//}
//
//int main() {
//	string url;
//	cout << "Please enter the string\n";
//	getline(cin, url);
//	cout << urlEditor(url);
//	return 0;
//}
//=========================================================
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
//int main() {
//	Circle c1;
//	c1.setRadius(5.5);
//	c1.setColor("red");
//	cout << "circle color is " << c1.getColor() << '\n';
//	cout << "circle radius is " << c1.getRadius() << '\n';
//	cout << "circle area is " << c1.getArea();
//	return 0;
//}
//=========================================================
//Q2:

//#include <iostream>
//using namespace std;
//
//class Employee
//{
//private:
//	int id;
//	string firstName;
//	string lastName;
//	int salary;
//public:
//	Employee(int i, string f, string l, int s) {
//		id = i;
//		firstName = f;
//		lastName = l;
//		salary = s;
//	}
//	void setSalary(int s) {
//		salary = s;
//	}
//	int getId() {
//		return id;
//	}
//	string getFirstName() {
//		return firstName;
//	}
//	string getLastName() {
//		return lastName;
//	}
//	int getSalary() {
//		return salary;
//	}
//	string getName() {
//		string fullName = firstName + lastName;
//		return fullName;
//	}
//	int getAnnualSalary() {
//		return salary * 12;
//	}
//	int raiseSalary(int percent) {
//		double raise = salary * (percent / 100.0);
//		double newSalary = raise + salary;
//		return newSalary;
//	}
//};
//
//int main() {
//	Employee e1(1, "Mohamed", " Salah", 1000);
//	cout << "full name: " << e1.getName() << '\n';
//	cout << "new salary: " << e1.raiseSalary(10);
//	return 0;
//}
//=========================================================
//Q3:


//#include <iostream>
//using namespace std;
//
//class Account
//{
//private:
//	string id;
//	string name;
//	int balance;
//public:
//	Account() {
//		balance = 0;
//	}
//	Account(string i, string n) {
//		id = i;
//		name = n;
//		balance = 0;
//	}
//	Account(string i, string n, int b) {
//		id = i;
//		name = n;
//		balance = b;
//	}
//	string getId() {
//		return id;
//	}
//	string getName() {
//		return name;
//	}
//	int getbalance() {
//		return balance;
//	}
//	int credit(int amount) {
//		balance += amount;
//		return balance;
//	}
//	int debit(int amount) {
//		if (amount <= balance) balance -= amount;
//		else cout << "Amount exceeded balance\n";
//		return balance;
//	}
//	int transferTo(Account &b, int amount) {
//		if (amount <= balance) {
//			balance -= amount;
//			b.credit(amount);
//		}
//		else cout << "Amount exceeded balance\n";
//		return balance;
//	}
//};
//
//int main() {
//	Account a;
//	Account b("77sal", "Ahmed", 1000);
//	cout << "b" << b.getbalance() << '\n';
//	a.credit(2000);
//	cout << "a" << a.getbalance() << '\n';
//	a.transferTo(b, 1000);
//	cout << "b" << b.getbalance() << '\n';
//	cout << "a" << a.getbalance();
//	return 0;
//}
//=========================================================
//Q4:

//#include <iostream>
//using namespace std;
//
//class Time
//{
//private:
//	int hour;
//	int minute;
//	int second;
//public:
//	Time(int h, int m, int s) {
//		hour = h;
//		minute = m;
//		second = s;
//	}
//	void setHour(int h) {
//		hour = h;
//	}
//	void setMinuite(int m) {
//		minute = m;
//	}
//	void setSecond(int s) {
//		second = s;
//	}
//	int getHour() {
//		return hour;
//	}
//	int getMinute() {
//		return minute;
//	}
//	int getSecond() {
//		return second;
//	}
//	void setTime(int h, int m, int s) {
//		hour = h;
//		minute = m;
//		second = s;
//	}
//	Time nextSecond() {
//		Time t(hour, minute, second);
//		second++;
//		if (second >= 60) {
//			minute++;
//			second = 0;
//		}
//		if (minute >= 60) {
//			hour++;
//			minute = 0;
//		}
//		if (hour >= 24) hour = 0;
//		return t;
//	}
//	Time prevSecond() {
//		Time t(hour, minute, second);
//		second--;
//		if (second <= 0) {
//			minute--;
//			second = 59;
//		}
//		if (minute <= 0) {
//			hour--;
//			minute = 59;
//		}
//		if (hour <= 0) hour = 23;
//		return t;
//	}
//};
//
//int main() {
//	Time t1(9, 30, 25);
//	t1.prevSecond();
//	cout << t1.getHour() << ':' << t1.getMinute() << ':' << t1.getSecond() << '\n';
//	t1.nextSecond();
//	cout << t1.getHour() << ':' << t1.getMinute() << ':' << t1.getSecond() << '\n';
//	return 0;
//}
//=========================================================