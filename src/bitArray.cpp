#include "bitArray.h" 

BitArray::BitArray(int size) : bitArray(size, false), size(size) {} 

void BitArray::setBit(int index) {  
    bitArray[index] = true; 
} 

bool BitArray::getBit(int index) const { 
    return bitArray[index]; 
} 

int BitArray::getSize() const { 
    return size; 
} 

