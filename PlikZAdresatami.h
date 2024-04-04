#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>

#include "Uzytkownik.h"
#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"



class PlikZAdresatami : public PlikTekstowy
{
    const string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI = "tempAdresaci.txt";
    int idOstatniegoAdresata;
    int idUsuwanegoAdresata;
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneOstaniegoAdresataWPliku);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    int pobierzZPlikuIdOstatniegoAdresata();
    int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata);


public:
    PlikZAdresatami(string NAZWA_PLIKU_Z_ADRESATAMI) : PlikTekstowy(NAZWA_PLIKU_Z_ADRESATAMI)
    {
        idOstatniegoAdresata = 0;
    };
    bool dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int wczytajIdOstatniegoUzytkownikaZPliku(int idZalogowanegoUZytkownika);
    int pobierzIdOstatniegoAdresata();
    int usunWybranegoAdresataWPliku(int idUsuwanegoAdresata);
    void zaktualizujDaneWybranegoAdresataWPliku(Adresat adresat);


};


#endif
