#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int provjeraVB = 0;
int drzavaVB(void)
{
    int strelica{ 0 };
    string vbSve[4] = { "Prodajni", "Kupovni", "Srednji", "Povratak na izbor drzava" };

    while (true)
    {
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

        cout << "\t\t\t\t\tDobro dosli u izbornik tecaja" << endl << endl;
        cout << "Zelite li" << endl << endl;

        for (int index = 0; index < 4; index++)
        {
            if (index == strelica)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                cout << vbSve[index] << endl << endl;
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                cout << vbSve[index] << endl << endl;
            }
        }
        while (true)
        {
            if (GetAsyncKeyState(VK_UP) != 0)
            {
                strelica -= 1;
                if (strelica == -1)
                {
                    strelica = 3;
                }

                break;
            }
            else if (GetAsyncKeyState(VK_DOWN) != 0)
            {
                strelica += 1;
                if (strelica == 4)
                {
                    strelica = 0;
                }

                break;
            }
            else if (GetAsyncKeyState(VK_RETURN) != 0)
            {
                switch (strelica)
                {
                case 3: return 1;
                }
            }
        }
        Sleep(150);
    }

}

int provjeraJapan = 0;
int drzavaJapan(void)
{
    int strelica{ 0 };
    string japanSve[4] = { "Prodajni", "Kupovni", "Srednji", "Povratak na izbor drzava" };

    while (true)
    {
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

        cout << "\t\t\t\t\tDobro dosli u izbornik tecaja" << endl << endl;
        cout << "Zelite li" << endl << endl;

        for (int index = 0; index < 4; index++)
        {
            if (index == strelica)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                cout << japanSve[index] << endl << endl;
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                cout << japanSve[index] << endl << endl;
            }
        }
        while (true)
        {
            if (GetAsyncKeyState(VK_UP) != 0)
            {
                strelica -= 1;
                if (strelica == -1)
                {
                    strelica = 3;
                }

                break;
            }
            else if (GetAsyncKeyState(VK_DOWN) != 0)
            {
                strelica += 1;
                if (strelica == 4)
                {
                    strelica = 0;
                }

                break;
            }
            else if (GetAsyncKeyState(VK_RETURN) != 0)
            {
                switch (strelica)
                {
                case 3: return 1;
                }
            }
        }
        Sleep(150);
    }

}

int provjeraPoljska = 0;
int drzavaPoljska(void)
{
    int strelica{ 0 };
    string poljskaSve[4] = { "Prodajni", "Kupovni", "Srednji", "Povratak na izbor drzava" };

    while (true)
    {
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

        cout << "\t\t\t\t\tDobro dosli u izbornik tecaja" << endl << endl;
        cout << "Zelite li" << endl << endl;

        for (int index = 0; index < 4; index++)
        {
            if (index == strelica)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                cout << poljskaSve[index] << endl << endl;
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                cout << poljskaSve[index] << endl << endl;
            }
        }
        while (true)
        {
            if (GetAsyncKeyState(VK_UP) != 0)
            {
                strelica -= 1;
                if (strelica == -1)
                {
                    strelica = 3;
                }

                break;
            }
            else if (GetAsyncKeyState(VK_DOWN) != 0)
            {
                strelica += 1;
                if (strelica == 4)
                {
                    strelica = 0;
                }

                break;
            }
            else if (GetAsyncKeyState(VK_RETURN) != 0)
            {
                switch (strelica)
                {
                case 3: return 1;
                }
            }
        }
        Sleep(150);
    }

}

