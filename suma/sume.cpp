#include <bits/stdc++.h>
using namespace std;
int main() {
    int R, N, C;
    double D, x1, x2; //declare variables double para resultados con puntos

    cin >> R >> N>> C;

    D = (N*N) - (4 * R * C);

    x1 = (-N+ sqrt(D)) / (2 * R); //puse la formula para calcular
    x2 = (-N- sqrt(D)) / (2 * R);

    cout << x1 << " " << x2 << endl; //imprimi x1 y x2
    cout<< "Kevin Gael lopez Moreno";

    return 0;
}
