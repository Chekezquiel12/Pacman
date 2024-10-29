#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int   entero = 0;
    bool  booleano = true;
    char  letra = 'A';
    float decimal = 0.5;
    
    cout<<"Tamaño Entero:"<< sizeof(entero)<< endl;
    cout<<"Tamaño Entero:"<< sizeof(booleano)<< endl;
    cout<<"Tamaño Entero:"<< sizeof(letra)<< endl;
    cout<<"Tamaño Entero:"<< sizeof(decimal)<< endl;

    TazoDorado* direccion;
    direccion = (TazoDorado *)malloc(sizeof(TazoDorado));
    direccion->Inicializar();
    std::cout<<"Valor en direccion:  "<< direccion->IsFloating()<<std::endl;
    
    TazoDorado *direccion2;
    direccion2 = new TazoDorado();
     std::cout<<"Valor en direccion:  "<< direccion2->IsFloating()<<std::endl;

    /* code */
    return 0;
}
