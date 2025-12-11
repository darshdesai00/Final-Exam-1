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
            airports[origin] = 0;
        }

        if(airports.count(destination) == 0) { 
            airports[destination] = 0;       
        }

        airports[origin]++;
        airports[destination]++;
    
    }
    
    cout << "Airport traffic count.\n";
    for (map<string, int>::iterator it = airports.begin(); it != airports.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }


// Milestone 2
int maxCount = 0;

for (map<string, int>:;iterator it + airports.begin(); it != airports.end(); it++) { 
    if (it->second maxcount) {
        maxcount = it->second;
    }
}

cout << "\n The busiest airports with count " << maxcount << ";\n";

for (map<string, int>::iterator it = airport.begin(); it++) {
    it(it->second maxcoint) {
        maxcount = it ->second;
    }
}
    return 0;
}