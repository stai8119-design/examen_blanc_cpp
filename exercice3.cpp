#include <iostream>
#include <string>

using namespace std;

class Vehicule {
protected:
    string immatriculation;
    string marque;
    double vitesseMax;

public:
    Vehicule(string immar, string marq, double vit) {
        immatriculation = immar;
        marque = marq;
        vitesseMax = vit;
    }

    void afficherDetails() {
        cout << "Immatriculation : " << immatriculation << endl;
        cout << "Marque : " << marque << endl;
        cout << "Vitesse Max : " << vitesseMax << endl;
    }
};

class Voiture : public Vehicule {
private:
    int nombrePortes;
    string typeCarburant;

public:
    Voiture(string immar, string marq, double vit, int portes, string carburant) 
        : Vehicule(immar, marq, vit) {
        nombrePortes = portes;
        typeCarburant = carburant;
    }

    void afficherDetails() {
        Vehicule::afficherDetails();
        cout << "Nombre de portes : " << nombrePortes << endl;
        cout << "Type de carburant : " << typeCarburant << endl;
    }
};

class Camion : public Vehicule {
private:
    double capaciteCharge;
    int nombreEssieux;

public:
    Camion(string immar, string marq, double vit, double charge, int essieux) 
        : Vehicule(immar, marq, vit) {
        capaciteCharge = charge;
        nombreEssieux = essieux;
    }

    void afficherDetails() {
        Vehicule::afficherDetails();
        cout << "Capacite de charge : " << capaciteCharge << endl;
        cout << "Nombre d'essieux : " << nombreEssieux << endl;
    }
};

int main() {
    Voiture v("A-123", "Dacia", 180, 4, "Essence");
    Camion c("B-456", "Volvo", 120, 15, 4);

    v.afficherDetails();
    c.afficherDetails();

    return 0;
}
