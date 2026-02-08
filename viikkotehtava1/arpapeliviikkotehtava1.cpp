#include <iostream>

using namespace std;

int game(int maxnum);

int main()
{
    int arvaustenlukumaara = 0;
    int maxnum = 100; // käyteään maksimi lukuna 100
    arvaustenlukumaara = game(maxnum);
    cout << "Arvauksia: "
         << arvaustenlukumaara
         << endl;

    return 0;
}

int game(int maxnum) {

    int arvaustenlukumaara = 8;

    int arvaus = 0;


    // satunnaisluku = 17;
    srand(time(NULL));
    int satunnaisluku = rand() % maxnum;
    while (true) {

        cout << "Arvaa luku! " << endl;

        cin >> arvaus;
        arvaustenlukumaara++; // kasvatetaan muuttujaa yhdellä

        if (arvaus == satunnaisluku){
            cout << "Oikein!" << endl;
            break;

        }

        else if (arvaus < satunnaisluku){
            cout << "Luku on suurempi" << endl;
        }

        else if (arvaus > satunnaisluku){
            cout << "Arvaus on pienempi" << endl;
        }

    }

    return arvaustenlukumaara;

}
