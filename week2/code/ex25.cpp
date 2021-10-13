#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i = 2, x = 0;
    cin >> x;

    while(x>=i){
        if(x%i==0){
            cout << i;
            x = x / i;
            if(x != 1){
                cout << " * ";
            }
        }
        else{
            i = i + 1;
        }
    }
}
/*


    long int x = 0;
    long int y = 0;
    cin >> x;
    int flag = 0;
    int primes[40] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173};
    int primecounter[20];
    int i = 0;
    int j = 0;

    while(flag!=1){
        if(x%primes[i]==0){
            primecounter[j] = primes[i];
            x = x / primes[i];
            j = j + 1;
        }
        if(x%primes[i]!=0){
            
        }
        if(x%primes[i]!=0){
            i = i + 1;
        }
        if(x==1){
            flag = 1;;
        }
        if(j>50){
            return 1;
        }
    }
    cout << primecounter[0];
    for(int l = 1; l<j; l++){
        cout << " * " << primecounter[l];
    }
    cout << endl;
    return 0;

}

*/