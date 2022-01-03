#include <iostream>
  using namespace std;

  int long zahl;
  int zaehler;
  int maximum;


int main() {

cout << "Geben Sie eine ganze Zahl ein: ";
cin >> zahl;
cout << endl;

system("cls");

cout << "========================================" << endl;
cout << "Collatz-Zahlenfolge für die Zahl " << zahl << endl;
cout << "========================================" << endl;
cout << endl;

maximum = zahl;

while (zahl != 1) {
    zaehler++;
    if (zahl % 2 == 0) {
        zahl /= 2;
    }
    else
    {
        zahl = 3 * zahl +1;
    }

    if (zahl > maximum) {
        maximum = zahl;
    }
    cout << "Durchlauf Nr. " << zaehler << "  Ergebnis: " << zahl << endl;
                       }

    cout << endl;
    cout << "Es benötigte " << zaehler << " Durchläufe und das Maximum war ";
    cout << maximum << endl;
}
