#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include "UzytkownikMenedzer.h"
#include "MetodyPomocnicze.h"
#include "Adresat.h"
#include "PlikZAdresatami.h"

class AdresatMenedzer
{
    int idOstatniegoAdresata;
    vector <Adresat> adresaci;
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    void dopiszAdresataDoPliku(Adresat adresat);
    PlikZAdresatami plikZAdresatami;
    void wyswietlDaneAdresata(Adresat adresat);


public:

    int dodajAdresata(int idZalogowanegoUzytkownika);
    void wczytajAdresatowZalogowanegoUzytkownikaZpliku(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();

};
#endif
