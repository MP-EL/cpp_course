#include <iostream>
#include <math.h>
using namespace std;

int main(){   
    int flag = 0;
    int max = 0;
    int min = 0;
    int l = 0; 
    int n = 0; 
    cin >> l;
    cin >> n;
    float k = 0;
    int arr[n] = {0};
    for(int i=0; i<n; i++){
        cin >> arr[i]; 
    }
    max = arr[0];
    for(int i=0; i<n; i++){
        if(max < arr[i])
            max = arr[i];
    }
    k = ceil((float)max/(float));

    int res = 0;
    for(int i=0; i<l; i++){
        for(int j=0; j<n; j++){
            if((arr[j]>=i*k) && (arr[j]<(i+1)*k)){
                res = res + 1;
            }
            if((i+1==l) && (j+1==l) && (max/l==n)){

                res = res + 1;
            }
        }
        cout << i*k << ": " << res << endl;
        res = 0;
    }
    return 0;
}