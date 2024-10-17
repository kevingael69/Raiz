#include <bits/stdc++.h>
using namespace std;
int main() {
    int R, N, C;
    double D, x1, x2;


    cin >> R >> N>> C;

    D = (N*N) - (4 * R * C);

    x1 = (-N+ sqrt(D)) / (2 * R);
    x2 = (-N- sqrt(D)) / (2 * R);

    cout << x1 << " " << x2 << endl;

    return 0;
}
