

app : src/main.cpp src/MathLib.cpp src/GreenVision/GV.cpp
	g++ $^ -o build/$@


run r : 
	cd build && ./app