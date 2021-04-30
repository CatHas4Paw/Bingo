</*------------------------------------------------------------------------------
 *
 *  Copyright (C) 2018  by  CatHas4Paw
 *
 *  Date:               06.11.2018 13:41:11
 *  Version: 1.0        File(s): -->ConsoleApplicationWWS1.cpp
 *-----------------------------------------------------------------------------*/

#include "stdafx.h"
    using namespace std;

int _tmain(int argc, _TCHAR* argv[], _TCHAR** envp)
{setlocale(LC_CTYPE, "German");

int Karte1[5], Karte2[5], Karte3[5];

//Karte1
for (int i = 0; i < 5; i++)
{
    cout << "Karte 1 Zahl" << i + 1 << ": ";
    cin >> Karte1[i];
}
cout << endl;
//Karte2
for (int i = 0; i < 5; i++)
{
    cout << "Karte 2 Zahl" << i + 1 << ": ";
    cin >> Karte2[i];
}
cout << endl;
//Karte3
for (int i = 0; i < 5; i++)
{
    cout << "Karte 3 Zahl" << i + 1 << ": ";
    cin >> Karte3[i];
}
cout << endl;
cout << endl;


int Zahlen[5];

CKarte k1,k2,k3;
k1.setzeZahlen(Karte1);
k2.setzeZahlen(Karte2);
k3.setzeZahlen(Karte3);

CLostrommel c;

do
{
    int i = c.ziehe();

    cout << "Gezogene Zahl: " << i << endl;

    k1.streicheZahl(i);
    k2.streicheZahl(i);
    k3.streicheZahl(i);

} while (k1.istFertig() == false && k2.istFertig() == false && k3.istFertig() == false);

cout << endl;
cout << endl;
cout << "!!! BINGO !!! BINGO !!! BINGO !!!" << endl;
cout << endl;

if (k1.istFertig() == true)
{
    cout << "Karte 1 hat gewonnen" << endl;
}

if (k2.istFertig() == true)
{
    cout << "Karte 2 hat gewonnen" << endl;
}

if (k3.istFertig() == true)
{
    cout << "Karte 3 hat gewonnen" << endl;
}


cout << endl;
cout << endl;
    return 0;
}

