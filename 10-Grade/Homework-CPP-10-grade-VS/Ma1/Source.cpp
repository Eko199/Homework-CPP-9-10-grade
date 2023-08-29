#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

struct Clients
{
	char ime[69];
	int age;
	double pr;
};

int br = 0;
Clients n[20];

void Text()
{
	cout << "Press:" << endl;
	cout << "0 to exit" << endl;
	cout << "1 to sort clients by alphabetical order" << endl;
	cout << "2 for all clients under the age of 18" << endl;
	cout << "3 to sort clients by their accounts in ascending order" << endl;
	cout << "4 for the clients with the biggest accounts" << endl;
}


void Inputarr()
{
	ofstream file;
	file.open("Bank clients.txt");
	for (int i = 0; i < br; i++)
	{
		cout << "Name client " << i + 1 << ": ";
		cin.ignore();
		cin.getline(n[i].ime, 69);
		file << n[i].ime << endl;
		cout << "Age client " << i + 1 << ": ";  
		cin >> n[i].age;
		file << n[i].age << endl;
		cout << "Money in the account of client " << i + 1 << ": ";
		cin >> n[i].pr;
		file << n[i].pr << endl;
		file << endl;
		cout << endl;
	}

	file.close();
}

void OutputarrFile() 
{
	ofstream file;
	file.open("Bank clients.txt");

	for (int i = 0; i < br; i++)
	{
		file << n[i].ime << endl;
		file << n[i].age << endl;
		file << n[i].pr << endl << endl;
	}
	file.close();
}

void Outputarr() 
{
	ifstream file;
	file.open("Bank clients.txt");
	for (int i = 0; i < br; i++)
	{
		Clients m;
		file >> m.ime >> m.age >> m.pr;
		cout << "Name client " << i + 1 << ": ";
		cout << m.ime << endl;
		cout << "Age client " << i + 1 << ": ";
		cout << m.age << endl;
		cout << "Money in the account of client " << i + 1 << ": ";
		cout << m.pr << endl << endl;
	}
	file.close();
}


void Swapar(int i, int j)
{
	swap(n[i].ime, n[j].ime);
	swap(n[i].age, n[j].age);
	swap(n[i].pr, n[j].pr);
}

int CompareStr(char a[], char b[], int i = 0) {
	if (a[i] < b[i]) return -1; // a predi b
	else if (a[i] > b[i]) return 1; // a sled b
	else
	{
		if (a[i + 1] == '\0' && b[i + 1] == '\0') return 0; // ednakvi
		else if (a[i + 1] == '\0') return -1;
		else if (b[i + 1] == '\0') return 1;
		return CompareStr(a, b, i + 1);
	}
}

void F1()
{
	for (int i = 0; i < br; i++)
	{
		for (int j = i+1; j < br; j++)
		{
			if (CompareStr(n[i].ime, n[j].ime) == 1) Swapar(i, j);
		}
	}

	OutputarrFile();
	Outputarr();
}


void F2()
{

	ifstream file;
	file.open("Bank clients.txt");
	for (int i = 0; i < br; i++)
	{
		Clients m;
		file >> m.ime >> m.age >> m.pr;
		if (m.age < 18) {
			cout << "Name: " << m.ime << endl;
			cout << "Age: " << m.age << endl;
			cout << "Money in the account of client: " << m.pr << endl << endl;
		}
	}
	file.close();
}


void F3()
{
	for (int i = 0; i < br; i++)
	{
		for (int j = i+1; j < br; j++)
		{
			if (n[i].pr > n[j].pr) Swapar(i, j);
		}
	}

	OutputarrFile();
	Outputarr();
}


void F4()
{
	ifstream file;
	file.open("Bank clients.txt");

	double maxpr = n[0].pr;
	for (int i = 1; i < br; i++)
	{
		Clients m;
		file >> m.ime >> m.age >> m.pr;
		if (m.pr > maxpr) maxpr = m.pr;
	}

	file.seekg(0);
	for (int i = 0; i < br; i++)
	{
		Clients m;
		file >> m.ime >> m.age >> m.pr;
		if (m.pr == maxpr) {
			cout << "Name: " << m.ime << endl;
			cout << "Age: " << m.age << endl;
			cout << "Money in the account of client: " << m.pr << endl << endl;
		}
	}
}


void Choice()
{
	int x;
	cin >> x;
	system("cls");
	switch (x)
	{
		case 0: {exit(0); break; }
		case 1: {F1(); break; }
		case 2: {F2(); break; }
		case 3: {F3(); break; }
		case 4: {F4(); break; }
		default: cout << "Unrecognised command. \n"; break;
	}
}


int main()
{
	cout << "Info for how many clients would you like to input (max 20): "; 
	cin >> br;
	Inputarr();

	while (true)
	{
		Text();
		Choice();
	}

	return 0;
}