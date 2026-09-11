#pragma once 
#include <string> 
#include "bitArray.h" 

class BloomFilter { 
    public: 
        BloomFilter(int expectedElements, double falsePositiveRate); 
        void insertItem(const std::string& item); 
        bool checkItem(const std:string& item) const; 
        double getFalsePositiveProbabilty(int insertedElements) const; 
    private: 
        int bitArraySize; 
        int numHashes; 
        BitArray bitArray; 

};