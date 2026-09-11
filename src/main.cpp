#include "bloomFilter.h"
#include <iostream> 
#include <string> 

int main() { 
    int expectedElements = 1000; 
    double targetFpp = 0.01;  

    BloomFilter bloomFilter(expectedElements, targetFpp); 

    bloomFilter.insertItem("usuario1@gmail.com"); 
    bloomFilter.insertItem("usuario2@gmail.com"); 
    bloomFilter.insertItem("usuario3@gmail.com"); 

    std::cout << std::boolalpha; 
    std::cout << "Check 'usuario1@gmail.com' " << bloomFilter.checkItem("usuario1@gmail.com") << "\n"; 
    std::cout << "Check 'desconocido@gmail.com' " << bloomFilter.checkItem("desconocido@gmail.com") << "\n"; 

    int currentInserted = 3; 
    std::cout << "FPP: " << bloomFilter.getFalsePositiveProbabilty(currentInserted) << "\n"; 

    return 0;

}