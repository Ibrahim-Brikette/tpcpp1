// plan2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
//exercice2
bool egalValeur(int a, int b) {
    return(a == b);
}
bool egalAdresse(int* a, int* b) {
    return(*a == *b);
}
bool egalReference(int& a, int& b) {
    return(a == b);
}
//exercice3
void permuter(int* a, int* b) {
    int p = *a;
    *a = *b;
    *b = p;



}
void permuter(int& a, int& b) {
    int p = a;
    a = b;
    b = p;
}
void incrementer(int* a) {
     a++;
}
void incrementer(int& a){
      a++;
}
//exercice 4
template <typename t>
void calculatrice(int operation, t a, t b, t& resultat) {
    switch (operation) {
    case 1:
        resultat = a + b;
        break;
    case 2:
        resultat = a * b;
        break;
    case 3:
        break;
        resultat = a - b;
        break;
    case 4:
        if (b == 0) {
            cout << "impossible " << endl;
        }
        else {
            resultat = a / b;
        }
        break;
    default:
        cout << "operation invalide" << endl;
        break;
    
        


    }
}
//exercice 6
void sapin(int n,int hauteur_tronc,int largeur_tronc) {
    for (int i(0); i < n; i++) {
        cout << std::string(n - i - 1, ' ');//faites attention'' pour un seule char non ""
        cout << std::string(2 * i + 1, '*');
        cout << endl;

    }
    int largeBase = 2 * n - 1;
    int bTronc = (largeBase - largeur_tronc) / 2;
    for (int i(0); i < hauteur_tronc; i++) {
        cout << std::string(bTronc, ' ');
        cout << std::string(largeur_tronc, '|')<<endl;
    }
}
int main()
{
    
   /*
   * //exercice1
    int* p_entier;
     int entier = 42;
     p_entier = &entier;
     cout << p_entier <<endl;
     cout << *p_entier;
   */
    /*
    //exercice2
    int b = 5; int c = 8; int z = 5;
    cout<<(egalValeur(10,10));
    cout << endl;
    cout<<(egalReference(b,z));
    cout << endl;
    cout<<(egalAdresse(&b, &c)); cout << endl;

    */





   /*//exercice3
    int b = 5; int c = 8;
    cout << "passage par adresse" << endl;
    cout << "b= "; cout << b; cout << " c= "; cout << c << endl;
    permuter(&b, &c);
    cout << "b= "; cout << b; cout << " c= "; cout << c << endl;
    cout << "passage par reference" << endl;
    cout << "b= "; cout << b; cout << " c= "; cout << c << endl;
    permuter(b, c);
    cout << "b= "; cout << b; cout << " c= "; cout << c << endl;
    cout << "voici les snouveaux valeurs de b et c apres in crementation" << endl;
    incrementer(&b);
    cout << "b= ";cout<<b<< endl;
    incrementer(c);
    cout << "c= ";cout<<c << endl;
   
   */


    /*
    //exercice4
     int choix;
    double a, b;
    double resultat;
    do {
         cout << "Calculatrice:\n";
         cout << "1. Addition\n";
         cout << "2. Soustraction\n";
         cout << "3. Multiplication\n";
         cout << "4. Division\n";
         cout << "5. Quitter\n";
         cout << "Choisissez une opération: ";
         cin >> choix;
        if (choix == 5) {
            break;

        }
        cout << "Entrez le premier nombre: ";
        cin >> a;
        cout << "Entrez le deuxième nombre: ";
        cin >> b;
        calculatrice(choix, a, b, resultat);
        cout << "Le résultat est: " << resultat << std::endl;
        cout << "Appuyez sur Entrée pour continuer...\n";
        cin.ignore(); // Pour consommer le caractère de nouvelle ligne
        cin.get(); // Attendre que l'utilisateur appuie sur Entrée


    } while (true);
    */
/*
ecercice6 
    sapin(6,2,3);

*/

}


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
