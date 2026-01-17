#include <iostream>
#include <string>
using namespace std;


void ImprimirLista()
    {
        cout << "--- Estudiantes ---" << endl;
        nodo *temp = inicio;
        while (temp)
        {
            temp->est->imprimir();
            temp = temp->sig;
        }
    }

    float calcularPromedioRecursivo()
    {
        int total = 0;
        float suma = sumarNotas(inicio, total);
        return total ? suma / total : 0;
    }
};

int main()
{
    ListaEnlazada lista;

    lista.agregarEstudiante("Diana", 86.5f);
    lista.agregarEstudiante("Andres", 95.0f);
    lista.agregarEstudiante("Daniel", 68.5f);
    lista.agregarEstudiante("Samuel", 88.0f);

    lista.ImprimirLista();

    cout << "Promedio de todas las notas: " << lista.calcularPromedioRecursivo() << endl;

    return 0;
};

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

 
class ListaEnlazada
{
private:
    nodo *inicio;
    float sumarNotas(nodo *n, int &cant) // para la nota total 
    {
        if (n == nullptr)
            return 0;
        cant++;

        return n->est->nota() + sumarNotas(n->sig, cant);
    }

public:
    ListaEnlazada() : inicio(nullptr) {}

    void agregarEstudiante(string nombre, float nota)
    {
        nodo *nuevoEstudiante = new nodo(new Estudiantes(nombre, nota));

        if (!inicio)
        {
            inicio = nuevoEstudiante;
        }
        else
        {
            nodo *temp = inicio;
            while (temp->sig)
                temp = temp->sig;
            temp->sig = nuevoEstudiante;
        }
    }


