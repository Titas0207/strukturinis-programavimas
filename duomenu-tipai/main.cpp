#include <iostream>
#include <string>

using namespace std;

int main() {
    string vardas;
    string pavarde;
    int amzius;
    string grupe;
    int kursas;
    string studijuPrograma;

    cout << "Iveskite varda: ";
    cin >> vardas;

    cout << "Iveskite pavarde: ";
    cin >> pavarde;

    cout << "Iveskite amziu: ";
    cin >> amzius;

    cout << "Iveskite grupe: ";
    cin >> grupe;

    cout << "Iveskite kursa: ";
    cin >> kursas;

    cout << "Iveskite studiju programos pavadinima: ";
    cin >> studijuPrograma;

    cout << "Studento informacija:"<<endl;
    cout << "Vardas: "<<vardas<<endl;
    cout << "Pavarde: "<<pavarde<<endl;
    cout << "Amzius: "<<amzius<<endl;
    cout << "Grupe: "<<grupe<<endl;
    cout << "Kursas: "<<kursas<<endl;
    cout << "Studiju programa: "<<studijuPrograma<<endl;

    return 0;
}