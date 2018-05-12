#include <iostream>
#include "Block.h"

Block::Block(){}

Block::Block(const std::string data, const std::string previousHash){
    _data = data;  
    _previousHash = previousHash; 
    _timestamp = std::time(nullptr); 
    _hash = calculateHash();
}

std::string Block::getHash(){
    return _hash;
}

std::string Block::getPreviousHash(){
    return _previousHash;
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

void Block::printBlock(){
    std::cout << "======================" << std::endl;
    std::cout << "Block Data: " <<  _data << std::endl;
    std::cout << "Block Timestamp: " <<  _timestamp << std::endl;
    std::cout << "Block Hash: " <<  _hash << std::endl;
    std::cout << "Previous Block Hash: " <<  _previousHash << std::endl;
}


