#include <iostream>
#include <ctime>

using namespace std;

struct statystyki
{
    string nazwa;
    int hp;
    int atak;
    int mana;
};

struct przeciwnicy
{
    string nazwa;
    int hp;
    int atak;
};

void zlakomenda() {
    cout << "Nie no prosze pana, teraz trzeba grac od nowa :(" << endl;
}

int atakowanie(int n) {
    int atk = 20;
    return 20 + n;
};
int ultimate(int n) {
    int atk = 100;
    int mana = 100;
    return ((100 + n) / 2);
};
int leczenie(int n) {
    int hp = 100;
    return (hp * 0.6 + n);
};

int main()
{
    int klasa;
    string nick;
    statystyki postaci[10];
    postaci[0].nazwa = "sokole oko";
    postaci[0].atak = 60;
    postaci[0].hp = 150;
    postaci[0].mana = 80;

    postaci[0].nazwa = "waleczny";
    postaci[0].atak = 60;
    postaci[0].hp = 200;
    postaci[0].mana = 50;

    postaci[0].nazwa = "aka: Gandalf";
    postaci[0].atak = 40;
    postaci[0].hp = 140;
    postaci[0].hp = 150;

    postaci[0].nazwa = "obrazenio przyjmiciel";
    postaci[0].atak = 40;
    postaci[0].hp = 240;
    postaci[0].mana = 50;

    postaci[0].nazwa = "poslaniec samego boga";
    postaci[0].atak = 60;
    postaci[0].hp = 170;
    postaci[0].mana = 80;

    postaci[0].nazwa = "Norbert Gierczak";
    postaci[0].atak = 70;
    postaci[0].hp = 200;
    postaci[0].mana = 50;

    postaci[0].nazwa = "najbardziej usseles klasa jaka tu zrobilem xD";
    postaci[0].atak = 20;
    postaci[0].hp = 150;
    postaci[0].mana = 150;

    postaci[0].nazwa = "inaczej: conan";
    postaci[0].atak = 90;
    postaci[0].hp = 160;
    postaci[0].mana = 80;

    postaci[0].nazwa = "z ciemnoscibojca";
    postaci[0].atak = 110;
    postaci[0].hp = 140;
    postaci[0].mana = 80;

    postaci[0].nazwa = "dziadek z lasu";
    postaci[0].atak = 40;
    postaci[0].hp = 160;
    postaci[0].mana = 100;

    cout << "Witam w tej bardzo dobrze zrobionej (:tf:) grze rpg xd" << endl;
    cout << "                " << endl;
    cout << "Powiedz mi jak masz na imie" << endl;
    cin >> nick;
    system("cls");
    cout << "                 Wybierz klase                     " << endl;
    cout << "1.Archer   2.Warrior   3.Magik   4.Tank" << endl;
    cout << "5.Palladyn   6.Ork   7.Healer   8.Barbarian" << endl;
    cout << "           9.Assasin   10.Druid        " << endl;
    cin >> klasa;
    if (klasa == 1)
    {
        system("cls");
        cout << "Od dzie nazywasz sie: " << nick << " sokole oko" << endl;
        cout << "Twoje statystyki to:" << endl;
        cout << "ad: " << postaci[0].atak << endl;
        cout << "hp: " << postaci[0].hp << endl;
        cout << "mana: " << postaci[0].mana << endl;
    }
    else if (klasa == 2)
    {
        system("cls");
        cout << "Od dzis nazywasz sie: " << nick << " waleczny" << endl;
        cout << "ad: " << postaci[1].atak << endl;
        cout << "hp: " << postaci[1].hp << endl;
        cout << "mana: " << postaci[1].mana << endl;
    }
    else if (klasa == 3)
    {
        system("cls");
        cout << "Od dzis nazywasz sie: " << nick << " aka: Gandalf" << endl;
        cout << "ad: " << postaci[2].atak << endl;
        cout << "hp: " << postaci[2].hp << endl;
        cout << "mana: " << postaci[2].mana << endl;
    }
    else if (klasa == 4)
    {
        system("cls");
        cout << "Od dzis nazywasz sie: " << nick << " obrazenio przyjmiciel" << endl;
        cout << "ad: " << postaci[3].atak << endl;
        cout << "hp: " << postaci[3].hp << endl;
        cout << "mana: " << postaci[3].mana << endl;
    }
    else if (klasa == 5)
    {
        system("cls");
        cout << "Od dzis nazywasz sie: " << nick << " poslaniec samego boga" << endl;
        cout << "ad: " << postaci[4].atak << endl;
        cout << "hp: " << postaci[4].hp << endl;
        cout << "mana: " << postaci[4].mana << endl;
    }
    else if (klasa == 6)
    {
        system("cls");
        cout << "Od dzis nazywasz sie: " << "Norbert " << nick << " Gierczak" << endl;
        cout << "ad: " << postaci[5].atak << endl;
        cout << "hp: " << postaci[5].hp << endl;
        cout << "mana: " << postaci[5].mana << endl;
    }
    else if (klasa == 7)
    {
        system("cls");
        cout << "Od dzis nazywasz sie: " << nick << " najbardziej usseles klasa jaka tu zrobilem xD" << endl;
        cout << "ad: " << postaci[6].atak << endl;
        cout << "hp: " << postaci[6].hp << endl;
        cout << "mana: " << postaci[6].mana << endl;
    }
    else if (klasa == 8)
    {
        system("cls");
        cout << "Od dzis nazywasz sie: " << nick << " inaczej: conan" << endl;
        cout << "ad: " << postaci[7].atak << endl;
        cout << "hp: " << postaci[7].hp << endl;
        cout << "mana: " << postaci[7].mana << endl;
    }
    else if (klasa == 9)
    {
        system("cls");
        cout << "Od dzis nazywasz sie: " << nick << " z ciemnoscibojca" << endl;
        cout << "ad: " << postaci[8].atak << endl;
        cout << "hp: " << postaci[8].hp << endl;
        cout << "mana: " << postaci[8].mana << endl;
    }
    else if (klasa == 10)
    {
        system("cls");
        cout << "Od dzis nazywasz sie: " << nick << " dziadek z lasu" << endl;
        cout << "ad: " << postaci[9].atak << endl;
        cout << "hp: " << postaci[9].hp << endl;
        cout << "mana: " << postaci[9].mana << endl;
    }
    else
    {
        zlakomenda();
    }

    int atak;
    int enemy;
    int atakEnemy;

    przeciwnicy statystykiEnemy[11];

    while (postaci[0].hp >= 0) {
        enemy = rand() % 10;
        atakEnemy = rand() % 3 + 1;

        switch (enemy) {
        case 1:
            statystykiEnemy[0].nazwa = "Bazyliszek";
            statystykiEnemy[0].hp = 300;
            statystykiEnemy[0].atak = 30;
            break;
        case 2:
            statystykiEnemy[0].nazwa = "Wsciekla,malpa";
            statystykiEnemy[0].hp = 60;
            statystykiEnemy[0].atak = 100;
            break;
        case 3:
            statystykiEnemy[0].nazwa = "bardzo,zla,malpa";
            statystykiEnemy[0].hp = 100;
            statystykiEnemy[0].atak = 70;
            break;
        case 4:
            statystykiEnemy[0].nazwa = "WK,dzik";
            statystykiEnemy[0].hp = 250;
            statystykiEnemy[0].atak = 70;
            break;
        case 5:
            statystykiEnemy[0].nazwa = "Czarny,pajak";
            statystykiEnemy[0].hp = 100;
            statystykiEnemy[0].atak = 50;
            break;
        case 6:
            statystykiEnemy[0].nazwa = "Utopiec";
            statystykiEnemy[0].hp = 90;
            statystykiEnemy[0].atak = 60;
            break;
        case 7:
            statystykiEnemy[0].nazwa = "Tata,z,klapkiem";
            statystykiEnemy[0].hp = 200;
            statystykiEnemy[0].atak = 40;
            break;
        case 8:
            statystykiEnemy[0].nazwa = "Ksiadz";
            statystykiEnemy[0].hp = 150;
            statystykiEnemy[0].atak = 70;
            break;
        case 9:
            statystykiEnemy[0].nazwa = "Ocelot";
            statystykiEnemy[0].hp = 80;
            statystykiEnemy[0].atak = 60;
            break;
        case 10:
            statystykiEnemy[0].nazwa = "Pan Bilicki";
            statystykiEnemy[0].hp = 500;
            statystykiEnemy[0].atak = 60;
            break;
        default:
            zlakomenda();
            break;
        }
        cout << "Idac szlakiem bawari napotkales: " << statystykiEnemy[0].nazwa << endl;
        cout << "hp przeciwnika: " << statystykiEnemy[0].hp << endl;
        cout << "ad przeciwnika: " << statystykiEnemy[0].atak << endl;
        while (postaci[0].hp = true && statystykiEnemy[0].hp == 0) {
            cout << postaci[0].nazwa << endl;
            cout << "hp : " << postaci[0].hp << endl;
            cout << "ad: " << postaci[0].atak << endl;
            cout << statystykiEnemy[0].nazwa << endl;
            cout << "hp: " << statystykiEnemy[0].hp << endl;
            cout << "ad: " << statystykiEnemy[0].atak << endl;
            cout << " " << endl;
            cout << "Twoja tura:" << endl;
            cout << "1. Zwykly atak" << endl;
            cout << "2. Silny atak" << endl;
            cout << "3. Ultimate" << endl;
            cout << "4. leczenie" << endl;
            cin >> atak;
            switch (atak) {
            case 1:
                cout << "Uzyles basic ataku" << postaci[0].atak;
                statystykiEnemy[0].hp = statystykiEnemy[0].hp - postaci[0].atak;
                break;
            case 2:
                cout << "Uzyles mocniejszego ataku" << atakowanie(postaci[0].atak);
                statystykiEnemy[0].hp = statystykiEnemy[0].hp - atakowanie(postaci[0].atak);
                postaci[0].mana = postaci[0].mana - 10;
                break;
            case 3:
                cout << "Uzyles ulta: " << ultimate(postaci[0].atak);
                statystykiEnemy[0].hp = statystykiEnemy[0].hp - ultimate(postaci[0].atak);
                postaci[0].mana = postaci[0].mana - 30;
                break;
            case 4:
                cout << "Uzyles leczenia, odnowiles sobie HP marnujac runde" << endl;
                statystykiEnemy[0].hp = statystykiEnemy[0].hp + leczenie(postaci[0].hp);
                break;
            default:
                zlakomenda();
                break;
            }
        }
            cout << "Teraz " << statystykiEnemy[0].nazwa << " wali ci hita ";
            switch (atakEnemy) {
            case 1:
                cout << " zwyklego ataku. Zadal ci: " << statystykiEnemy[0].atak << endl;
                postaci[0].hp = postaci[0].hp - statystykiEnemy[0].atak;
                break;
            case 2:
                cout << " mocnego ataku. Zadal ci: " << atakowanie(statystykiEnemy[0].atak) << endl;
                postaci[0].hp = postaci[0].hp - atakowanie(statystykiEnemy[0].atak);
                cout << "twoje HP: " + postaci[0].hp << endl;
                break;
            case 3:
                cout << " super ataku. Zadal ci: " << ultimate(statystykiEnemy[0].atak) << endl;
                postaci[0].hp = postaci[0].hp - ultimate(statystykiEnemy[0].atak);
                cout << "twoje HP: " + postaci[0].hp << endl;
                break;
            default:
                zlakomenda();
                break;
            }

        }
        if (statystykiEnemy[0].hp > 0) {
            cout << "Udało ci się przeżyć odnawiasz sobie sporą część hp" << endl;
            cout << " " << endl;
            postaci[0].hp = postaci[0].hp + 50;
            cout << "\n Odpoczywasz po wygranym pojedynku, twoja mana powoli sie odnawia." << endl;
            postaci[0].mana = postaci[0].mana + 0.6 * postaci[0].mana;
        }
        else if (postaci[0].hp <= 0) {
            cout << "No to co, laduj sie do grobu" << endl;
            postaci[0].hp = 0;
            return 0;
        }
    }
