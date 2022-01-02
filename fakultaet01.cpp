// Vergleich der Laufzeiten zur Berechnung der Fakult�t

#include <iostream>
 using namespace std;
#include <chrono>


 // Funktionen m�ssen vorher schon deklariert werden
 double fakultaet_rek(int a);
 double fakultaet_for(int a);

 int main()  {

 int zahl;
 double ergebnis1;
 double ergebnis2;
 //double time1=0.0, time2=0.0, tstart1, tstart2, tend1, tend2;

 cout << "Bitte geben Sie eine ganze Zahl ein!  ";
 cin >> zahl;
 cout << "Das Ergebnis lautet: ";
 cout << fakultaet_rek(zahl) << "\n";

 // Ermitteln mit For-Schleife
 auto tstart1 = std::chrono::high_resolution_clock::now();
 ergebnis1 = fakultaet_for(zahl);

 auto tend1 = std::chrono::high_resolution_clock::now();
 auto time1 = std::chrono::duration_cast<std::chrono::nanoseconds>(tend1 - tstart1);


 // Ermitteln mittels rekursiver Aufruf
 auto tstart2 = std::chrono::high_resolution_clock::now();
 ergebnis2 = fakultaet_rek(zahl);
 auto tend2 = std::chrono::high_resolution_clock::now();
 auto time2 = std::chrono::duration_cast<std::chrono::nanoseconds>(tend2 - tstart2);


 cout << "=============================================\n";
 cout << "Vergleich der Laufzeiten:\n";
 cout << "For-Schleife: " << ergebnis1 << "  Laufzeit: " << time1.count() << "\n";
 cout << "Rekursiv:     " << ergebnis2 << "  Laufzeit: " << time2.count() << "\n";
 cout << "=============================================\n";

 return 0;

 }

 // Die Definition einer Funktion kann sp�ter erfolgen
 // - nach dem Hauptprogramm
double fakultaet_rek(int a) {

   if (a == 1)
     return 1;
    else return a*fakultaet_rek(a-1);

 }

double fakultaet_for(int a) {

double ergebnis = 1;
for(int i=1; i<= a;i++)
	{
		ergebnis *= i;
	}
return ergebnis;

}
