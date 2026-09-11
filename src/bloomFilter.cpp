#include "bloomFilter.h" 
#include "hashFunctions.h" 
#include <cmath> 

BloomFilter::BloomFilter(int expectedElements, double falsePositiveRate) 
    : bitArraySize(std::ceil(-(expectedElements * std::log(falsePositiveRate)) / std::pow(std::log(2), 2))), 
    numHashes(std::ceil((bitArraySize / static_cast<double>(expectedElements)) * std::log(2))), 
    bitArray(bitArraySize) {} 

void BloomFilter::insertItem(const std::string& item) {  
    std::vector<int> hashes = hashFunctions::generateHashes(item, numHashes, bitArraySize);  
    for (int hash : hashes) { 
        bitArray.setBit(hash);
    }
} 

bool BloomFilter::checkItem(const std::string& item) const { 
    std::vector<int> hashes = hashFunctions::generateHashes(item, numHashes, bitArraySize); 
    for (int hash : hashes) { 
        if (!bitArray.getBit(hash)) { 
            return false;
        }
    } 
    return true;
} 

double BloomFilter::getFalsePositiveProbabilty(int insertedElements) const { 
    return std::pow(1.0 - std::exp(-numHashes * insertedElements / static_cast<double>(bitArraySize)), numHashes); 
}