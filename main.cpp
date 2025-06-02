#include <iostream>     //bibliotheque de vocab de codage additionelle
#include "menu.h"       //appel a program second (declutter de text)
#include "log.h"        //appel a program de recherche de log et de mot clef spe et de les reecrire
using namespace std;

int main ()             //creation de la fonction primaire du program
{
    int choix = 0;      //creation de variable appeler "choix"

    while (choix !=3)
    {
        afficherMenu();

        cin >> choix;

        switch (choix)
        {
            case 1:
                sudoLog();
                break;

            case 2:
                sshLog() ;
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

