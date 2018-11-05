#include "TestaValidaNumero.h"
#include <stdexcept>
#include <iostream>
void TestaValidaNumero::validaNumero(int num){

     try{
         std::cout << "Digite um numero: " << std::endl;
            std::cin >> num;
            }
        catch(ValorAbaixoException& e){
        std::cout << "Valor Abaixo " << std::endl;
        }
        catch(ValorAcimaException& e){
        std::cout << "Valor Acima " << std::endl;
        }
        catch(ValorMuitoAcimaException& e){
        std::cout << "Vaor muito acima" << std::endl;
        }


        }
