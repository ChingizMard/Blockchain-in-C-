#include <iostream>

#include "Block.h"
#include "ChingizChain.h"


int main ()
{
    Block genesisBlock = Block("Genesis Block", "GENHASH");
    genesisBlock.mineBlock(ChingizChain::difficulty);
    Block block1 = Block("Block One", genesisBlock.getHash());
    block1.mineBlock(ChingizChain::difficulty);
    Block block2 = Block("Block Two", block1.getHash());
    block2.mineBlock(ChingizChain::difficulty);
    
    genesisBlock.printBlock();
    block1.printBlock();
    block2.printBlock();

    ChingizChain::blockchain.push_back(genesisBlock);
    ChingizChain::blockchain.push_back(block1);
    ChingizChain::blockchain.push_back(block2);
    
    std::cout << ChingizChain::checkValidity() << std::endl;

    //Invalidate the chain
    ChingizChain::blockchain[1].setData("You screwed up boy!");
    ChingizChain::blockchain[1].mineBlock(ChingizChain::difficulty);

    std::cout << ChingizChain::checkValidity() << std::endl;

}