#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include "UzytkownikMenedzer.h"
#include "MetodyPomocnicze.h"
#include "Adresat.h"

class AdresatMenedzer
{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    vector <Adresat> adresaci;

public:
    int dodajAdresata(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
};
#endif
