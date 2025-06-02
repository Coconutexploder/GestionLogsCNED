#include <iostream>

int main ()
{
  int choix;
  
  cout <<"Bienvenu dans GestionLog"<<endl;
  cout <<"1. Afficher les logs sudo"<<endl;
  cout <<"2. Afficher les logs SSH"<<endl;
  cout <<"3. Quitter"<<endl;
  cout <<"Votre choix"<<endl;

  if (choix == 1)
  {
    cout << "Vous avez choisi : Afficher les logs sudo" << endl;
  }
  
  else if (choix == 2)
  {
    cout << "Vous avez choisi : Afficher les logs SSH" << endl;
  }

  else if (choix == 3)
  {
    cout << "Fermeture du programme" << endl;
  }

  else (choix == 1)
  {
    cout << "Choix invalide" << endl;
  }

  return 0;
}
