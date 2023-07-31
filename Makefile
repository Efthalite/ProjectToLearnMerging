

app : src/main.cpp
	g++ $^ -o build/$@


run r : 
	cd build && ./app