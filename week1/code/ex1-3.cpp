#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x;
    cin >> y;
    if(x == y){
        cout << x << " is equal to " << y << endl;
    }
    if(x>y){
        cout << x << " is bigger than " << y << endl;
    }
    if(x<y){
        cout << x << " is smaller than " << y << endl;
    }
    return 0;
}