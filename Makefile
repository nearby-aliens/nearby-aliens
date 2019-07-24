#Thomas Honnell and Jessica

output : nearbyAliensMain.o tile.o starSystem.o chara.o minigames.o
	g++ nearbyAliensMain.o tile.o starSystem.o chara.o minigames.o -o output

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

clean:
	rm *.o output
