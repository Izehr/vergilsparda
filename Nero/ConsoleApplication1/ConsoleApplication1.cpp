#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

class Publication {
private:
	string Name;
	int Year;

public:
	string getName() {
		return Name;
	};
	int setName(string TitleCheck) {
		int error_code_title;
		string voides = " ";
		if (TitleCheck != voides) {
			Name = TitleCheck;
			error_code_title = 0;
		}
		else {
			error_code_title = -1;
		};
		return error_code_title;
	};
	int getYear() {
		return Year;

	};
	int setYear(int YearCheck) {
		int error_code_year;
		if (YearCheck > 0) {
			Year = YearCheck;
			error_code_year = 0;
		}
		else {
			error_code_year = -1;
		}
		return error_code_year;
	};

};

class Book : public Publication {
private:
	string ISBN;
	string Publicator;
	string Author;
	int Amount;
public:
	string getISBN() {
		return ISBN;

	};
	int setISBN() {

	};
	string getPublicator() {
		return Publicator;

	};
	int setPublicator() {

	};
	string getAuthor() {
		return Author;

	};
	int setAuthor() {

	};
	int getAmount() {
		return Amount;
	};
	int setAmount() {

	};
};

class Journal : public Publication {
private:
	string ISBN;
	string Publicator;
	string Author;
	int Amount;
	int Number;
	int Thome;
	bool Scopus;
	bool Web_of_science;
	bool RISQ;
public:
	string getISBN() {
		return ISBN;
	};
	int setISBN() {

	};
	string getPublicator() {
		return Publicator;

	};
	int setPublicator() {

	};
	string getAuthor() {
		return Author;

	};
	int setAuthor() {

	};
	int getAmount() {
		return Amount;

	};
	int setAmount() {

	};
	int getNumber() {
		return Number;

	};
	int setNumber() {

	};
	int getThome() {
		return Thome;

	};
	int setThome() {

	};
	bool getScopus() {
		return Scopus;

	};
	int setScopus() {

	};
	bool getWeb_of_science() {
		return Web_of_science;

	};
	int setWeb_of_science() {

	};
	bool getRISQ() {
		return RISQ;

	};
	int setRISQ() {

	};
};

class Article : public Journal {
private:
	string Author;
	int Start_page;
	int End_page;
	bool Retraced;
public:
	string getAuthor() {
		return Author;

	};
	int setAuthor() {

	};
	int getStart_page() {
		return Start_page;

	};
	int setStart_page() {

	};
	int getEnd_page() {
		return End_page;

	};
	int setEnd_page() {

	};
	bool getRetraced() {
		return Retraced;

	};
	int setRetraced() {

	};

};

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Hello, darkness" << endl;
	Publication objA;
	cout << "Waht would you like to do?" << endl;
	cout << "1. Enter a new book;" << endl;
	cout << "2. Exit." << endl;
	int choise;
	cin >> choise;
	switch (choise) {
	case 1:
		int YearCheck;
		string TitleCheck;
		cout << "Enter the year of publication: ";
		cin >> YearCheck;
		cout << "Enter the title: ";
		cin >> TitleCheck;

		int error_code_year = objA.setYear(YearCheck);
		//cout << "Код ошибки" << endl;
		cout << error_code_year << endl;
		if (error_code_year == 0) {
			cout << objA.setYear(YearCheck) << endl;
			cout << objA.getYear() << endl;
		}
		else {
			cout << "Ошибка в присвоении" << endl;
		};

		int error_code_title = objA.setName(TitleCheck);
		//cout << "Код ошибки" << endl;
		cout << error_code_title << endl;
		if (error_code_title == 0) {
			cout << objA.setName(TitleCheck) << endl;
			cout << objA.getName() << endl;
		}
		else {
			cout << "Ошибка в присвоении" << endl;
		};

	};
	return 0;
};
