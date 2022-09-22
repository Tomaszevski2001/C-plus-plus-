#include <iostream>
#include <fstream>
#include <string>
#include "Firma.h"
int firma;
int osoba;
int a;
std::string im, nazw, stan, pl;
float zar;
int lp;

int main()
{
    ofstream plik; // fstream reprezentuje plik tekstowy
    plik.open("DaneFirmy.txt");
    if (plik.good() == false)
    {
        cout << "Problem z otwarciem pliku tekstowego!\n";
        return 0;
    }



    cout << "             Witaj w Naszej Firmie Rodzinnej           " << endl;
    cout << "-----------------------------------------------------------" << endl;
    Firma f;
    f.raport();
    f.dodaj_pracownika("1. Tomasz", "Sanicki", "Junior", "Mezczyzna", 0, 3200);
    f.dodaj_pracownika("2. Dominik", "Szafa", "Medium", "Mezczyzna", 2, 6750);
    f.dodaj_pracownika("3. Zuzanna", "Wladyka", "Senior", "Kobieta", 10, 17400);
    f.dodaj_pracownika("4. Marta", "Wokurka", "Data Science", "Kobieta", 3, 5800);
    f.dodaj_pracownika("5. Antoni", "Kosiba", "Analityk", "Mezczyzna", 7, 7890);

    while (true)
    {

        cout << "-----------------------------------------------------------" << endl;
        cout << "Jakie Zmiany Chcesz Przeprowadzic w Naszej Firmie ? " << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "0. Wyswietl Liste Pracownikow" << endl;
        cout << "lub" << endl;
        cout << "1. Dodaj pracownika" << endl;
        cout << "lub" << endl;
        cout << "2. Usun pracownika " << endl;
        cout << "lub" << endl;
        cout << "3. Dowiedz sie wiecej o Firmie " << endl;
        cout << "lub" << endl;
        cout << "4. Wiecej o naszych Pracownikach" << endl;
        cout << "lub" << endl;
        cout<<"5.  Po ile Nasi Pracownicy Pracuja ?"<<endl;
        cout<<"lub"<<endl;
        cout << "6. Zakoncz Program" << endl;
        cin >> a;

        switch (a)
        {
            case 0:
                f.wypisz();
                break;

            case 1:
                cout << "Dodaj pracownika\n" << endl;

                cout << "imie:" << endl;
                cin >> im;
                cout << "Nazwisko" << endl;
                cin >> nazw;
                cout << "Stanowisko" << endl;
                cin >> stan;
                cout << "Plec" << endl;
                cin >> pl;
                cout << "Lata pracy" << endl;
                cin >> lp;
                cout << "Zarobki" << endl;
                cin >> zar;
                f.dodaj_pracownika(im, nazw, stan, pl, lp, zar);
                break;

            case 2:
                int index;
                cout<<"Ktorego Pracownika Chcesz Usunac?"<<endl;
                cout << "-----------------------------------------------------------" << endl;
                f.wypisz();
                cout << "*************************************************************" << endl;
                cout<<"Wiec Ktorego Pracownika usumy?"<<endl;
                cout << "-----------------------------------------------------------" << endl;
                cout<<"Usun nr:  ";
                cin >>index;
                f.usun_pracownika(index-1);
                cout << "WYNIK PO USUNIECIU" << endl;
                cout << "-----------------------------------------------------------" << endl;
                f.wypisz();
                break;

            case 3:
                f.informacje();
                break;

            case 4:
                int indeksPracownika;
                int ileKaw;
                cout << "Podaj indeks pracownika(1:5): ";
                cin >> indeksPracownika;
                cout << "Ile kaw ma wypic dzisiaj? ";
                cin >> ileKaw;
                 f.dajPracownika(indeksPracownika - 1).pijKawe(ileKaw);
                break;
            case 5:
                cout << "Podaj Indeks Pracownika: ";
                cin >> indeksPracownika;
                if(indeksPracownika >6)
                {
                    cout<<"Wybrales Zly Indeks"<<endl;
                }

                else {
                    f.dajPracownika(indeksPracownika - 1).pracuj();
                    cout<<" Ciezko po 8 Godzin dziennie"<<endl;
                    break;
                    case 6:
                        string wiersz;
                        plik << f;
                    plik.close();
                    ifstream plik2;
                    plik2.open("DaneFirmy.txt",fstream::in);
                    while(!plik2.eof())
                    {
                        getline(plik2,wiersz);
                        cout<<wiersz<<endl;
                    }
                    plik2.close();
                    return 0;
                }
        }

    }
}



