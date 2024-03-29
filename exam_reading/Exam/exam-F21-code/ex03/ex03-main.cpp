// #include <iostream>
// #include "ex03-library.h"
// using namespace std;

// int main() {
//     Hotel hotel = Hotel();

//     cout << "Initial hotel occupancy:" << endl;
//     hotel.display();

//     hotel.addRoom("Waterlily");
//     cout << endl << "After adding room 'Waterlily':" << endl;
//     hotel.display();

//     hotel.addGuest("Waterlily", "Taika Waititi", "pqr567");
//     cout << endl << "After adding a guest:" << endl;
//     hotel.display();

//     cout << endl << "Room(s) occupied by someone called Alan Smithee:" << endl;
//     hotel.findRoomByGuest("Alan Smithee", "*");

//     return 0;
// }
#include <iostream>
#include "ex03-library.h"
using namespace std;

int main() {
    Hotel hotel = Hotel();

    cout << "Initial hotel occupancy:" << endl;
    hotel.display();

    hotel.addGuest("Waterlily", "Taika Waititi", "pqr567");
    cout << endl << "After adding a guest to non-existent room 'Waterlily':" << endl;
    hotel.display();

    hotel.addGuest("Geranium", "Taika Waititi", "456abc");
    cout << endl << "After adding a guest with duplicated id to room 'Geranium':" << endl;
    hotel.display();

    hotel.addGuest("Geranium", "Taika Waititi", "pqr567");
    cout << endl << "After adding a guest to room 'Geranium':" << endl;
    hotel.display();

    return 0;
}

