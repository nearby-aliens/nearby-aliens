#Thomas Honnell and Jessica

output : nearbyAliensMain.o tile.o starSystem.o
	g++ nearbyAliensMain.o tile.o starSystem.o -o output

nearbyAliensMain.o: nearbyAliensMain.cpp colors.h
	g++ -c nearbyAliensMain.cpp

tile.o: tile.cpp tile.h
	g++ -c tile.cpp

starSystem.o: starSystem.cpp starSystem.h
	g++ -c starSystem.cpp

clean:
	rm *.o output
