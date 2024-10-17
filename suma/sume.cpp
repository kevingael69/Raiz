#include <bits/stdc++.h> //Primero abri codeblocks para crear el problema para despues declarar 3 variables para poder calcular las hice double para sacar resultados con punto decimal y despues lei las variables para pude usar el codigo y despues puse las formulas a calcular para despues poder imprimir x1 y x2
using namespace std;
int main() {
    int R, N, C;
    double D, x1, x2;

    cin >> R >> N>> C;

    D = (N*N) - (4 * R * C);

    x1 = (-N+ sqrt(D)) / (2 * R);
    x2 = (-N- sqrt(D)) / (2 * R);

    cout << x1 << " " << x2 << endl;
    cout<< "Kevin Gael lopez Moreno";

    return 0;
}
