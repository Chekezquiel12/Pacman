build : src/main.cpp
	g++ src/main.cpp -Iinclude -o bin/tazo

	run : bin/tazo
		./bin/tazo
	bin/tazo : src/main.cpp
		./bin/tazo > assets/mensaje
		