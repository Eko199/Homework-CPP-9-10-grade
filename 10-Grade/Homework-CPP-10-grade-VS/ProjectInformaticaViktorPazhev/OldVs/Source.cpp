#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

int number_pcs = 0;

int EnterId();

struct PC {
	int id;
	char date[69];
	char warranty[69];
	char model[69];
	char hard_drive[69];
	double ram; //in GB
	double price; //in leva

	void Input() {
		cout << "PC " << number_pcs + 1 << ": \n";
		id = EnterId();
		cin.ignore();
		cout << "date of production: ";
		cin.getline(date, 69);
		cout << "warranty: ";
		cin.getline(warranty, 69);
		cout << "model: ";
		cin.getline(model, 69);
		cout << "hard drive: ";
		cin.getline(hard_drive, 69);
		cout << "RAM (in GBs): ";
		cin >> ram;
		cout << "price (in leva): ";
		cin >> price;
	}

	void Output(int number) {
		cout << "PC " << number << ":\n"
			<< "ID: " << id
			<< "\ndate of production: " << date 
			<< "\nwarranty: " << warranty
			<< "\nmodel: " << model 
			<< "\nhard drive: " << hard_drive
			<< "\nRAM: " << ram << "GB"
			<< "\nprice: " << price << " leva \n\n";
	}
};

PC pcs[69];

int EnterId() {
	int id;
	cout << "ID: ";
	cin >> id;
	for (int i = 0; i < number_pcs; i++) {
		if (pcs[i].id == id) {
			cout << "This ID is already taken. Try another one: ";
			cin >> id;
			i = -1;
		}
	}
	return id;
}

bool IsInArr(int arr[], int sizeArr, int x) {
	for (int i = 0; i < sizeArr; i++) if (arr[i] == x) return true;
	return false;
}

void Input() {
	system("cls");
	int n;
	cout << "How many PCs do you want to enter?: ";
	cin >> n;
	while (n < 0) {
		cout << "You cant enter negative number PCs. Try again: ";
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		pcs[number_pcs].Input();
		number_pcs++;
		cout << endl;
	}
}

void Output() {
	system("cls");
	for (int i = 0; i < number_pcs; i++) pcs[i].Output(i+1);
	system("pause");
}

void Virus() {
	while (true) {
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { rand() % 120, rand() % 30 });
		cout << (char)(rand() % 1200);
	}
}

void SearchNum() {
	system("cls");
	double num;
	cout << "Enter a number to search for: ";
	cin >> num;
	bool f = false;
	for (int i = 0; i < number_pcs; i++) {
		if (pcs[i].id == num) {
			cout << "PC " << i + 1 << "'s ID = " << num << endl;
			f = true;
		}
		if (pcs[i].ram == num) {
			cout << "PC " << i + 1 << "'s RAM = " << num << "GB \n";
			f = true;
		}
		if (pcs[i].price == num) {
			cout << "PC " << i + 1 << "'s price = " << num << " leva \n";
			f = true;
		}
	}
	if (!f) cout << "No element found that is equal to " << num << ". \n";
	char ans;
	cout << "Search again? (y/n): ";
	cin >> ans;
	if (ans == 'y') SearchNum();
}

void SearchId() {
	system("cls");
	int id;
	cout << "Enter the searched ID: ";
	cin >> id;
	bool f = false;
	for (int i = 0; i < number_pcs; i++) {
		if (pcs[i].id == id) {
			pcs[i].Output(i+1);
			f = true;
		}
	}
	if (!f) cout << "No PC with ID = " << id << " found. \n";
	char ans;
	cout << "Search again? (y/n): ";
	cin >> ans;
	if (ans == 'y') SearchId();
}

void SearchStr() {
	system("cls");
	char str[69];
	cout << "Enter a string to search for: ";
	cin.ignore();
	cin.getline(str, 69);
	bool f = false;
	for (int i = 0; i < number_pcs; i++) {
		if (!strcmp(pcs[i].date, str)) {
			cout << "PC " << i + 1 << "'s date of production is " << str << ". \n";
			f = true;
		}
		if (!strcmp(pcs[i].warranty, str)) {
			cout << "PC " << i + 1 << "'s warranty is " << str << ". \n";
			f = true;
		}
		if (!strcmp(pcs[i].model, str)) {
			cout << "PC " << i + 1 << "'s model is " << str << ". \n";
			f = true;
		}
		if (!strcmp(pcs[i].hard_drive, str)) {
			cout << "PC " << i + 1 << "'s hard drive is " << str << ". \n";
			f = true;
		}
	}
	if (!f) cout << "No element found that contains " << str << " as a property. \n";
	char ans;
	cout << "Search again? (y/n): ";
	cin >> ans;
	if (ans == 'y') SearchStr();
}

