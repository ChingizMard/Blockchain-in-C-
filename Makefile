chain: src/Block.cpp src/ChingizChain.cpp src/Client.cpp
	g++ -o chain src/Block.cpp src/ChingizChain.cpp src/Client.cpp -I. && ./chain
clean:
	rm chain