int provjeraKanada = 0;
int drzavaKanada(void) 
{
    int strelica{ 0 };
    string kanadaSve[4] = { "Prodajni", "Kupovni", "Srednji", "Povratak na izbor drzava" };

    while (true)
    {
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

        cout << "\t\t\t\t\tDobro dosli u izbornik tecaja" << endl << endl;
        cout << "Zelite li" << endl << endl;

        for (int index = 0; index < 4; index++)
        {
            if (index == strelica)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                cout << kanadaSve[index] << endl << endl;
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                cout << kanadaSve[index] << endl << endl;
            }
        }
        while (true)
        {
            if (GetAsyncKeyState(VK_UP) != 0)
            {
                strelica -= 1;
                if (strelica == -1)
                {
                    strelica = 3;
                }

                break;
            }
            else if (GetAsyncKeyState(VK_DOWN) != 0)
            {
                strelica += 1;
                if (strelica == 4)
                {
                    strelica = 0;
                }

                break;
            }
            else if (GetAsyncKeyState(VK_RETURN) != 0)
            {
                switch (strelica)
                {
                case 3: return 1;
                }
            }
        }
        Sleep(150);
    }

}

int provjeraAustralija = 0;
int drzavaAustralija(void) // sve o Australiji kad korisnik odabere tu drzavu
{
    int strelica{ 0 };
    string australijaSve[4] = { "Prodajni", "Kupovni", "Srednji", "Povratak na izbor drzava" };

    while (true)
    {
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

        cout << "\t\t\t\t\tDobro dosli u izbornik tecaja" << endl << endl;
        cout << "Zelite li" << endl << endl;

        for (int index = 0; index < 4; index++)
        {
            if (index == strelica)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                cout << australijaSve[index] << endl << endl;
            }
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                cout<< australijaSve[index] << endl << endl;
            }
        }
        while (true)
        {
            if (GetAsyncKeyState(VK_UP) != 0)
            {
                strelica -= 1;
                if (strelica == -1)
                {
                    strelica = 3;
                }

                break;
            }
            else if (GetAsyncKeyState(VK_DOWN) != 0)
            {
                strelica += 1;
                if (strelica == 4)
                {
                    strelica = 0;
                }

                break;
            }
            else if (GetAsyncKeyState(VK_RETURN) != 0)
            {
                switch (strelica)
                {
                case 3: return 1;
                }
            }
        }
        Sleep(150);
    }

}


int main()
{
    string drzave[5] = { "Australija", "Kanada", "Poljska", "Japan", "Velika Britanija" };
    int strelica{ 0 };
    Mainmenu:
    while (true)
    {
        system("cls");

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        cout << "\t\t\t\t\tDobro dosli u listu drzava" << endl;
        cout << "\nIzaberite drzavu" << endl << endl;

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
                    cout << "Oznaka Australije je AUD i valuta je Australski dolar" << endl << endl;
                    Sleep(3000);
                    provjeraAustralija = drzavaAustralija();
                    if (provjeraAustralija == 1)
                        goto Mainmenu;
                } break;
                case 1:
                {
                    cout << "\n\n\nIzabrali ste drzavu " << drzave[1] << endl;
                    cout << "Oznaka Kanade je CAD i valuta je Kanadski dolar";
                    Sleep(2500);
                    provjeraKanada = drzavaKanada();
                    if (provjeraKanada == 1)
                        goto Mainmenu;
                } break;
                case 2:
                {
                    cout << "\n\n\nIzabrali ste drzavu " << drzave[2] << endl;
                    cout << "Oznaka Poljske je PLN  i valuta je Poljski zlot";
                    Sleep(2500);
                    provjeraPoljska = drzavaPoljska();
                    if (provjeraPoljska == 1)
                        goto Mainmenu;
                } break;
                case 3:
                {
                    cout << "\n\n\nIzabrali ste drzavu " << drzave[3] << endl;
                    cout << "Oznaka Japan je JPY  i valuta je Japanski jen";
                    Sleep(2500);
                    provjeraJapan = drzavaJapan();
                    if (provjeraJapan == 1)
                        goto Mainmenu;
                } break;
                case 4:
                {
                    cout << "\n\n\nIzabrali ste drzavu " << drzave[4] << endl;
                    cout << "Oznaka Velike Britanije je GBP i valuta je Britanska funta";
                    Sleep(2500);
                    provjeraVB = drzavaVB();
                    if (provjeraVB == 1)
                        goto Mainmenu;
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