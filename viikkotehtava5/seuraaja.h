#ifndef SEURAAJA_H
#define SEURAAJA_H

#include <string>

class Seuraaja
{
public:
    Seuraaja* next = nullptr;

    Seuraaja();
    Seuraaja(std::string);

    std::string getNimi();
    void paivitys(std::string);

private:
    std::string nimi;
};

#endif
