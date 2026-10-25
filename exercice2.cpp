#include <iostream>
#include <string>

using namespace std;

class CompteBancaire {
private:
    int numero;
    string titulaire;
    double solde;

public:
    CompteBancaire(int num, string nom, double soldeInitial) {
        numero = num;
        titulaire = nom;
        solde = soldeInitial;
    }
    
    void deposer(double montant) {
        if (montant > 0) {
            solde += montant;
        }
    }
    void retirer(double montant) {
        if (montant > 0 && montant <= solde) {
            solde -= montant;
        }
    }
    void afficher() {
        cout << "Numero : " << numero << endl;
        cout << "Titulaire : " << titulaire << endl;
        cout << "Solde : " << solde << " DH" << endl;
    }
};

int main() {
    CompteBancaire c1(101, "Sara", 5000.0);
    CompteBancaire c2(102, "Salma", 3000.0);
    c1.deposer(1000.0);
    c2.retirer(500.0);
    c1.afficher();
    c2.afficher();

    return 0;
}