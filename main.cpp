#include <iostream>
#include "menu.h"
using namespace std;

int main ()             
{
    int choix = 0;      

    while (choix !=3)
    {
        afficherMenu();

        cin >> choix;

        switch (choix)
        {
            case 1:
                cout << "Vous avez choisi : Afficher les logs sudo" << endl;
                break;

            case 2:
                cout << "Vous avez choisi :Afficher les logs SSH" << endl;
                break;

            case 3:
                cout << "Fermture du programme" <<endl;
                break;

            default:
                cout << "Choix invalide" <<endl;
                break;
        }
    }

    return 0;
}
