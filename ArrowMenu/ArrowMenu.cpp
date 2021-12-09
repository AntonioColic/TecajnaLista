#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	string drzave[5] = { "Australija", "Kanada", "Poljska", "Japan", "Velika Britanija"};
	int strelica{0}; 

	while (true)
	{
		system("cls"); 

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "\t\t\t\t\tDobro dosli u izbornik tecajne liste"; 
		cout << "\nLista drzava" << endl << endl;

		for (int index = 0; index < 5; ++index) 
		{
			if (index == strelica)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); 
				cout << drzave[index] << endl;
			}
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << drzave[index] << endl;
			}
		}

		while (true)
		{
			if (GetAsyncKeyState(VK_UP) != 0)
			{
				strelica -= 1;
				if (strelica == -1)
				{
					strelica = 4;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_DOWN) != 0)
			{
				strelica += 1;
				if (strelica == 5)
				{
					strelica = 0;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_RETURN) != 0)
			{
				switch (strelica)
				{
				case 0:
				{
					cout << "\n\n\nIzabrali ste drzavu " << drzave[0] << endl;
					cout << "Oznaka Australije je AUD" << endl << endl;
					Sleep(1000);
				} break;
				case 1:
				{
					cout << "\n\n\nIzabrali ste drzavu " << drzave[1] << endl;
					cout << "Oznaka Kanade je CAD";
					Sleep(1000);
				} break;
				case 2:
				{
					cout << "\n\n\nIzabrali ste drzavu " << drzave[2] << endl;
					cout << "Oznaka Poljske je PLN";
					Sleep(1000);
				} break;
				case 3:
				{
					cout << "\n\n\nIzabrali ste drzavu " << drzave[3] << endl;
					cout << "Oznaka Japan je JPY";
					Sleep(1000);
				} break;
				case 4:
				{
					cout << "\n\n\nIzabrali ste drzavu " << drzave[4] << endl;
					cout << "Oznaka Velike Britanije je GBP";
					Sleep(1000);
				} break;
				case 5:
				{
					return 0;
				} break;
				}
				break;
			}
		}

		Sleep(150);
	}
return 0;
}