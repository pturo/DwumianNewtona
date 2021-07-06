#include <iostream>

using namespace std;

// funkcja obliczająca silnię potrzebna do obliczenia dwumianu Newtona.
// unsigned long long jest potrzebne do zwiększenia zakresu liczb całkowitych.
unsigned long long silnia(int n) {
    unsigned long long silnia = 1; // obliczanie silni zawsze zaczynamy od 1.
    if(n < 0)
        cout << "Nie można podać ujemnej liczby do obliczania silni!" << endl;
    else {
        for(int i = 1; i <= n; i++) {
            silnia *= i; // *= odpowiada silnia = silnia * i;
        }
        return silnia;
    }
    return 0;
}

unsigned long long dwumianNewtona(int n, int k) {
    // wzór na dwumian Newtona: ((n/k)) = (n!)/ (k!(n-k)!)
    // pamiętać należy, żeby k <= n i obie liczby dodatnie i nie większe niż 150.
    unsigned long long dwumianNewtona = 1;
    dwumianNewtona = (silnia(n)) / (silnia(k)*(silnia(n-k)));
    return dwumianNewtona;
}

int main() {
    int k, n;
    cout << "Program oblicza dwumian Newtona." << endl;
    cout << "Podaj n: ";
    cin >> n;
    cout << "Podaj k: ";
    cin >> k;

    cout << "Dwumian Newtona dla n = " << n << " i k = " << k << " wynosi: " << dwumianNewtona(n, k) << endl;

    // Można samemu sprawdzić czy dobrze liczy silnię.
    //cout << "DEBUG" << endl;
    //cout << silnia(15) << endl;

    return 0;
}