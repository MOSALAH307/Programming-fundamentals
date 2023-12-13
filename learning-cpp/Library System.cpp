#include <iostream>
#include <string>
using namespace std;

// Book Info As Global Variables
const int librarySize = 1000;
int booksId[librarySize] = {};
string booksTitle[librarySize] = {};
string booksAuthor[librarySize] = {};
bool booksStatus[librarySize] = {};
int currentBookCount = 0;

// Main Menu
void mainMenu() {
	cout << "==========================\n";
	cout << "  Welcome to our library\n";
	cout << "==========================\n\n";
	cout << "Please choose an option from below\n\n";
	cout << "1. Add a book\n";
	cout << "2. Borrow a book\n";
	cout << "3. Return a book\n";
	cout << "4. Update a book\n";
	cout << "5. Delete a book\n";
	cout << "6. List all books info\n";
	cout << "7. Exit\n\n";
	cout << "Your choice : ";
}

// Adding a book
void addBook(string title, string author) {
	booksTitle[currentBookCount] = title;
	booksAuthor[currentBookCount] = author;
	booksStatus[currentBookCount] = true;
	booksId[currentBookCount] = currentBookCount + 1;
	currentBookCount++;
}

// Search for book id
int search(int id) {
	for (int i = 0; i < currentBookCount; i++) {
		if (id == booksId[i]) return i;
	}
	return -1;
}

// Borrowing a book
void borrow(int id) {
	if (search(id) == -1) {
		cout << "THIS BOOK DOES NOT EXIST\n\n";
		return;
	}
	if (booksStatus[id - 1]) {
		cout << "BOOK IS BORROWED SUCCESSFULLY\n\n";
		booksStatus[id - 1] = false;
		return;
	}
	cout << "BOOK IS NOT AVAILABLE\n\n";
}

void returnBook(int id) {
	if (search(id) == -1) {
		cout << "THIS BOOK DOES NOT BELONG TO OUR LIBRARY\n\n";
		return;
	}
	if (booksStatus[id - 1]) {
		cout << "WE ALREADY HAVE THE BOOK\n\n";
		return;
	}
	cout << "BOOK IS RETURNED SUCCESSFULLY\n\n";
	booksStatus[id - 1] = true;
}

// update menu
void updateMenu() {
	cout << "Please choose an option from below\n\n";
	cout << "1. update book title\n";
	cout << "2. update book author\n";
	cout << "3. update book status (available or not)\n";
	cout << "4. Exit\n";
	cout << "Your choice: ";
}

// update a book
void update(int id) {
	if (search(id) == -1) {
		cout << "THIS BOOK DOES NOT EXIST\n\n";
		return;
	}
	int choice;
	string input;
	bool flag = true;
	while (flag) {
		updateMenu();
		cin >> choice;
		cout << endl;
		switch (choice)
		{
		case 1: //Title
			cout << "Please enter the new title\n";
			cin.ignore();
			getline(cin, input);
			booksTitle[id - 1] = input;
			cout << "\nBOOK TITLE IS UPDATED SUCCESSFULLY\n\n";
			break;
		case 2: //Author
			cout << "Please enter the new author\n";
			cin.ignore();
			getline(cin, input);
			booksAuthor[id - 1] = input;
			cout << "\nBOOK AUTHOR IS UPDATED SUCCESSFULLY\n\n";
			break;
		case 3: //Status
			cout << "Please enter the book is available or not (enter y or n)\n";
			cin.ignore();
			getline(cin, input);
			booksStatus[id - 1] = (input == "y") ? true : false;
			cout << "\nBOOK STATUS IS UPDATED SUCCESSFULLY\n\n";
			break;
		case 4: //Exit
			flag = false;
			break;
		default:
			break;
		}
	}

}

// delete a book
void deleteBook(int id) {
	if (search(id) == -1) {
		cout << "THIS BOOK DOES NOT EXIST\n\n";
		return;
	}
	int index = search(id);
	for (int i = index; i < currentBookCount; i++){
		booksTitle[i] = booksTitle[i + 1];
		booksAuthor[i] = booksAuthor[i + 1];
		booksStatus[i] = booksStatus[i + 1];
	}
	currentBookCount--;
	cout << "BOOK IS DELETED SUCCESSFULLY\n\n";
}

// listing all books info
void listInfo() {
	for (int i = 0; i < currentBookCount; i++) {
		cout << "book id: " << booksId[i] << endl;
		cout << "book title: " << booksTitle[i] << endl;
		cout << "book author: " << booksAuthor[i] << endl;
		cout << "book status: " << (booksStatus[i]? "Available" : "Not Available") << endl;
		cout << "===============================\n";
	}
}

void init() {
	addBook("Harry Potter", "J. K. Rowling");
	addBook("LOTR", "J. R. R. Tolkien");
	addBook("The Hobbit", "J. R. R. Tolkien");
}

int main() {
	init();
	int choice, id;
	string title, author;
	bool flag = true;
	while (flag)
	{
		mainMenu();
		cin >> choice;
		cout << endl;
		switch (choice)
		{
		case 1: //add
			cout << "Please enter book title\n";
			cin.ignore();
			getline(cin, title);
			cout << "\nPlease enter book author\n";
			getline(cin, author);
			addBook(title, author);
			break;
		case 2: //borrow
			cout << "Please enter id of the book you want to borrow\n";
			cin >> id;
			borrow(id);
			break;
		case 3: //return
			cout << "Please enter id of the book you want to return\n";
			cin >> id;
			returnBook(id);
			break;
		case 4: //update
			cout << "Please enter id of the book you want to update\n";
			cin >> id;
			cout << endl;
			update(id);
			break;
		case 5: //delete
			cout << "Please enter id of the book you want to delete\n";
			cin >> id;
			deleteBook(id);
			break;
		case 6: //list
			listInfo();
			break;
		case 7: //exit
			cout << "Bye Bye\n";
			flag = false;
			break;
		default:
			break;
		}
		system("pause");
		system("cls");
	}

	return 0;
}
