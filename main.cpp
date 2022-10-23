#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;
int liczba;
int main() { cout <<"Losowanie nastąpi za 3 sekundy: ";
    sleep(3);
    cout << endl;
    srand(time(NULL));
    for(int i=0; i<6; i++){
        liczba=rand()%49+1;
                sleep(1);
                cout << liczba << "\a" << endl;
    }
return 0;
}




/*Pętle while,for,do while*/
/* Przykład 1 */
/* for (int i=15; i>=0; i--) {

       sleep(1);
       std::cout << i << std::endl;
       system("cls");
       }
        std::cout << "koniec odliczania" << std::endl;
       */


/* Przykład 2 */
/* string imie;
    int liczba;
    cout << "Podaj imie: " << endl;
    cin >> imie;
    cout << "Podaj liczbe dodatnia" << endl;
    cin >> liczba;
    for (int i=1; i<=liczba; i++){
        cout << i << ". " << imie << endl;

    }
    return 0; */
/* Przykład 3*/
/*int bakterie=1, godziny=0;
    do {

        cout << "Minelo godzin: " << godziny <<  endl;
        cout << "Liczba bakterii : " << bakterie << endl;
        godziny++;
        bakterie = bakterie * 2;

    }
    while (bakterie<=1000000000);*/
/*Przykład 4*/
/*while(bakterie<=1000000000){
       godziny++;
       bakterie=bakterie*2;
       cout << "Minęło godzin: "<< godziny << endl;
       cout << "Liczba bakterii: "<< bakterie << endl;*/








/*Liczby losowe*/
/* int liczba, odgadywanie;
    cout << "Losuje liczbe"<<endl;
    srand(time(NULL));
    liczba = rand()%100+1;
    int ile_prob;
    while (odgadywanie!=liczba) {
        ile_prob++;
        cout << "Zgadnij liczbę:" << endl;
        cout << "Próba " << ile_prob << " :" << endl;
        cin >> odgadywanie;
        if (odgadywanie == liczba) {
            cout << "Wygrałeś w " << ile_prob << " próbach!" << endl;
            return 0;
        }


    }
    system("pause");
return 0;*/
