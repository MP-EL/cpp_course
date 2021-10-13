#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 0;
    float sum = 0;
    cin >> n;
    float arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[n];
        sum = sum + arr[n];
    }

    cout << sum << endl;
    return 0;
}