    /*
        IF-ELSE
    */
#include<iostream>
using namespace std;

float nota1,nota2,nota3,nota4,promedio;

int main()
{
    cout<<"APP para calcular promedio"<<endl;
    cout<<"Ingrese su primera nota"<<endl;
    cin>> nota1;
    cout<<"Ingrese su segunda nota"<<endl;
    cin>> nota2;
    cout<<"Ingrese su tercera nota"<<endl;
    cin>> nota3;
    cout<<"Ingrese su cuarta nota"<<endl;
    cin>> nota4;
    cout<<"Su promedio es: "<<(nota1+nota2+nota3+nota4)/4<<endl;
    cout<<"ingrese su promedio"<<endl;
    cin>> promedio;
    cout<<"Su promedio es: "<<promedio<<endl;
    
    if (promedio>=3.5 and promedio<=5.0)
    {
        cout<<"Usted aprobo tecnologia"<<endl;
    }
    else if (promedio>=0.0 and promedio<=2.9)
    {
        cout<<"Usted reprovo tecnologia"<<endl;
    }
    else if (promedio>=3.0 and promedio<=3.4)
    {
       cout<<"En este momento no a aprovado tecnologia pero tiene opcion de recuperar"<<endl;
        
    }
    cout <<"¿Desea continuar ingresando notas?"<<endl;
    cout<<"para continuar digite 1"<<endl;
    cout<<"para dinalizar digite 0"<<endl;
    int PoN; // p= positivo  N= negativo
    cin >> PoN;
    float suma_notas=0.0;
    if (PoN == 1)
    {
        cout <<"¿A cauntos estudiantes les desea inresar la nota?"<<endl;
        int Nestudiantes;
        cin >> Nestudiantes;
        cout <<"ingrese las notas"<<endl;
       for (int i = 0; i < 4; ++i)
       {
        float notota;
        cin >> notota;
        suma_notas+=notota;
       }
       
        float promedio2 =suma_notas/4;
        cout<<"Su promedio es de: "<<promedio2<<endl;
    }
    
  
    
    
    
    /*
        David Cardeño Calle
    */
    system("pause");
    return EXIT_SUCCESS;
}
