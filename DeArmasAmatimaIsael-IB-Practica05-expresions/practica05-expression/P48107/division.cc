/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file division.cc
 * @author Isael De Armas Amatima alu0101487021@ull.edu.es
 * @date Oct 27 2021
 * @brief Program that reads two natural numbers a and b, with b > 0, and prints the integer division d and the remainder r of a divided by b.
 */

#include <iostream>

int main() {

    int numero1;
    int numero2;
    std::cin >> numero1; 
    std::cin >> numero2;
    std::cout << numero1 / numero2 << " " << numero1 % numero2 << std::endl;
return 0;
}