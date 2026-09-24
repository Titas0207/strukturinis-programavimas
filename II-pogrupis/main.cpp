#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
        //1 pavyzdys. teogoa,p skaiciaus ivedimas.
        //int number;

        //cout <<"Iveskite teigiama skaiciu"<<endl;
        //cin >>number;

        //while(number<=0) {
        //    cout <<"Klaida. Skaicius yra netinkamas"<<endl;
        //    cout <<"Iveskite teigiama skaiciu"<<endl;
        //    cin >>number;
        //}

        //cout <<"Ivestas skaicius yra: "<<number<<endl;


    //2 pavyzdys. Taupymas iki pasirinkto tikslo

    //double savings = 100;
    //const double target = 500.0;
    //const double monthlyDeposit = 75.0;
    //int month = 0;

    //while (savings < target) {
        //month++;
        //savings += monthlyDeposit; //savings = savings = monthlyDeposit
        //cout << month << " menuo "
            //<<fixed << setprecision(2)
            //<< savings << "EUR"<< endl;
    //}

    //cout <<"Tikslas yra pasiektas per "<<month<<" menesius"<< endl;

    //3 pavyzdys. Slaptazodzio kurimas

    //string password;

    //do {
        //cout << "Iveskite bent 8 simboliu slaptazodi ";
        //cin >> password;

        //if (password.length() < 8) {
            //cout << "Slaptazodis turi buti maziausiai 8 simboliu"<<endl;
        //}
    //} while (password.length() < 8);

    //cout << "Slaptazodis priimtas"<<endl;


    //4 pavyzdys. Saskaitos valdymo meniu

    int balance = 100;
    int choice;

    do {
        cout << "\n--- SASKAITOS MENIU ---\n";
        cout << "1. Perziureti saskaitos likuti\n";
        cout << "2. Papildyti saskaita\n";
        cout << "3. Atlikti mokejima\n";
        cout << "0. Baigti programa\n";
        cout << "Pasirinkite funkcija\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Saskaitos likutis: " << balance << "Eur\n";
                break;
            case 2: {
                int amount;
                cout << "Papildymo suma: ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Saskaita yra papildyta. \n";
                } else {
                    cout << "Netinkama suma";
                }
                break;
            }
            case 3: {
                int amount;
                cout << "Mokejimo suma: ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Neteisinga suma\n";
                } else if (amount > balance) {
                    cout << "Nepakankamas likutis saskaitoje. \n";
                } else {
                    balance -= amount;
                    cout << "Mokejimas atliktas";
                }
                break;
            }
            case 0:
                cout << "Programa baige darba\n";
            default:
                cout << "Tokios operacijos nera\n";
        }
    } while (choice != 0);

        return 0;
    }