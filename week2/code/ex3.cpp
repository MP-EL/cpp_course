#include <iostream>
#include <math.h>
using namespace std;

double pi(int n){
    double sum = 0;
    for(int i = 0; i<n; i++){
        sum += pow((-1),i)/(2*i+1);
    }
    return 4*sum;
}

int main()
{
    int x = 0;
    cin >> x;
    cout << pi(x) << endl;
}
