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