#include <iostream>
#include <fstream>          //permet de chercher l'historique d'action fais sur ordi et de les archive
#include <string>           //reconnaissance, recherche, lecture et stockage de serie de caractere

using namespace std;        //evite la repetition de fonction (ex="std::")

void sudoLog()              //prog cherchant l'historique de "sudo" de l'ordi, archive dans un dossier l'info
{
    ifstream fichier ("/var/log/auth.log");
    string ligne;
    ofstream sortie ("sudo_logs.txt");

    if  (!fichier)          //si erreur ou innaccibilite aux info
    {
        cout << "Impossible d'ouvrir le fichier de log" <<endl;
        return;
    }

    if (!sortie)
    {
        cout << "Impossible de creer le fichier de sortie"<<endl;
        return;
    }

    while (getline(fichier,ligne))
    {
        if (ligne.find("sudo") !=string::npos)
        {
            sortie << ligne << endl;
        }
    }
    cout << "les lignes contenant 'sudo' ont ete enregistrees avec succes" << endl;
    fichier.close();
}

void sshLog()               //meme chose que sudoLog mais avec la contraite de trouver une co sshd ACCEPTE
{
    ifstream fichier ("/var/log/auth.log");
    ofstream sortie ("ssh_connexion.txt");
    string ligne;

    if (!fichier)
    {
        cout << "Impossible d'ouvrir /var/log/auth.log" << endl;
        return;
    }

    if (!sortie)            //incapaciter de cree le fichier d'archive
    {
        cout << "Impossible de creer ssh_connexion.txt" << endl;
        return;
    }
    while (getline(fichier, ligne))         //lit une ligne d'un fichier et la stock
    {
        if (ligne.find("sshd") != string :: npos && ligne.find("Accepted") != string::npos)         //cherche mot dans ligne si positif, condition vrai
            {
                sortie << ligne << endl;
            }
    }

    cout <<"Lignes SSH enregistrees dans ssh_connexion.txt" <<endl;
    fichier.close();
}
