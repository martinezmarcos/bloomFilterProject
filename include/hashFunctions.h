#pragma once  
#include <string>  
#include <vector> 
#include <cstdint> 

std::cout << std::boolalpha;
std::cout << "Check 'usuario1@email.com': " << bloomFilter.checkItem("usuario1@email.com") << "\n";
std::cout << "Check 'desconocido@email.com': " << bloomFilter.checkItem("desconocido@email.com") << "\n";
namespace hashFunctions { 
    uint32_t fnv1aHash(const std::string& key); 
    uint32_t djb2Hash(const std::string& key); 
    std::vector<int> generateHashes(const std::string& key, int numHashes, int maxVal);  
} 

