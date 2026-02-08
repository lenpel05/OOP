#include <iostream>
#include "notifikaattori.h"

using namespace std;

int main()
{
    Notifikaattori n;

    Seuraaja* s1 = new Seuraaja("Oskari");
    Seuraaja* s2 = new Seuraaja("Rauni");
    Seuraaja* s3 = new Seuraaja("Kalle");

    n.lisaa(s1);
    n.lisaa(s2);
    n.lisaa(s3);
    n.tulosta();

    cout << endl;
    n.postita("MOROO!");

    cout << endl;
    n.poista(s2);
    n.tulosta();

    return 0;
}
