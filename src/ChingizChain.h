#include "Block.h"

class ChingizChain
{
    public:
        static std::vector<Block> blockchain; //Store all of the blocks
        static bool checkValidity(); //If the chain is modified, this will return false
        static int difficulty; //Number of 0s in the hash.
};
