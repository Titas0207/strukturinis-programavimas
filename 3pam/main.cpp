#include <iostream>
using namespace std;

//int main() {
    //double paz1, paz2, paz3, paz4, paz5;

    //cout << "Iveskite 5 pazymius: ";
    //cin >> paz1 >> paz2 >> paz3 >> paz4 >> paz5;

    //double vidurkis = (paz1 + paz2 + paz3 + paz4 + paz5) / 5;

    //cout << "Vidurkis: " << vidurkis << endl;

    //if (vidurkis >= 5) {
        //cout << "Vidurkis teigiamas" << endl;
    //} else {
        //cout << "Vidurkis yra neigiamas" << endl;
    //}

    //return 0;


//int main () {
    //int pazymys;

    //cout << "Iveskite egzamino pazymi: ";
    //cin >> pazymys;

    //if (pazymys == 10) {
        //cout << "Puiku" << endl;
    //} else if (pazymys >= 9) {
        //cout << "Labai gerai" << endl;
    //} else if (pazymys >= 7) {
        //cout << "Gerai" << endl;
    //} else if (pazymys >= 5) {
        //cout << "Patenkinamai" << endl;
    //} else {
        //cout << "Egzaminas neislaikytas" << endl;
    //}

    //return 0;
//}


//int main() {
    //int pazymys;

    //cout << "Iveskite egzamino pazymi: ";
    //cin >> pazymys;

    //switch (pazymys) {
        //case 10:
            //cout << "Puiku";
            //break;

        //case 9:
        //case 8:
            //cout << "Labai gerai";
            //break;

        //case 7:
        //case 6:
            //cout << "Gerai";
            //break;

        //case 5:
            //cout << "Patenkinamai";
            //break;

        //default:
            //cout << "Egzaminas neislaikytas";
            //break;
    //}

    //return 0;
//}

int main() {
    int suma = 0;

    for (int i = 1; i <= 20; i++) {
        if (i % 2 != 0) {
            suma += i;
        }
    }

    cout << "Nelyginiu skaiciu suma: " << suma << endl;

    return 0;
}