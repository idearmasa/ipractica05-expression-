/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Desinflado.cc
 * @author Isael De Armas Amatima alu0101487021@ull.edu.es
 * @date Oct 27 2021
 * @brief Programa que lee una letra mayúscula y muestra por pantalla su correspondiente letra minúscula.
 */

#include <iostream>

int main(){
  
  char letra;
  std::cin >> letra;

    if(isalpha(letra)){ 
        if(letra >= 'A' && letra <= 'Z'){
            letra = towlower(letra);
        } 
        else {
            return 0;
        }
  std::cout << letra << std::endl;
    } 
return 0;
}