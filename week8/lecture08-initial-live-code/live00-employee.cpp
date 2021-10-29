#include <iostream>
#include <string>

using namespace std;

// TODO: add class definitions to match the code below

int main(void) {
    HourlyEmployee h = HourlyEmployee("Alice");
    CommissionedEmployee c = CommissionedEmployee("Bob");
    SalariedEmployee s = SalariedEmployee("Carol");

    cout << "The employee names are: ";
    cout << h.name << ", " << c.name << ", " << s.name << endl;

    return 0;
}

