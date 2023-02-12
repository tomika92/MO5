#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Euler(const int N, double a)
{
    double* y;
    y = new double[N + 1];
    double deltat = 2. / N;
    cout << setprecision(7) << fixed;
    y[0] = 0;
    cout << "Krok 0 y = " << y[0] << endl;
    for (int i = 1; i <= N; i++)
    {
        y[i] = (y[i - 1] + deltat * sin(M_PI * deltat * i)) / (1 + a * deltat);
        cout << "Krok " << i << " y = " << y[i] << endl;
    }
    delete[] y;
}

int main()
{
    const int N = 19;
    double a = 2.42;

    cout << "Rozwiazanie dla siatki z N odcinkow" << endl;
    Euler(N, a);
    cout << "\n\nRozwiazanie dla siatki z 2N odcinkow" << endl;
    Euler(2 * N, a);
    cout << "\n\nRozwiazanie dla siatki z 4N odcinkow" << endl;
    Euler(4 * N, a);
}