chain: src/Block.cpp src/ChingizChain.cpp
	g++ -o chain src/Block.cpp src/ChingizChain.cpp -I. && ./chain
clean:
	rm chain