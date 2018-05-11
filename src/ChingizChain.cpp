#include "Block.h"
#include <iostream>

int main ()
{
    Block genesisBlock = Block("Genesis Block", "0"); //First block _prevHash can be 0.
    std::cout << genesisBlock.getData() << std::endl;
}