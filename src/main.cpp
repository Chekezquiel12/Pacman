#include <iostream>
#include <TazoDorado.hpp>

int main (){

    TazoDorado coqueto;

    coqueto.Flotar();

    std::cout
        <<"El coqueto está flotando?"
        <<std::endl
        <<coqueto.Flotando()
        <<std::endl;

}