void Compare() {
	system("cls");
	int option;
	cout << "Which property would you like to compare? \n0 - ID \n1 - RAM \n2 - price: \n";
	cin >> option;
	while (option < 0 || option > 2) {
		cout << "You must choose either 0, 1 or 2: ";
		cin >> option;
	}
	double x;
	cout << "Enter a number to which you want to compare: ";
	cin >> x;
	int num = 0;
	switch (option) {
		case 0:
			for (int i = 0; i < number_pcs; i++) {
				if (pcs[i].id > x) num++;
			}
			cout << "There are " << num << " PCs which have an ID greater than " << x << ". \n";
			break;
		case 1:
			for (int i = 0; i < number_pcs; i++) {
				if (pcs[i].ram > x) num++;
			}
			cout << "There are " << num << " PCs which have RAM greater than " << x << "GB. \n";
			break;
		case 2:
			for (int i = 0; i < number_pcs; i++) {
				if (pcs[i].price > x) num++;
			}
			cout << "There are " << num << " PCs which have a price greater than " << x << " leva. \n";
			break;
		default:
			cout << "An unexpected error occurred. \n";
			break;
	}
	char ans;
	cout << "Compare again? (y/n): ";
	cin >> ans;
	if (ans == 'y') Compare();
}

void Sum() {
	system("cls");
	double sumRam = 0, sumPrice = 0;
	for (int i = 0; i < number_pcs; i++) {
		sumRam += pcs[i].ram;
		sumPrice += pcs[i].price;
	}
	cout << "The sum of the RAM is " << sumRam << "GB. \n";
	cout << "The sum of the prices is " << sumPrice << " leva. \n";
	system("pause");
}

int CompareStr(char str1[], char str2[], int i = 0) {
	if (str1 == str2) return 0;
	else if (str1[i] < str2[i]) return -1; // str1 e predi str2
	else if (str1[i] > str2[i]) return 1; // str1 e sled str2
	else {
		if (str1[i+1] == '\0') return -1;
		else if (str2[i+1] == '\0') return 1;
		else return CompareStr(str1, str2, i+1);
	}
}

void SortStr() {
	system("cls");
	int option;
	cout << "By which property would you like to sort? \n1 - date of production \n2 - warranty \n3 - model \n4 - hard drive: \n";
	cin >> option;
	while (option < 1 || option > 4) {
		cout << "You must choose an integer between 1 and 4: ";
		cin >> option;
	}
	int last = -1, min = -1, done[69];
	switch (option) {
		case 1:
			for (int i = 0; i < number_pcs; i++) {
				for (int j = 0; j < number_pcs; j++) {
					if (IsInArr(done, i, j)) continue;
					if (min == -1 || CompareStr(pcs[j].date, pcs[min].date) < 0) min = j;
				}
				pcs[min].Output(min + 1);
				done[i] = min;
				min = -1;
			}
			break;
		case 2:
			for (int i = 0; i < number_pcs; i++) {
				for (int j = 0; j < number_pcs; j++) {
					if (IsInArr(done, i, j)) continue;
					if (min == -1 || CompareStr(pcs[j].warranty, pcs[min].warranty) < 0) min = j;
				}
				pcs[min].Output(min + 1);
				done[i] = min;
				min = -1;
			}
			break;
		case 3:
			for (int i = 0; i < number_pcs; i++) {
				for (int j = 0; j < number_pcs; j++) {
					if (IsInArr(done, i, j)) continue;
					if (min == -1 || CompareStr(pcs[j].model, pcs[min].model) < 0) min = j;
				}
				pcs[min].Output(min + 1);
				done[i] = min;
				min = -1;
			}
			break;
		case 4:
			for (int i = 0; i < number_pcs; i++) {
				for (int j = 0; j < number_pcs; j++) {
					if (IsInArr(done, i, j)) continue;
					if (min == -1 || CompareStr(pcs[j].hard_drive, pcs[min].hard_drive) < 0) min = j;
				}
				pcs[min].Output(min + 1);
				done[i] = min;
				min = -1;
			}
			break;
		default:
			cout << "An unexpected error occurred. \n";
			break;
	}
	system("pause");
}

