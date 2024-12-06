// plan4.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
using std::cout;
using std::cin; using std::endl;
void echanger(int& a, int& b) {
    int p = a;
    a = b;
    b = p;
}
template <typename T>
void triSelection(std::vector<T> &Tab) {
    int i(1);
   
    for (i=0; i < Tab.size() - 1; i++) {
        int min=i;
        for (int j=i; j < Tab.size(); j++) {
            if (Tab[j] < Tab[min]) {
                min=j;
            }
        }
        if (min != i) {
            echanger(Tab[min], Tab[i]);
        }
    }
        
}
void displayM(const std::string& message) {
    cout << message << endl;
}





//exercice2
template<typename T>
void afficheP(std::vector<T> tab) {
    for (const auto& el : tab) {
        if (el >= 0) {
            cout << el << endl;
        }
    }
}
template<typename T>
void afficheN(std::vector<T> tab) {
    for (const auto& el : tab) {
        if (el < 0) {
            cout << el << endl;
        }
    }
}
template<typename T>
void afficheSupSeui(std::vector<T> tab, T seuil) {
    for (const auto& el : tab) {
        if (el > seuil) {
            cout << el << endl;
        }
    }
}
template <typename T>
void appliqueFiltre(std::vector<int> tab, void(*ptr)) {


}
template<typename T>
T somme(T  a, T  b) {
    return a + b;
}
template<typename T>
T soustraction(T  a, T  b) {
    return a - b;
}
template<typename T>
T mul(T  a, T  b) {
    return a * b;
}
template<typename T>
void calculatrice(T(*operation)(T ,T ),T a,T b) {
    T result = operation(a, b);
    cout << result;
}
struct Produit{
    std::string type;
    double prix;
    bool solde;

};
double calculerPrix(const Produit &p, double taxe  = 0.19,double Solde=0.20) {
    if (p.type == "luxe") {
        taxe = 0.25;
    }

    

    switch (p.solde) 
    {
    case true:
        return p.prix* (1+taxe) * (1 - Solde);
    

    default:
        return p.prix * (1 + taxe);


    }
   

   


    

}



//fuction avec lambda
void disVec(std::vector<int>& vec, void(*func)(int)) {
    for(int i=0;i<vec.size();i++){
        func(vec.at(i));
    }
}

//******************
//*****************
//****************
//****************
/************************
************************
************************
***************************
****************************
***************************/

int main()
{
    std::cout << "Hello World!\n";
    std::vector<int> t;
    /*
    //exercice1
    t = { 10,2,10,45,6 };
    triSelection(t);
    for (const auto& el : t) {
        cout << el<<endl;
    }
    */

    //pointeur sue fonction
    void(*dis)(const std::string & message);
    dis = displayM;
    dis("barhoumm");

    //exercice2
  /* //pointeur sur fonction
    std::vector<int> tab;
    tab = { -1,4,9,-6,10 };
    void(*affP)(std::vector<int> tab);
    affP = afficheP;

    affP(tab);
    void(*affN)(std::vector<int> tab);
    affN = afficheN;
    affN(tab);
    void(*affSeuil)(std::vector<int> tab,int seuil);
    affSeuil = afficheSupSeui;
    affSeuil(tab, -6);

    int (*userFunction )(int a, int b)=nullptr;
    int choice;
    cout <<"  donner votre choix";
    cin >> choice;
    switch (choice) {
    case 1:
        userFunction = somme;
        break;
    case 2:
        userFunction = soustraction;
        break;
    case 3:
        userFunction = mul;
        break;

    default:
        cout << "mauvaise input";





    }
    calculatrice(userFunction, 5, 8);
  */
   /*
    //exercice 4
    Produit p1 = { "luxe",6500.5,true };
    Produit p2 = { "non luxe",500,false };
    cout << calculerPrix(p1)<<endl;
    cout << calculerPrix(p2) << endl;

   */
//function lambda
    auto lambda = [](int a) {cout << "la valeur: " << a << endl; };//attention pas d'oublir le ;
    std::vector<int> vec = { 1,2,3,4,5,6 };
    disVec(vec, lambda);
    int a = 1;
    const  int K{ (a > 0) ? 1 : -1 };//C++ l'expression doit avoir une valeur de constanteimpossible d'utiliser la valeur de variable 
                                        //(déclaré à la ligne 208) comme constante
    float f = 4;
    cout << f;
   

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
