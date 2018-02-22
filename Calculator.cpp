//	Simple calculator
#include <iostream>
#include <iomanip>
using namespace std;
bool playing = true;
void Menu();
int main()
{
	int choice = 0;
	int a = 0;
	int b = 0;
	while (playing)
	{
		Menu();

	}

}

void Menu()
{
	int choice = 0;
	double a;
	double b;
	cout << "= MAIN MENU =" << endl;
	cout << " " << endl;
	cout << "0: Quit" << endl;
	cout<< "1: Sum" << endl;
	cout <<"2: Subtraction" << endl;
	cout <<"3: Multiplication" << endl;
	cout <<"4: Division" << endl;
	cout <<"5: Square" << endl;
	cout << endl;
	cout << endl << "Choice: ";

	cin >> choice;

	cout << endl;
	
	while (playing)
	{
		switch (choice)
		{
		case 0:
			playing = false;
			break;
		case 1:
			if (choice==1)
			{
				cout << "Add first number: ";
				cin >> a;
				cout << "Add second number: ";
				cin >> b;
				cout << "Total: " << fixed << setprecision(2) << a + b << endl;
				system("pause");
				system("CLS");
				Menu();
			}
			break;
		case 2:
			if (choice == 2)
			{
				cout << "Add first number: ";
				cin >> a;
				cout << "Add second number: ";
				cin >> b;
				cout << "Total: " << fixed << setprecision(2) << a - b << endl;
				system("pause");
				system("CLS");
				Menu();
			}
			break;
		case 3:
			if (choice == 3)
			{
				cout << "Add first number: ";
				cin >> a;
				cout << "Add second number: ";
				cin >> b;
				cout << "Total: " << fixed << setprecision(2) << a * b << endl;
				system("pause");
				system("CLS");
				Menu();
			
			}
			break;
		case 4:
			if (choice == 4)
			{
				cout << "Add first number: ";
				cin >> a;
				cout << "Add second number: ";
				cin >> b;
				while (b == 0)
				{
					cout << "Please change second number, divisor cannot be zero" << endl;
					cout << "Please enter second number once again: " << endl;
					cin >> b;
				}
				cout << "Total: " << fixed <<setprecision(2)<< a / b << endl;
				system("pause");
				system("CLS");
				Menu();
			}
			break;
		case 5:
			if (choice == 5)
			{
				cout << "Input number: ";
				cin >> a;
				cout << "Total: " << fixed << setprecision(2) << a * a << endl;
				system("pause");
				system("CLS");
				Menu();
			}
			break;
		default:
			cout << "Wrong input!" << endl;
			break;
		}

	
	}
	
}