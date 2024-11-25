demo: src/main.cpp src/f.hpp src/g.hpp
	clang++ -o demo src/main.cpp -std=c++23 -Isrc -isysroot /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk
