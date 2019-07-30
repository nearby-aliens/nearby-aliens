#Thomas Honnell and Jessica

output : nearbyAliensMain.o tile.o starSystem.o chara.o minigames.o orbit_functions.o
	g++ nearbyAliensMain.o tile.o starSystem.o chara.o minigames.o orbit_functions.o -o output

nearbyAliensMain.o: nearbyAliensMain.cpp colors.h
	g++ -c nearbyAliensMain.cpp

tile.o: tile.cpp tile.h
	g++ -c tile.cpp

starSystem.o: starSystem.cpp starSystem.h
	g++ -c starSystem.cpp

chara.o: chara.cpp chara.h
	g++ -c chara.cpp

minigames.o: minigames.cpp
	g++ -c minigames.cpp

orbit_functions.o: orbit_functions.cpp
	g++ -c orbit_functions.cpp

clean:
	rm *.o output
