

app : src/main.cpp src/MathLib.cpp
	g++ $^ -o build/$@


run r : 
	cd build && ./app