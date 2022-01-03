#include <iostream>
  using namespace std;

#include <string.h>

  int long zahl;
  int zaehler;
  int maximum;


  string clnstr(string phrase)
{
	int laenge = strlen(phrase.c_str())-1;
	for (int i = 0; i <= laenge; ++i)
	{
		switch(phrase[i])
	{
		case 'ä' : phrase[i] = 0x84;
			break;
		case 'ö' : phrase[i] = 0x94;
			break;
		case 'ü' : phrase[i] = 0x81;
			break;
		case 'Ä' : phrase[i] = 0x8E;
			break;
		case 'Ö' : phrase[i] = 0x99;
			break;
		case 'Ü' : phrase[i] = 0x9A;
			break;
		case 'ß' : phrase[i] = 0xE1;
			break;
		default : break;
	}
	}
	return (phrase);
};

int main() {

cout << clnstr("Geben Sie eine ganze Zahl ein: ");
cin >> zahl;
cout << endl;

system("cls");

cout << "========================================" << endl;
cout << clnstr("Collatz-Zahlenfolge für die Zahl ") << zahl << endl;
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
    cout << clnstr("Es benötigte ") << zaehler << clnstr(" Durchläufe und das Maximum war ");
    cout << maximum << endl;


}



