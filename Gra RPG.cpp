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
    srand(time(0));
    int klasa;
    string nick;
    statystyki postaci[10];
    postaci[0].nazwa = "sokole oko";
    postaci[0].atak = 60;
    postaci[0].hp = 150;
    postaci[0].mana = 80;

    postaci[1].nazwa = "waleczny";
    postaci[1].atak = 60;
    postaci[1].hp = 200;
    postaci[1].mana = 50;

    postaci[2].nazwa = "aka: Gandalf";
    postaci[2].atak = 40;
    postaci[2].hp = 140;
    postaci[2].hp = 150;

    postaci[3].nazwa = "obrazenio przyjmiciel";
    postaci[3].atak = 40;
    postaci[3].hp = 240;
    postaci[3].mana = 50;

    postaci[4].nazwa = "poslaniec samego boga";
    postaci[4].atak = 60;
    postaci[4].hp = 170;
    postaci[4].mana = 80;

    postaci[5].nazwa = "Norbert Gierczak";
    postaci[5].atak = 70;
    postaci[5].hp = 200;
    postaci[5].mana = 50;

    postaci[6].nazwa = "najbardziej usseles klasa jaka tu zrobilem xD";
    postaci[6].atak = 20;
    postaci[6].hp = 150;
    postaci[6].mana = 150;

    postaci[7].nazwa = "inaczej: conan";
    postaci[7].atak = 90;
    postaci[7].hp = 160;
    postaci[7].mana = 80;

    postaci[8].nazwa = "z ciemnoscibojca";
    postaci[8].atak = 110;
    postaci[8].hp = 140;
    postaci[8].mana = 80;

    postaci[9].nazwa = "dziadek z lasu";
    postaci[9].atak = 40;
    postaci[9].hp = 160;
    postaci[9].mana = 100;

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

    przeciwnicy statystykiEnemy[10];

    while (postaci[klasa - 1].hp > 0) {
        enemy = (rand() % 10) + 1;
        atakEnemy = (rand() % 3) + 1;

        switch (enemy) {
        case 1:
            statystykiEnemy[0].nazwa = "Bazyliszek";
            statystykiEnemy[0].hp = 300;
            statystykiEnemy[0].atak = 30;
            break;
        case 2:
            statystykiEnemy[1].nazwa = "Wsciekla,malpa";
            statystykiEnemy[1].hp = 60;
            statystykiEnemy[1].atak = 100;
            break;
        case 3:
            statystykiEnemy[2].nazwa = "bardzo,zla,malpa";
            statystykiEnemy[2].hp = 100;
            statystykiEnemy[2].atak = 70;
            break;
        case 4:
            statystykiEnemy[3].nazwa = "WK,dzik";
            statystykiEnemy[3].hp = 250;
            statystykiEnemy[3].atak = 70;
            break;
        case 5:
            statystykiEnemy[4].nazwa = "Czarny,pajak";
            statystykiEnemy[4].hp = 100;
            statystykiEnemy[4].atak = 50;
            break;
        case 6:
            statystykiEnemy[5].nazwa = "Utopiec";
            statystykiEnemy[5].hp = 90;
            statystykiEnemy[5].atak = 60;
            break;
        case 7:
            statystykiEnemy[6].nazwa = "Tata,z,klapkiem";
            statystykiEnemy[6].hp = 200;
            statystykiEnemy[6].atak = 40;
            break;
        case 8:
            statystykiEnemy[7].nazwa = "Ksiadz";
            statystykiEnemy[7].hp = 150;
            statystykiEnemy[7].atak = 70;
            break;
        case 9:
            statystykiEnemy[8].nazwa = "Ocelot";
            statystykiEnemy[8].hp = 80;
            statystykiEnemy[8].atak = 60;
            break;
        case 10:
            statystykiEnemy[9].nazwa = "Pan Bilicki";
            statystykiEnemy[9].hp = 500;
            statystykiEnemy[9].atak = 60;
            break;
        default:
            zlakomenda();
            break;
        }
        cout << "Idac szlakiem bawari napotkales: " << statystykiEnemy[enemy - 1].nazwa << endl;
        cout << "hp przeciwnika: " << statystykiEnemy[enemy - 1].hp << endl;
        cout << "ad przeciwnika: " << statystykiEnemy[enemy - 1].atak << endl;
        while (postaci[klasa - 1].hp > 0 && statystykiEnemy[enemy - 1].hp > 0) {
            cout << postaci[klasa - 1].nazwa << endl;
            cout << "hp : " << postaci[klasa - 1].hp << endl;
            cout << "ad: " << postaci[klasa - 1].atak << endl;
            cout << statystykiEnemy[enemy - 1].nazwa << endl;
            cout << "hp: " << statystykiEnemy[enemy - 1].hp << endl;
            cout << "ad: " << statystykiEnemy[enemy - 1].atak << endl;
            cout << " " << endl;
            cout << "Twoja tura:" << endl;
            cout << "1. Zwykly atak" << endl;
            cout << "2. Silny atak" << endl;
            cout << "3. Ultimate" << endl;
            cout << "4. leczenie" << endl;
            cin >> atak;
            switch (atak) {
            case 1:
                cout << "Uzyles basic ataku: " << postaci[klasa - 1].atak << endl;
                statystykiEnemy[enemy - 1].hp = statystykiEnemy[enemy - 1].hp - postaci[klasa - 1].atak;
                break;
            case 2:
                cout << "Uzyles mocniejszego ataku: " << atakowanie(postaci[klasa - 1].atak) << endl;
                statystykiEnemy[enemy - 1].hp = statystykiEnemy[enemy - 1].hp - atakowanie(postaci[klasa - 1].atak);
                postaci[klasa - 1].mana = postaci[klasa - 1].mana - 10;
                break;
            case 3:
                cout << "Uzyles ulta: " << ultimate(postaci[klasa - 1].atak) << endl;
                statystykiEnemy[enemy - 1].hp = statystykiEnemy[enemy - 1].hp - ultimate(postaci[klasa - 1].atak);
                postaci[klasa - 1].mana = postaci[klasa - 1].mana - 30;
                break;
            case 4:
                cout << "Uzyles leczenia, odnowiles sobie HP marnujac runde" << endl;
                postaci[klasa - 1].hp = postaci[klasa - 1].hp + leczenie(postaci[klasa - 1].hp);
                break;
            default:
                zlakomenda();
                break;
            }
        
            cout << "Teraz " << statystykiEnemy[enemy - 1].nazwa << " wali ci hita ";
            switch (atakEnemy) {
            case 1:
                cout << " zwyklego ataku. Zadal ci: " << statystykiEnemy[enemy - 1].atak << endl;
                postaci[klasa - 1].hp = postaci[klasa - 1].hp - statystykiEnemy[enemy - 1].atak;
                break;
            case 2:
                cout << " mocnego ataku. Zadal ci: " << atakowanie(statystykiEnemy[enemy - 1].atak) << endl;
                postaci[klasa - 1].hp = postaci[klasa - 1].hp - atakowanie(statystykiEnemy[enemy - 1].atak);
                cout << "twoje HP: " + postaci[klasa - 1].hp << endl;
                break;
            case 3:
                cout << " super ataku. Zadal ci: " << ultimate(statystykiEnemy[enemy - 1].atak) << endl;
                postaci[klasa - 1].hp = postaci[klasa - 1].hp - ultimate(statystykiEnemy[enemy - 1].atak);
                cout << "twoje HP: " + postaci[klasa - 1].hp << endl;
                break;
            default:
                zlakomenda();
                break;
            }
        }
         if (postaci[klasa - 1].hp <= 0) {
            cout << "No to co, laduj sie do grobu" << endl;
            postaci[klasa - 1].hp = 0;
            return 0;
        }
        if (statystykiEnemy[enemy - 1].hp > 0) {
            cout << "UdaĹ‚o ci siÄ™ przeĹĽyÄ‡ odnawiasz sobie sporÄ… czÄ™Ĺ›Ä‡ hp" << endl;
            cout << " " << endl;
            postaci[klasa - 1].hp = postaci[klasa - 1].hp + 50;
            cout << "\n Odpoczywasz po wygranym pojedynku, twoja mana powoli sie odnawia." << endl;
            postaci[klasa - 1].mana = postaci[klasa - 1].mana + 0.6 * postaci[klasa - 1].mana;
        }
    }
    }
