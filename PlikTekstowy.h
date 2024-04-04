#ifndef PLIK_TEKSTOWY_H
#define PLIK_TEKSTOWY_H

#include <iostream>
#include <fstream>

using namespace std;

class PlikTekstowy {

    const string NAZWA_PLIKU;

public:
    string pobierzNazwePliku();
    PlikTekstowy(string nazwaPliku) : NAZWA_PLIKU(nazwaPliku) {
    }
    bool czyPlikJestPusty();
};

#endif // PLIK_TEKSTOWY_H
