#include <iostream>
#include "Gra RPG.h"

using namespace std;



void zlakomenda() {
    cout << "Teraz se to przechodz od nowa :)" << endl;
}

void wyborklasy() {
    int klasa;
    cout << "Witam w tej bardzo dobrze zrobionej (:tf:) grze rpg xd" << endl;
    cout << "                 Wybierz klase                     " << endl;
    cout << "1.Archer   2.Warrior   3.Magik   4.Tank" << endl;
    cout << "5.Palladyn   6.Ork   7.Healer   8.Barbarian" << endl;
    cout << "           9.Assasin   10.Druid        " << endl;
    cin >> klasa;
    if (klasa == 1)
    {
        cout << "Wybrales lucznika" << endl;
    }
    else if(klasa == 2)
    {
        cout << "Wybrales Wojownika" << endl;
    }
    else if (klasa == 3)
    {
        cout << "Wybrales Magika" << endl;
    }
    else if (klasa == 4)
    {
        cout << "Wybrales Tanka" << endl;
    }
    else if (klasa == 5)
    {
        cout << "Wybrales Palladyna" << endl;
    }
    else if (klasa == 6)
    {
        cout << "Wybrales Orka" << endl;
    }
    else if (klasa == 7)
    {
        cout << "Wybrales Healer'a xdddd" << endl;
    }
    else if (klasa == 8)
    {
        cout << "Wybrales Barbarzynce" << endl;
    }
    else if (klasa == 9)
    {
        cout << "Wybrales Zabojce" << endl;
    }
    else if (klasa == 10)
    {
        cout << "Wybrales Druida" << endl;
    }
    else
    {
        zlakomenda();
    }
}

int main()
{
    wyborklasy();
}
