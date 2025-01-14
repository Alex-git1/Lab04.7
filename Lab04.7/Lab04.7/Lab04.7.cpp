#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double xp, xk, x, dx, eps, a, R, S;
    int n;

    cout << "xp = "; cin >> xp;  
    cout << "xk = "; cin >> xk;  
    cout << "dx = "; cin >> dx;  
    cout << "eps = "; cin >> eps;  

    cout << fixed;
    cout << "-------------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(12) << "exp(-x^2)" << " |"
        << setw(10) << "S" << " |"
        << setw(5) << "n" << " |" << endl;
    cout << "-------------------------------------------" << endl;

    x = xp; 
    while (x <= xk) {
        n = 0;        
        a = 1;        
        S = a;        
        do {
            n++;
            R = (-1.0) * (x * x) / n;  
            a *= R;     
            S += a;     
        } while (abs(a) >= eps);  

       
        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(12) << setprecision(5) << exp(-x * x) << " |"
            << setw(10) << setprecision(5) << S << " |"
            << setw(5) << n << " |" << endl;

        x += dx;  
    }

    cout << "-------------------------------------------" << endl;
    return 0;
}