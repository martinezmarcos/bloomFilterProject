#include "bloomFilter.h"
#include <iostream>
#include <string>

int main() {
    int expectedElements = 1000;
    double targetFpp = 0.01; 
    
    BloomFilter bloomFilter(expectedElements, targetFpp);

    bloomFilter.insertItem("usuario1@email.com");
    bloomFilter.insertItem("usuario2@email.com");
    bloomFilter.insertItem("usuario3@email.com");

    std::cout << std::boolalpha;
    std::cout << "Check 'usuario1@email.com': " << bloomFilter.checkItem("usuario1@email.com") << "\n";
    std::cout << "Check 'desconocido@email.com': " << bloomFilter.checkItem("desconocido@email.com") << "\n";

    int currentInserted = 3;
    std::cout << "FPP: " << bloomFilter.getFalsePositiveProbability(currentInserted) << "\n";

    return 0;
} 

