#include "Block.h"

Block::Block(const std::string data, const std::string previousHash){
    _data = data;  
    _hash = calculateHash();
    _previousHash = previousHash; 
    _timestamp = std::time(nullptr); 
    
}


std::string Block::getData(){
    return _hash;
}


std::string Block::calculateHash(){
    //Convert t_time to string
    std::stringstream timestamp_ss;
    timestamp_ss << _timestamp;
    
    std::string input = timestamp_ss.str() + _data + _previousHash;
    std::string hash;
    picosha2::hash256_hex_string(input, hash); //Using the picosha2 for hashing. Link to library in URL
    return hash;
}


