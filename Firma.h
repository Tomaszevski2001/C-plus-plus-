#include <string.h>
#include <vector>
#include <fstream>
#include "Pracownik.h"
/*
dzialanie wektora:
if (koniec miejsca w tablicy)
	tworzenie nowej tablicy
	przepisujemy do nowej tablicy starej tablicy
	usuwamy stara tablice
*/
using namespace std;
class Firma
{
    string Nazwa_Firmy = "Butelka";
    string Prezes_Firmy = "Wladyslaw Jagielo";
    int ilosc_pracownikow = 5;
    int ilosc_komputerow = 8;
    float przychody = 150000;
    int zalozenie = 2015;
    string miejsce = "Jaslo";
    string kod = "38-200";
    string ulica = "Franciszkanska";
    string budynek = "Budynek Zbudowany w Stylu Amerykanskim";
    vector<Pracownik> pracownicy;
public:
    Firma(const string & nazwa_firmy = "Butelka", int ilosc_pracownikow = 5, const string & prezes = " Wladyslaw Jagielo", int ilosc_komputerow = 8, float przychody = 150000);
    void dodaj_pracownika(const std::string & imie, const std::string & nazwisko, const std::string & stanowisko,
                          const std::string & plec, int lataPracy, float zarobki);
    void wypisz();
    void usun_pracownika(int indeks);
    void raport();
    void informacje();
    Pracownik & dajPracownika(int indeks) { return pracownicy[indeks]; }   //Funkcja pozwalajaca na wypisanie w glownym pliku finkcji pracuj oraz pij kawe
   friend std::ofstream & operator<<(ofstream & zapis ,Firma&pliku);   // void zapiszDoPliku(ofstream & plik);  // void zapiszDoPliku(ofstream & pliku);
};