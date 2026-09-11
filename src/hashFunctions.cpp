#include "hashFunctions.h"  

namespace hashFunctions {  
    uint32_t fnv1aHash(const std::string& key) { 
        uint32_t hash = 2166136261u; 
        for(char c : key) { 
            hash ^= static_cast<uint32_t>(c); 
            hash *= 16777619; 
        } 
        return hash; 
    } 

uint32_t djb2Hash(const std::string& key) { 
    uint32_t hash = 5381; 
    for (char c : key) { 
        hash = ((hash << 5) + hash) + c;  
    } 
    return hash; 
}  

    std::vector<int> generateHashes(const std::string& key, int numHashes, int maxVal) { 
    std::vector<int> hashes; 
    uint32_t hash1 = fnv1aHash(key); 
    uint32_t hash2 = djb2Hash(key);  

            for (int i = 0; i < numHashes; ++i) { 
            uint32_t combinedHash = hash1 + (i * hash2); 
            hashes.push_back(combinedHash % maxVal); 
            } 

        return hashes; 
    }


}
    
