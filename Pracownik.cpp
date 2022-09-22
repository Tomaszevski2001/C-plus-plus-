#include "Pracownik.h"

std::ostream & operator<<(std::ostream & out, const Pracownik & pracownik)
{
    out << pracownik.imie << " " << pracownik.nazwisko << "\n" << pracownik.stanowisko << ", " << pracownik.plec << " , lata pracy: "
        << pracownik.iloscLatPracy << ", zarobki: " << pracownik.zarobki << " zl";
    return out;
}

Pracownik::Pracownik() {}

Pracownik::Pracownik(const std::string  & imie_, const std::string & nazwisko_, const std::string & stanowisko_, const std::string  & plec_,
                     int lataPracy, float zarobki_)
{
    imie = imie_;
    nazwisko = nazwisko_;
    zarobki = zarobki_;
    stanowisko = stanowisko_;
    plec = plec_;
    iloscLatPracy = lataPracy;
}

void Pracownik::pracuj()
{
    std::cout << imie << " " << nazwisko << " pracuje\n";
}

void Pracownik::pracuj(const std::string & pomieszczenie)
{
  cout << imie << " " << nazwisko << " pracuje w pomieszczeniu: " << pomieszczenie << "\n";
}

void Pracownik::pijKawe()
{
    cout << imie << " " << nazwisko << " pije kawe\n";
}

void Pracownik::pijKawe(int ile)
{
    cout << imie << " " << nazwisko << " wypija " << ile << " kubkow kawy dziennie \n";
}

