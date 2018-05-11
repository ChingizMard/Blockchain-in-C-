#include "Block.h"

Block::Block(const std::string data, const std::string previousHash){
    _data = data;  
    _hash = "xxxxhashxxxx"; //Dummy hash for now. 
    _previousHash = previousHash; 
    _timestamp = std::time(nullptr); 
    
}


std::string Block::getData(){
    return _data;
}



