#include <iostream>
#include "Firma.h"

Firma::Firma(const string & nazwa_firmy, int ilosc_pracownikow, const string & prezes, int ilosc_komputerow, float przychody) {}

void Firma::dodaj_pracownika(const std::string & imie, const std::string & nazwisko, const std::string & stanowisko,
                             const std::string & plec, int lataPracy, float zarobki)
{
    pracownicy.push_back(Pracownik(imie, nazwisko, stanowisko, plec, lataPracy, zarobki));
}
void Firma::raport()
{

    cout << "NAZWA FIRMY:" << endl;
    cout << "--------" << Nazwa_Firmy << "--------" << endl;
    cout << "PREZES:" << endl;
    cout << "------" << Prezes_Firmy << "--------" << endl;
    cout << "ILOSC SPRZETU:" << endl;
    cout << "--------" << ilosc_komputerow << " Komputerow" << "--------" << endl;
    cout << "ILOSC PRACOWNIKOW:" << endl;
    cout << "--------" << ilosc_pracownikow << " Pracownikow" << "--------" << endl;
    cout << "ZYSKI:" << endl;
    cout << "--------" << przychody << "zl rocznie" << "--------" << endl;
    cout << "         " << endl;
    return;
}

void Firma::informacje()
{
    cout << "Rok zalozenia: " << zalozenie << endl;
    cout << "Lokalizacja:" << miejsce<<endl;
    cout << "Kod Pocztowy: " << kod << endl;
    cout << "Ulica: " << ulica << endl;
    cout << "Opis Budynku: " << budynek<< endl;

}

void Firma::wypisz()
{
    cout << "W naszej firmie jest " << pracownicy.size() << " pracownikow\n";
    for (int i = 0; i < pracownicy.size(); i++)
        std::cout << pracownicy[i] << std::endl;
}

void Firma::usun_pracownika(int indeks)
{
    if (indeks >= pracownicy.size())
    {
        std::cout << "Nie ma pracownika o takim indeksie\n";
        return;
    }
    pracownicy.erase(pracownicy.begin() + indeks);

}
void informacje(int zalozenie = 2015, const string & Miejsce = "Jaslo", const string & kod = "38-200", const string & ulica = "Franciszkanska", const string & budynek = "Budynek Zbudowany w Stylu Amerykanskim")
{
    cout << "Firma Zostala Zalozona w:/n " << zalozenie << endl;
    cout << "Firma znajduje się w Miejscowosci:/n " << Miejsce << endl;
    cout << "Kod Pocztowy to:/n " << kod << endl;
    cout << "Ulica Siedziby" << endl;
    cout << "Informacje o Polozeniu:/n" << budynek << endl;
    return;
}

//void Firma::zapiszDoPliku(ofstream & plik)
 std ::ofstream & operator<<(ofstream & zapis ,Firma&pliku)
{
    zapis<<"1. Nazwa Firmy:"<<pliku.Nazwa_Firmy<<endl;
    zapis<<"2. Dyrektor:"<<pliku.Prezes_Firmy<<endl;
    zapis<<"3. Data Powstania:"<<pliku.zalozenie<<endl;
    zapis<<"4. Miasto:"<<pliku.miejsce<<endl;
    zapis<<"5. Kod pocztowy:"<<pliku.kod<<endl;
    return zapis;

}
