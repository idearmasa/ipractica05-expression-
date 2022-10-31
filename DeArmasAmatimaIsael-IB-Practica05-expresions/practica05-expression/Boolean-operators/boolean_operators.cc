/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file boolean_operators.cc
 * @author Isael De Armas Amatima alu0101487021@ull.edu.es
 * @date Oct 27 2021
 * @brief  Programa que imprime en pantalla la tabla de verdad de los operadores lógicos (and, or, not) de C++. 
 */

#include<iostream>


int main(){
    bool p=true, q=true;

        //tabla de verdad not p
    std::cout << "TABLA DE VERDAD DE NOT p(!p)" << std::endl;
    std::cout << "p    !p    " << std::endl;
    std::cout << "----- -----" << std::endl;
    std::cout << p  << "       " << !p << std::endl;
    std::cout << !p << "       " << p << std::endl;
    std::cout <<std::endl;

        //tabla de verdad not q
    std::cout << "TABLA DE VERDAD DE NOT q(!q)" << std::endl;
    std::cout << "q    !q    " << std::endl;
    std::cout << "----- -----" << std::endl;
    std::cout << q  << "       " << !q << std::endl;
    std::cout << !q << "       " << q << std::endl;
    std::cout << std::endl;

        //tabla de verdad de and
    std::cout << "TABLA DE VERDAD DE AND(&&)" << std::endl;

    std::cout << "p q    p && q" << std::endl;
    std::cout << "------ ------" << std::endl;
    std::cout << !p << " " << !q << "      " << (!p && !q) << std::endl;
    std::cout << !p << " " << q << "      " << (!p && q) << std::endl;
    std::cout << p << " " << !q << "      " << (p && !q) << std::endl;
    std::cout << p << " " << q << "      " << (p && q) << std::endl;
    std::cout << std::endl;

        //tabla de verdad or
    std::cout << "TABLA DE VERDAD DE OR(||)" << std::endl;

    std::cout << "p q    p || q" << std::endl;
    std::cout << "------ ------" << std::endl;
    std::cout << !p << " " << !q << "      " << (!p || !q) << std::endl;
    std::cout << !p << " " << q << "      " << (!p || q) << std::endl;
    std::cout << p << " " << !q << "      " << (p || !q) << std::endl;
    std::cout << p << " " << q << "      " << (p || q) << std::endl;

  return 0;
    
}