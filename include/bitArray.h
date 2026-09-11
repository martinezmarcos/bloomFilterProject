#pragma once 
#include <vector> 

class BitArray { 
    public: 
        BitArray(int size); 
        void setBit(int index);  
        bool getBit(int index) const;  
        int getSize() const; 
    private: 
        std::vector<bool> bitArray; 
        int size; 
};  