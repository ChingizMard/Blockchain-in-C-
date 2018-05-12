#ifndef TIME_H
#define TIME_H
#include <string>
#include <ctime>
#include <sstream>
#include "lib/piscoha2.h"

class Block
{
    private:
        std::string _hash;          //Hash 
        std::string _previousHash;  //Hash of the previous block for linkage
        std::string _data;          //Content of the block
        std::time_t _timestamp;     //Timestamp
        int _nonce;
    public:
        Block();
        Block(const std::string data, const std::string previousHash);
        std::string calculateHash(); //Hash the value of the block
        std::string getHash(); //
        std::string getPreviousHash();
        void mineBlock(int difficulty);
        void printBlock();
        void setData(std::string data);
};

#endif