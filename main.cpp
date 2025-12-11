#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

// Milestone 1
int main() {

    map<string , int> airports;

    ifstream file("210-final-1-FA25.txt");
    string origin, destination;

    while (file >> origin >> destination) {

        if(airports.count(origin) == 0) { 
            ariports(origin) = 0
        }

        if(airports.count(destination) == 0) { 
            airports[destination] = 0        
        }

        airports(origin)
        airports(destination) = 0
    
    
    }
    // Initial commit: 
    cout << "Airport traffic.\n";

    return 0;
}
