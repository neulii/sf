game: bin/game.o bin/GreenCircle.o
	g++ bin/game.o bin/GreenCircle.o -o game -lsfml-graphics -lsfml-window -lsfml-system

bin/game.o: src/game.cpp 
	g++ -c src/game.cpp -I "include" -o bin/game.o

bin/GreenCircle.o: src/GreenCircle.cpp 
	g++ -c src/GreenCircle.cpp -I "include" -o bin/GreenCircle.o

clean:
	rm bin/*.o
	rm game

run: 
	./game
