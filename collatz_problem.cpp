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
		case '�' : phrase[i] = 0x84;
			break;
		case '�' : phrase[i] = 0x94;
			break;
		case '�' : phrase[i] = 0x81;
			break;
		case '�' : phrase[i] = 0x8E;
			break;
		case '�' : phrase[i] = 0x99;
			break;
		case '�' : phrase[i] = 0x9A;
			break;
		case '�' : phrase[i] = 0xE1;
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
cout << clnstr("Collatz-Zahlenfolge f�r die Zahl ") << zahl << endl;
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
    cout << clnstr("Es ben�tigte ") << zaehler << clnstr(" Durchl�ufe und das Maximum war ");
    cout << maximum << endl;


}



