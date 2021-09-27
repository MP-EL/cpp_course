#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + 1+i;
    }

    cout << sum << endl;
    return 0;
}