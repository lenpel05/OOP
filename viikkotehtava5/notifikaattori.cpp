#include "notifikaattori.h"
#include <iostream>

using namespace std;

Notifikaattori::Notifikaattori()
{
    cout << "Notifikaattori luotu" << endl;
}

void Notifikaattori::lisaa(Seuraaja* uusi)
{
    if (!uusi) return;

    uusi->next = seuraajat;
    seuraajat = uusi;
}

void Notifikaattori::poista(Seuraaja* poistettava)
{
    if (!seuraajat || !poistettava) return;

    if (seuraajat == poistettava)
    {
        seuraajat = seuraajat->next;
        return;
    }

    Seuraaja* prev = seuraajat;
    Seuraaja* curr = seuraajat->next;

    while (curr)
    {
        if (curr == poistettava)
        {
            prev->next = curr->next;
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}

void Notifikaattori::tulosta()
{
    if (!seuraajat)
    {
        cout << "Ei seuraajia!" << endl;
        return;
    }

    Seuraaja* temp = seuraajat;
    while (temp)
    {
        cout << temp->getNimi() << endl;
        temp = temp->next;
    }
}

void Notifikaattori::postita(string viesti)
{
    if (!seuraajat)
    {
        cout << "Ei seuraajia!" << endl;
        return;
    }

    Seuraaja* temp = seuraajat;
    while (temp)
    {
        temp->paivitys(viesti);
        temp = temp->next;
    }
}
