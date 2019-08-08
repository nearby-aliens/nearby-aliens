#Thomas Honnell and Jessica Barnett

CPP = g++
CPPFLAGS = -g -Wall -Werror

output : nearbyAliensMain.o tile.o starSystem.o chara.o minigames.o orbit_functions.o events.o
	$(CPP) $(CPPFLAGS) nearbyAliensMain.o tile.o starSystem.o chara.o minigames.o orbit_functions.o events.o -o output

nearbyAliensMain.o: nearbyAliensMain.cpp colors.h
	$(CPP) $(CPPFLAGS) -c nearbyAliensMain.cpp

tile.o: tile.cpp tile.h
	$(CPP) $(CPPFLAGS) -c tile.cpp

starSystem.o: starSystem.cpp starSystem.h
	$(CPP) $(CPPFLAGS) -c starSystem.cpp

chara.o: chara.cpp chara.h
	$(CPP) $(CPPFLAGS) -c chara.cpp

minigames.o: minigames.cpp minigames.h
	$(CPP) $(CPPFLAGS) -c minigames.cpp

orbit_functions.o: orbit_functions.cpp orbit_functions.h
	$(CPP) $(CPPFLAGS) -c orbit_functions.cpp

events.o: events.cpp events.h
	$(CPP) $(CPPFLAGS) -c events.cpp

clean:
	rm *.o output
