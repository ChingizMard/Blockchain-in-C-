#ifndef TIME_H
#define TIME_H
#include <string>
#include <ctime>

class Block
{
    private:
        std::string _hash;          //Hash 
        std::string _previousHash;  //Hash of the previous block for linkage
        std::string _data;          //Content of the block
        std::time_t _timestamp;     //Timestamp
    public:
        Block(const std::string data, const std::string previousHash);
        std::string getData(); //Just a test method to check block creation.
};

#endif