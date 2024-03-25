#include "AdresatMenedzer.h"

int AdresatMenedzer::dodajAdresata(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika, int idOstatniegoAdresata)
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika, idOstatniegoAdresata);

    adresaci.push_back(adresat);
    dopiszAdresataDoPliku(adresat);

    return ++idOstatniegoAdresata;
}

void AdresatMenedzer::dopiszAdresataDoPliku(Adresat adresat)
{
    adresat = plikZUzytkownikami.wczytajUzytkownikowZPliku();
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata)
{
    Adresat adresat;

    adresat.id = ++idOstatniegoAdresata;
    adresat.idUzytkownika = idZalogowanegoUzytkownika;

    cout << "Podaj imie: ";
    adresat.imie = wczytajLinie();
    adresat.imie = zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.imie);

    cout << "Podaj nazwisko: ";
    adresat.nazwisko = wczytajLinie();
    adresat.nazwisko = zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.nazwisko);

    cout << "Podaj numer telefonu: ";
    adresat.numerTelefonu = wczytajLinie();

    cout << "Podaj email: ";
    adresat.email = wczytajLinie();

    cout << "Podaj adres: ";
    adresat.adres = wczytajLinie();

    return adresat;
}
