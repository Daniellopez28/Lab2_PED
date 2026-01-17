#include <iostream>
#include <string>
using namespace std;

class Estudiantes
{
private:
    string nombre;
    float Notafinal;

public:
    Estudiantes(string n, float notaf) : nombre(n), Notafinal(notaf) {}
    float nota()
    {
        return Notafinal;
    }
    void imprimir()
    {
        cout << nombre << " su nota es: " << Notafinal << endl;
    }
};

struct nodo
{
    Estudiantes *est;
    nodo *sig;

    nodo(Estudiantes *e) : est(e), sig(nullptr) {}
};
