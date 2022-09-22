#include <string>
#include <iostream>
using namespace std;
class Pracownik//tworzymy klase w postaci pracowanika
{
private:

    string  imie = "brak";//możemy to zapisać w konstruktorze domyślnym lub tutaj pracownik(......)
    string nazwisko = "brak";
    string stanowisko = "brak";
    string plec = "brak";
    int iloscLatPracy = -1;
    float zarobki = -1;
   // int * ptr = new int[10];

public:
    //Pracownik(){};

    // konstruktor domyslny, czyli zamiast tego możemy przypisać powyższe wartosci np.( "brak"
    //tworzenie konstruktora
    Pracownik();
    //Deklaracja konstruktora za pomocą referencji
    Pracownik(const string   & imie_, const std::string & nazwisko_, const std::string & stanowisko_, const std::string  & plec_,
              int lataPracy, float  zarobki);
    //funkcja zaprzyjażniona poniewaz jest private
    friend std::ostream & operator<<(std::ostream& out, const Pracownik & pracownik);
    //const std::string & getImie();
    //const std::string & getNazwisko();

    //stworzenie przeladowania funkcji 2 te same funkcje ale rozna ilosc elemrntow
    void pracuj();
    void pracuj(const std::string & pomieszczenie);
    void pijKawe();
    void pijKawe(int ileKawy);


    //~Pracownik() { delete[] ptr; }

};

std::ostream & operator<<(std::ostream & out, const Pracownik & pracownik);