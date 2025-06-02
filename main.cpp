#include <iostream>
using namespace std;

int main ()
{
  int choix;

  while (choix !=3)
  {
    cout <<"Bienvenu dans GestionLog"<<endl;
    cout <<"1. Afficher les logs sudo"<<endl;
    cout <<"2. Afficher les logs SSH"<<endl;
    cout <<"3. Quitter"<<endl;
    cout <<"Votre choix"<<endl;
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
