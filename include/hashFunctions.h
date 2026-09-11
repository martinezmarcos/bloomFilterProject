#pragma once  
#include <string>  
#include <vector> 
#include <cstdint> 

namespace hashFunctions { 
    uint32_t fnv1aHash(const std::string& key); 
    uint32_t djb2Hash(const std::string& key); 
    std::vector<int> generateHashes(const std::string& key, int numHashes, int maxVal);  
} 

