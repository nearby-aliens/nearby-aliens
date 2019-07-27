# Nearby Aliens
Copyright (c) 2019 Jessica Barnett and Thomas Honnell

jessba2 AT pdx DOT edu

In this command line c++ game, search nearby star systems for intelligent life!
Which nearby star will you travel to? Will you find intelligent life and will these
beings be friendly or hostile? Will there be alien messages to decode?

Also, this project is easy to contribute to! With intermediate knowledge 
of C++ you can totally contribute. If you understand the program flow and functions you 
can make the art for levels. Look at the code for the function "makeAlphaCentauri" and 
use that as a model to make the ACSCII art for another star system.  

If you understand 2D static arrays, pointers, objects and classes - you are ready to go
for much more! Email me with questions. If you are unsure of your programming level 
grab one of the issues marked 'good for 1st issue'.
  
This project is super welcoming to all! Check out our code of conduct.

# Build and Run


Download Instructions:
download a zip file and unzip to gain access to the files. You could also clone the repository using git clone <url> and copy paste the url from the download/clone button.
  
To build the file run make in the terminal. If you wish to recompile run make clean, then run make again. To run the program input ./output to run the output file.
  
//TODO - need
Prerequisites for build

Installation instructions


# Project Status
We are in the beginning stages of building this project. The gameboard in each level is an 
instance of the 'starSystem' class. Currently, we are adding functions that contribute to 
designing the art for the first five starSystem levels. We are also working on the 
functionality of moving from one 'tile' to another. The gameboard is a 30 by 11 array of tile*
pointers. Each tile is made up of 4by2 characters and represents approximately .2Au by .2Au of 
space. 

# Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please note that this project is released with a Contributor Code of Conduct. By participating 
in this project you agree to abide by its terms. The code of conduct is enforced by a benevolent 
dictator :). That said, we have not had any problems. We are kind and encouraging to each other.

# Roadmap
The "demo" or "prototype" version includes the basic menu structure of choosing a 
star system and going there. It includes the ASCII art for one system - the alpha centauri binary
pair star system. It also includes the displaying the players ship, an ASCII symbol, and the
ability to move in the four direction in the displayed space of the star system.

The "minimum viable product" (MVP) version of the project has 4 star systems to travel to. Each 
system supports getting in orbit of a planet (an adjacent tile). This activates a sub menu to choose 
between a) send a probe to the surface b) listen for messages c) send messages d) decode messages 
e) land on planet f) mine/collect material needed to fuel the hyperdrive. 
To "WIN" a player finds an inteligent species, successfully communicates with them and meets them 
on their planet. To "LOSE" a player can: move into a sun tile, send a probe or land on an inhabited
planet tile without communicating with the native intelligent beings, run out of in system fuel before
returning to Sol/Earth to get more, run out of hyperdrive fuel before mining more, or do something 
wrong in meeting native species. The MVP includes the ability to win and most of the ways to lose.

Advanced features include exploring the surface of planets. This includes exploring the nature of 
the soil, exploring abandoned alien structures and being shown current thriving alien culture.

Future plans include working on advanced features, maintaining the project for new users to 
play with and learn the coding for the ASCII art creating new star systems.

# License
This program is licensed under the "GNU General Public License".
Please see the file LICENSE in the source distribution of this software for license terms.
