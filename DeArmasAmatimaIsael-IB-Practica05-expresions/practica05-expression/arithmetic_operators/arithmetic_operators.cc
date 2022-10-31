/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file arithmetic_operators.cc
 * @author Isael De Armas Amatima alu0101487021@ull.edu.es
 * @date Oct 27 2021
 * @brief Programa que declara e inicialice variables de tipos aritméticos e imprime en pantalla el resultado 
 *        de operar esas variables con todos los operadores que pueda utilizar con ellas.
 */

#include<iostream>

int main() {
    int numero1,numero2;         
    std::cout << "introduzca el primer valor a operar ";
    std::cin >> numero1;
    std::cout << "introduzca el segundo valor a operar ";
    std::cin >> numero2;

    std::cout << numero1 <<" % " << numero2 << " = "<< numero1 % numero2 << std::endl;
    std::cout << numero1 <<" + " << numero2 << " = "<< numero1 + numero2 << std::endl;
    std::cout << numero1 <<" - " << numero2 << " = "<< numero1 - numero2 << std::endl;
    std::cout << numero1 <<" * " << numero2 << " = "<< numero1 * numero2 << std::endl;
    std::cout << numero1 <<" / " << numero2 << " = "<< numero1 / numero2 << std::endl;
}