#include <iostream>

#include "Block.h"
#include "ChingizChain.h"


int main ()
{
    Block genesisBlock = Block("Genesis Block", "GENHASH");
    Block block1 = Block("Block One", genesisBlock.getHash());
    Block block2 = Block("Block Two", block1.getHash());
    
    genesisBlock.printBlock();
    block1.printBlock();
    block2.printBlock();

    ChingizChain::blockchain.push_back(genesisBlock);
    ChingizChain::blockchain.push_back(block1);
    ChingizChain::blockchain.push_back(block2);
    
    std::cout << ChingizChain::checkValidity() << std::endl;
}