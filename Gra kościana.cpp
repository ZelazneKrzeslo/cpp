#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int iloscgraczy, rzut, przyciskok, random, random2, random3, random4, random5, random6, random7, random8, wynik, wynikrundy3, wynikrundy4;
    int Koncowywynik1 = 0;
    int Koncowywynik2 = 0;
    int Koncowywynik3 = 0;
    int Koncowywynik4 = 0;
    string gracz1, gracz2, gracz3, gracz4;
    int wynikgracza1;
    int wynikgracza2;
    random = rand() % 6 + 1;
    random2 = rand() % 6 + 1;
    random3 = rand() % 6 + 1;
    random4 = rand() % 6 + 1;

    cout << "===============================================" << endl;
    cout << "||                                           ||" << endl;
    cout << "||             Witaj w grze w kosci          ||" << endl;
    cout << "|| Ilu graczy ma zamiar sprobowac szczescia? ||" << endl;
    cout << "||                                           ||" << endl;
    cout << "===============================================" << endl;
    cin >> iloscgraczy;

    if (iloscgraczy < 2)
    {
        cout << "===========================================" << endl;
        cout << "||                                       ||" << endl;
        cout << "||         Sam chcesz w to grac?         ||" << endl;
        cout << "||                                       ||" << endl;
        cout << "===========================================" << endl;
        return 0;
    }
    else if (iloscgraczy > 4)
    {
        cout << "===========================================" << endl;
        cout << "||                                       ||" << endl;
        cout << "||   Nie no az tyle kostek to nie mamy   ||" << endl;
        cout << "||                                       ||" << endl;
        cout << "===========================================" << endl;
        return 0;
    }

    cout << "===========================================" << endl;
    cout << "||                                       ||" << endl;
    cout << "||           Jak sie nazywacie?          ||" << endl;
    cout << "||                                       ||" << endl;
    cout << "===========================================" << endl;

    if (iloscgraczy == 2)
    {
        cin >> gracz1;
        cin >> gracz2;
    }
    else if (iloscgraczy == 3)
    {
        cin >> gracz1;
        cin >> gracz2;
        cin >> gracz3;
    }
    else if (iloscgraczy == 4)
    {
        cin >> gracz1;
        cin >> gracz2;
        cin >> gracz3;
        cin >> gracz4;
    }

    cout << "===========================================" << endl;
    cout << "||                                       ||" << endl;
    cout << "||   Skoro juz wiem jak sie nazywacie    ||" << endl;
    cout << "||            przejdźmy dalej            ||" << endl;
    cout << "||                                       ||" << endl;
    cout << "===========================================" << endl;
    cout << "                                           " << endl;
    cout << "                                           " << endl;
    cout << "                                           " << endl;
    cout << "                                           " << endl;
    cout << "=====================================================" << endl;
    cout << "||                                                 ||" << endl;
    cout << "||                Oto lista graczy:                ||" << endl;
    cout << "||                                                 ||" << endl;
    cout << "||                -" << gracz1 << "                            || " << endl;
    cout << "||                -" << gracz2 << "                            || " << endl;
    cout << "||                -" << gracz3 << "                            || " << endl;
    cout << "||                -" << gracz4 << "                            || " << endl;
    cout << "||                                                 ||" << endl;
    cout << "=====================================================" << endl;
    cout << "                                           " << endl;
    cout << "                                           " << endl;
    cout << "                                           " << endl;
    cout << "                                           " << endl;
    cout << "                                           " << endl;
    cout << "=====================================================" << endl;
    cout << "||                                                 ||" << endl;
    cout << "||    Zanim zaczniemy,trzeba przedstawic zasady:   ||" << endl;
    cout << "||                                                 ||" << endl;
    cout << "||   - Gracze rzucaja razem, po szesc razy         ||" << endl;
    cout << "||   - Suma obu ilosci oczek na obu kostkach,      ||" << endl;
    cout << "||   to punkty dodawane na konto gracza            ||" << endl;
    cout << "||   - Wygrywa gracz z najwieksza iloscia punktow  ||" << endl;
    cout << "||     po wszystkich szesciu rundach               ||" << endl;
    cout << "||                                                 ||" << endl;
    cout << "=====================================================" << endl;
    cout << "                                           " << endl;
    cout << "                                           " << endl;
    cout << "                                           " << endl;
    cout << "Aby przejsc dalej nacisnij 1" << endl;

    cin >> przyciskok;

    if (przyciskok == 1)
    {
        cout << "======================================" << endl;
        cout << "||                                  ||" << endl;
        cout << "||  Aby rzucic kostkami nacisnij 1  ||" << endl;
        cout << "||                                  ||" << endl;
        cout << "======================================" << endl;
    }

    cin >> rzut;

    srand(time(0));
    if (iloscgraczy == 2)
    {
        for (int i = 1; i < 7; i++)
        {
            cout << "=================" << endl;
            cout << "|| runda " << i << "||" << endl;
            cout << "=================" << endl;

            random = rand() % 6 + 1;
            random2 = rand() % 6 + 1;
            random3 = rand() % 6 + 1;
            random4 = rand() % 6 + 1;

            cout << "===========================" << endl;
            cout << "||     Wynik rundy " << i << ":    || " << endl;
            cout << "|| " << gracz1 << ":" << random + random2 << "||" << endl;
            cout << "|| " << gracz2 << ":" << random3 + random4 << "||" << endl;
            cout << "===========================" << endl;

            Koncowywynik1 += random + random2;
            Koncowywynik2 += random3 + random4;

        }
    }

    if (iloscgraczy == 3)
    {
        for (int i = 1; i < 7; i++)
        {
            cout << "=================" << endl;
            cout << "|| runda " << i << "||" << endl;
            cout << "=================" << endl;

            random = rand() % 6 + 1;
            random2 = rand() % 6 + 1;
            random3 = rand() % 6 + 1;
            random4 = rand() % 6 + 1;
            random5 = rand() % 6 + 1;
            random6 = rand() % 6 + 1;

            cout << "===========================" << endl;
            cout << "||     Wynik rundy " << i << ":    || " << endl;
            cout << "|| " << gracz1 << ":" << random + random2 << "||" << endl;
            cout << "|| " << gracz2 << ":" << random3 + random4 << "||" << endl;
            cout << "|| " << gracz3 << ":" << random5 + random6 << "||" << endl;
            cout << "===========================" << endl;

            Koncowywynik1 += random + random2;
            Koncowywynik2 += random3 + random4;
            Koncowywynik3 += random5 + random6;

        }
    }

    if (iloscgraczy == 4)
    {
        for (int i = 1; i < 7; i++)
        {
            cout << "=================" << endl;
            cout << "|| runda " << i << "||" << endl;
            cout << "=================" << endl;

            random = rand() % 6 + 1;
            random2 = rand() % 6 + 1;
            random3 = rand() % 6 + 1;
            random4 = rand() % 6 + 1;
            random5 = rand() % 6 + 1;
            random6 = rand() % 6 + 1;
            random7 = rand() % 6 + 1;
            random8 = rand() % 6 + 1;

            cout << "===========================" << endl;
            cout << "||     Wynik rundy " << i << ":    || " << endl;
            cout << "|| " << gracz1 << ":" << random + random2 << "||" << endl;
            cout << "|| " << gracz2 << ":" << random3 + random4 << "||" << endl;
            cout << "|| " << gracz3 << ":" << random5 + random6 << "||" << endl;
            cout << "|| " << gracz4 << ":" << random7 + random8 << "||" << endl;
            cout << "===========================" << endl;

            Koncowywynik1 += random + random2;
            Koncowywynik2 += random3 + random4;
            Koncowywynik3 += random5 + random6;
            Koncowywynik4 += random7 + random8;

        }
    }

    cout << "                                           " << endl;
    cout << "                                           " << endl;
    cout << "                                           " << endl;
    cout << "                                           " << endl;
    cout << "=======================" << endl;
    cout << "||  TABLICA WYNIKÓW: ||" << endl;
    cout << "=======================" << endl;
    cout << "                                           " << endl;
    cout << "                                           " << endl;
    cout << "===========================" << endl;
    cout << "|| Nazwa gracza || Wynik ||" << endl;
    cout << "===========================" << endl;
    cout << "||" << gracz1 << "||" << Koncowywynik1 << " || " << endl;
    cout << "||" << gracz2 << "||" << Koncowywynik2 << " || " << endl;
    cout << "||" << gracz3 << "||" << Koncowywynik3 << " || " << endl;
    cout << "||" << gracz4 << "||" << Koncowywynik4 << " || " << endl;
    cout << "===========================" << endl;




}