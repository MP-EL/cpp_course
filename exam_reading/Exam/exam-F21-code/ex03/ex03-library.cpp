#include <iostream>
#include "ex03-library.h"
#include <algorithm>
#include <map>
using namespace std;

// Do not modify
Hotel::Hotel() {
    this->roomNames.push_back("Daisy");
    this->roomOccupancy["Daisy"] = {"Alan Smithee", "xyz890"};

    this->roomNames.push_back("Geranium");

    this->roomNames.push_back("Lotus");
    this->roomOccupancy["Lotus"] = {"Kathryn Bigelow", "456abc"};

    this->roomNames.push_back("Orchid");
    this->roomOccupancy["Orchid"] = {"Alan Smithee", "abc123"};

    this->roomNames.push_back("Tulip");
    this->roomOccupancy["Tulip"] = {"Denis Villeneuve", "123xyz"};
}

// Task 3(a).  Implement this method
void Hotel::addRoom(string name) {
    if(std::find(this->roomNames.begin(), this->roomNames.end(), name) != this->roomNames.end() != true){
        this->roomNames.push_back(name);
    }     
}

// Task 3(b).  Implement this method
void Hotel::addGuest(string roomName, string guestName, string guestId) {
    Guest tmp = {guestName, guestId};
    if(std::find(this->roomNames.begin(), this->roomNames.end(), roomName) != this->roomNames.end() == true){ 
        bool itr = false;
        for(auto it = this->roomOccupancy.begin(); it != this->roomOccupancy.end(); ++it){
            if(it->second.id == guestId){
                itr = true;
            }
        }

        if(itr == false){
            this->roomOccupancy.insert(pair<string, Guest>(roomName, tmp));
        }
    }  
}

// Task 3(c).  Implement this method
void Hotel::findRoomByGuest(string guestName, string guestId) {
    for(auto it = this->roomOccupancy.begin(); it != this->roomOccupancy.end(); ++it){
        if(it->second.name == guestName && it->second.id == guestId){
            cout << it->first << endl;
        }
        else if(guestName == "*" && guestId == "*"){
            cout << it->first << endl;
        }
        else if(guestName == "*" && it->second.id == guestId){
            cout << it->first << endl;
        }
        else if(guestId == "*" && it->second.name == guestName){
            cout << it->first << endl;
        }
    }
}

// Do not modify
void Hotel::display() {
    for (auto it = this->roomNames.begin(); it != this->roomNames.end(); it++) {
        cout << "Room '" << *it << "' is ";
        if (this->roomOccupancy.find(*it) == this->roomOccupancy.end()) {
            cout << "empty" << endl;
        } else {
            cout << "occupied by " << this->roomOccupancy[*it].name;
            cout << " (id: " << this->roomOccupancy[*it].id << ")" << endl;
        }
    }
}
