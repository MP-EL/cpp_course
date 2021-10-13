#include <iostream>
#include <math.h>
using namespace std;

int main()
{   
    int arr[1001]={};
    int x = 0;
    while(true){
        cin >> x;
        if(x==0){
            return 0;
        }
        if(x!=0){

            cout << arr[x] << endl;
            arr[x] += 1;
        }

    }
}