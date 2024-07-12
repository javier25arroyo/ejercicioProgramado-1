#pragma once

#ifndef __METODOS__
#define __METODOS__

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void burbuja(vector<int>& vec)
{
    int n = vec.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }
}

int main()
{
    vector<int> vec;
    string input;
    int num;
    cout << "Ingrese los numeros separados por un espacio: ";
    getline(cin, input); // Leer una línea completa de entrada

    istringstream iss(input); // Crear un flujo de entrada a partir de la línea leída

    while (iss >> num) // Intentar extraer un número del flujo de entrada
    {
        vec.push_back(num);
    }

    burbuja(vec);

    cout << "Numeros ordenados: ";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}

#endif // !__METODOS__