#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int M{}, m{}, v{}, c{}, x{}, x2{};
    char f[100];
    char vocal[5] = { 'a','e','i','o','u' };

    cout << "Introduce una frase (maximo 100 caracteres): ";
    cin.getline(f, 100);
    while (f[x] != 0) {
        if (f[x] == ' ') {
            if (f[x] == 'a' || f[x] == 'b' || f[x] == 'c' || f[x] == 'd' || f[x] == 'e' || f[x] == 'f' || f[x] == 'g' || f[x] == 'h' || f[x] == 'i' || f[x] == 'j' || f[x] == 'k' || f[x] == 'l' || f[x] == 'm' || f[x] == 'n' || f[x] == char(164) || f[x] == 'o' || f[x] == 'p' || f[x] == 'q' || f[x] == 'r' || f[x] == 's' || f[x] == 't' || f[x] == 'v' || f[x] == 'w' || f[x] == 'x' || f[x] == 'y' || f[x] == 'z') {
                m++;
                x++;
            }
            else {
                M++;
                x++;
                M = M - 1;
            }
            if (f[x2] == 'a' || f[x2] == 'e' || f[x2] == 'i' || f[x2] == 'o' || f[x2] == 'u' || f[x2] == 'A' || f[x2] == 'E' || f[x2] == 'I' || f[x2] == 'O' || f[x2] == 'U') {
                v++;
                x2++;
            }
            else {
                c++;
                x2++;
                c = c - 1;
            }
        }
        else {
            if (f[x] == 'a' || f[x] == 'b' || f[x] == 'c' || f[x] == 'd' || f[x] == 'e' || f[x] == 'f' || f[x] == 'g' || f[x] == 'h' || f[x] == 'i' || f[x] == 'j' || f[x] == 'k' || f[x] == 'l' || f[x] == 'm' || f[x] == 'n' || f[x] == char(164) || f[x] == 'o' || f[x] == 'p' || f[x] == 'q' || f[x] == 'r' || f[x] == 's' || f[x] == 't' || f[x] == 'v' || f[x] == 'w' || f[x] == 'x' || f[x] == 'y' || f[x] == 'z') {
                m++;
                x++;
            }
            else {
                M++;
                x++;
            }
            if (f[x2] == 'a' || f[x2] == 'e' || f[x2] == 'i' || f[x2] == 'o' || f[x2] == 'u' || f[x2] == 'A' || f[x2] == 'E' || f[x2] == 'I' || f[x2] == 'O' || f[x2] == 'U') {
                v++;
                x2++;
            }
            else {
                c++;
                x2++;
            }
        }
    }
    cout << "Mayusculas: " << M << "\n";
    cout << "Minusculas: " << m << "\n";
    cout << "Vocales: " << v << "\n";
    cout << "Consonantes: " << c << "\n";
}