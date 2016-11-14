/*
C++ Reading Files
(c) 2016
Author: David Erbelding
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>
*/

// Reading from files is not much more complicated than reading input from the console.

// First, we're going to include fstream form the standard librady. fstream will help us open and read from files.
#include <fstream>
#include <iostream>
#include <string>


int main()
{
    {
        std::string fileName = "../assets/test.txt";    // The filepath of the file we want to read.
                                                        // It's relative to the location of our project.
        // Create an ifstream object:
        std::ifstream file = std::ifstream(fileName);   // ifstream works exactly the same way as cin, so we can read the file the same way.
                                                        // The constructor takes a string of the filepath to the file we want to open.
        
        if (file.is_open()) // Check if the file is open!
        {
            std::cout << "File" << fileName << " opened successfully!" << std::endl;


            std::string data;   // Create a string to store text in from the steam.

            while (file >> data)    // This is a commonly used tactic, reads words from the file until there are none left.
            {                       // Inside of the loop, we can parse the word that we read.
                                    // >> skips to something it can read, and then reads until hitting a space or newline,
                                    // Because of this, it won't leave any empty strings, but it also doesn't differentiate between space and newline.

                std::cout << "data: " << data << std::endl;
            }
        }
    }
    std::cin.get();






    {
        std::string fileName = "../assets/test.txt";    // The filepath of the file we want to read.
                                                        // It's relative to the location of our project.
                                                        // Create an ifstream object:
        std::ifstream file = std::ifstream(fileName);   // ifstream works exactly the same way as cin, so we can read the file the same way.
                                                        // The constructor takes a string of the filepath to the file we want to open.

        if (file.is_open()) // Check if the file is open!
        {
            std::cout << "File" << fileName << " opened successfully!" << std::endl;

            std::string line;   // Here, we'll read the data line by line instead:

            while (std::getline(file, line))    // Instead of reading one word at a time, we can use getline like this to get a full line from the file at once.
            {                                   // Unlike >>, this will read an empty line into a string, because it stops at every newline.
                std::cout << "line: " << line << std::endl;
            }
        }
    }
    std::cin.get();



}