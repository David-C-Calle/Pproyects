/*
    Ciclos de C++
*/
#include<iostream>
using namespace std;
int Nnotas;
float suma_notas = 0.0;

int main()
{
    cout <<"Bienbenido"<<endl;
    cout <<"Digite la cantidad de notas que desea digitar"<<endl;
    cout <<"Valores entre 0.0 y 5,0 "<<endl;
    cin >> Nnotas;
    cout<<"ingrese las notas"<<endl;
    for (int i = 0; i < Nnotas; ++i)
    {
        float nota;
        cin >> nota;
        suma_notas += nota;
    }
    
    float promedio = suma_notas/Nnotas;
    cout <<"Su promedio es de:"<<promedio<<endl;
   
   
    

    
    
    
    
    
    
    system("pause");
    return EXIT_SUCCESS;
}
