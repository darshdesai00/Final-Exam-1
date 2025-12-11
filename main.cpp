#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

// Milestone 3
void printRange(const map<string, int>& airports, int low, int high) {
    for (map<string, int>::const_iterator it = airports.begin(); it != airports.end(); it++) {
        if (it->second >= low && it->second <= high) {
            cout << it->first << " " << it->second << endl;
        }
    }
}

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

for (map<string, int>::iterator it = airports.begin(); it != airports.end(); it++) { 
    if (it->second > maxCount) {
        maxCount = it->second;
    }
}

cout << "\nBusiest airport(s) with count " << maxCount << ":\n";

for (map<string, int>::iterator it = airports.begin(); it != airports.end(); it++) {
    if(it->second == maxCount) {
        cout << it->first << " " << it->second << endl;    
    }
}
    
// Milestone 3
cout << "\nAirports with traffic in range [5,8]:\n";
printRange(airports, 5, 8);

cout << "\nAirports with traffic in range [9,12]:\n";
printRange(airports, 9, 12);

// Milestone 4 
cout << "\nAll Milestone Exercised.\n";

return 0;

}

