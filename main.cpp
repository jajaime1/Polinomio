#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    string polinomio;
    double coef[10], n, discriminante, raiz_real1, raiz_real2, r_imaginaria1, r_imaginaria2;

    cout << "Ingrese el polinomio: ";
    getline(cin, polinomio);

    // saco los coeficientes

    string coeficiente_str;
    int j = 0;
    for (int i = 0; i < polinomio.length(); i++) {
        if (polinomio[i] == ' ') continue;
        if (polinomio[i] == '+' || polinomio[i] == '-') {
            coef[j] = stod(coeficiente_str);
            coeficiente_str = "";
            j++;
        }
        coeficiente_str += polinomio[i];
    }
    coef[j] = stod(coeficiente_str);

    //saco el grado del polinomio

    n = j;
    discriminante = coef[1]*coef[1] - 4*coef[0]*coef[2];

    if (discriminante > 0) {
        raiz_real1 = (-coef[1] + sqrt(discriminante)) / (2*coef[0]);
        raiz_real2 = (-coef[1] - sqrt(discriminante)) / (2*coef[0]);
        cout << "raiz real 1 = " << raiz_real1 << endl;
        cout << "raiz real 2 = " << raiz_real2 << endl;
    }

    else if (discriminante == 0) {
        raiz_real1 = (-coef[1] + sqrt(discriminante)) / (2*coef[0]);
        cout << "raiz real 1 = raiz real 2 = " << raiz_real1 << endl;
    }

    else {
        raiz_real1 = -coef[1]/(2*coef[0]);
        r_imaginaria1 = sqrt(-discriminante)/(2*coef[0]);
        raiz_real2 = -coef[1]/(2*coef[0]);
        r_imaginaria2 = -sqrt(-discriminante)/(2*coef[0]);
        cout << "raiz 1 = " << raiz_real1 << "+" << r_imaginaria1 << "i" << endl;
        cout << "raiz 2 = " << raiz_real2 << "-" << r_imaginaria2 << "i" << endl;
    }

    return 0;
}