void SortNum() {
	system("cls");
	int option;
	cout << "By which property would you like to sort? \n0 - ID \n1 - RAM \n2 - price: \n";
	cin >> option;
	while (option < 0 || option > 2) {
		cout << "You must choose either 0, 1 or 2: ";
		cin >> option;
	}
	int min = -1, done[69];
	switch (option) {
		case 0:
			for (int i = 0; i < number_pcs; i++) {
				for (int j = 0; j < number_pcs; j++) {
					if (IsInArr(done, i, j)) continue;
					if (min == -1 || pcs[j].id < pcs[min].id) min = j;
				}
				pcs[min].Output(min + 1);
				done[i] = min;
				min = -1;
			}
			break;
		case 1:
			for (int i = 0; i < number_pcs; i++) {
				for (int j = 0; j < number_pcs; j++) {
					if (IsInArr(done, i, j)) continue;
					if (min == -1 || pcs[j].ram < pcs[min].ram) min = j;
				}
				pcs[min].Output(min + 1);
				done[i] = min;
				min = -1;
			}
			break;
		case 2:
			for (int i = 0; i < number_pcs; i++) {
				for (int j = 0; j < number_pcs; j++) {
					if (IsInArr(done, i, j)) continue;
					if (min == -1 || pcs[j].price < pcs[min].price) min = j;
				}
				pcs[min].Output(min + 1);
				done[i] = min;
				min = -1;
			}
			break;
		default:
			cout << "An unexpected error occurred. \n";
			break;
	}
	system("pause");
}

void Delete() {
	system("cls");
	int pos;
	cout << "Enter the position of the element you want to delete (the first element is 1): ";
	cin >> pos;
	while (pos < 1 || pos > number_pcs) {
		cout << "Invalid position. Please try again: ";
		cin >> pos;
	}
	pcs[pos-1] = pcs[number_pcs - 1];
	pcs[number_pcs - 1] = PC{};
	number_pcs--;
	char ans;
	cout << "Deletion complete. Please note that the order of elements has changed. Delete another again? (y/n): ";
	cin >> ans;
	if (ans == 'y') Delete();
}

void Change() {
	system("cls");
	int pos;
	cout << "What is the position of the element you want to change? (the first is 1): ";
	cin >> pos;
	while (pos < 1 || pos > number_pcs) {
		cout << "Invalid position. Please try again: ";
		cin >> pos;
	}
	pcs[pos-1].Output(pos);
	int prop;
	cout << "Which property do you want to change?\n"
		"0 - ID \n"
		"1 - date of prduction \n"
		"2 - warranty \n"
		"3 - model \n"
		"4 - hard drive \n"
		"5 - RAM \n"
		"6 - price: \n";
	cin >> prop;
	while (prop < 0 || prop > 6) {
		cout << "Invalid input. The number must be between 0 and 6. Try again: ";
		cin >> prop;
	}
	if (prop == 0) {
		pcs[pos - 1].id = NULL;
		cout << "Enter new ";
		pcs[pos - 1].id = EnterId();
	} else {
		char change[69];
		cout << "Enter new value: ";
		cin.ignore();
		cin.getline(change, 69);
		switch (prop) {
			case 1:
				strcpy_s(pcs[pos - 1].date, change);
				break;
			case 2:
				strcpy_s(pcs[pos - 1].warranty, change);
				break;
			case 3:
				strcpy_s(pcs[pos - 1].model, change);
				break;
			case 4:
				strcpy_s(pcs[pos - 1].hard_drive, change);
				break;
			case 5:
				pcs[pos - 1].ram = atof(change);
				break;
			case 6:
				pcs[pos - 1].price = atof(change);
				break;
			default:
				cout << "An unexpected error occurred. \n";
				break;
		}
	}
	cout << "\nNew properties: \n";
	pcs[pos-1].Output(pos);
	char ans;
	cout << "Change another property? (y/n): ";
	cin >> ans;
	if (ans == 'y') Change();
}

void Menu() {
	system("cls");
	int option;
	cout << "Choose an option: \n 0 - exit \n 1 - input \n 2 - output \n 3 - install virus"
		"\n 4 - search for number \n 5 - search by id \n 6 - search for string \n 7 - show number of elements greater than a number"
		"\n 8 - show the sum of every PC's ram and price \n 9 - sort by string \n 10 - sort by number"
		"\n 11 - add a new last element \n 12 - delete a certain element \n 13 - change an element: \n";
	cin >> option;
	while (option < 0 || option > 13) {
		cout << "Invalid choice. Please try again (0-13): ";
		cin >> option;
	}
	switch (option) {
		case 0:
			exit(0);
		case 1:
			Input();
			break;
		case 2:
			Output();
			break;
		case 3:
			Virus();
			break;
		case 4:
			SearchNum();
			break;
		case 5:
			SearchId();
			break;
		case 6:
			SearchStr();
			break;
		case 7:
			Compare();
			break;
		case 8:
			Sum();
			break;
		case 9:
			SortStr();
			break;
		case 10:
			SortNum();
			break;
		case 11:
			system("cls");
			pcs[number_pcs].Input();
			number_pcs++;
			break;
		case 12:
			Delete();
			break;
		case 13:
			Change();
			break;
		default:
			cout << "There was an unexpected error. Try again:";
			break;
	}
	Menu();
}

int main() {
	Menu();
	return 0;
}