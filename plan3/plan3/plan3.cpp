// plan3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include<tuple>
#include<utility>
#include<vector>
using std::cout;
//exercice4 

std::tuple<int, int> mini_maxi(const std::vector<int> t) {
    int max = t[0]; int min = t[0];
    for (int i(0); i < t.size(); i++) {
        if (t[i] > max) {
            max = t[i];
        }

        if (t[i] < min) {
            min = t[i];
        }
        return std::make_tuple(min, max);
    }


}
std::pair<int, int> minii_maxi(const std::vector<int>& t) {

    int max = t[0]; int min = t[0];
    for (int i(0); i < t.size(); i++) {
        if (t[i] > max)
            max = t[i];

        if (t[i] < min)
            min = t[i];

        return std::make_pair(min, max);
    }


}

int addition(int a, int b) {
    return a + b;
}
int main()
{
   /*//exercice5
    std::vector<int> A = { 12, 4, 56, 7, 89, 1, 45 }; // Exemple de tableau rempli

   
        std::pair<int, int> result = minii_maxi(A);
        std::cout << "Valeur minimale : " << result.first << std::endl;
        std::cout << "Valeur maximale : " << result.second << std::endl;
   
   */
    unsigned int age;
    std::cout << "entrer age\n";
    std::cin >> age;
    const int MAX_AGE = age;
    std::vector<int> v{};
     const int& res = addition(1, 2);//this one is correct but int& res = addition(1, 2) is false
    cout << res;
    int &&re= addition(1, 2);//true  Cette syntaxe utilise un rvalue reference (int&&). Une rvalue reference peut
                            //être utilisée pour lier une valeur temporaire (rvalue) comme le résultat de addition(1,2).








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
