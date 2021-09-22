// Kalender.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;



void berechnung() {

}

int w = 0;
int main()
{
   
    do{
        system("cls");
        w = 0;
        int jahr = 0;
        
        cout << "Geben sid die Jahreszahl ein: \n" << endl;
        cin >> jahr;




        if ((jahr % 4 == 0) && (jahr % 100 != 0) || (jahr % 400 == 0)) {
            cout << "Schaltjahr!" << endl;
        }
        else {
            cout << "Kein Schaltjahr!" << endl;
        }

        cout << "Moechten Sie weiter machen(1/2) ?" << endl;
        cin >> w;
    }while (w == 1);


    return 0;
}
 




  

