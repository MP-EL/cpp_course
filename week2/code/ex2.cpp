#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x,y;
    cin >> x;
    int flag = 0;
    int primes[15] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int primecounter[100];
    int i,j = 0;


    while(true){
        if(x%primes[i]==0){
            cout << "x" << x << endl;
            primecounter[j] = primes[i];
            x = x / primes[i];
            j = j + 1;
        }
        if(x%primes[i]!=0){
            i = i + 1;
        }
        if(x==1){
            break;
        }
        if(j>50){
            return 1;
        }
    }
    cout << "done" << endl;
    return 0;

}



/*

    while(true){
        if(n%prime[s]==0){
            primecounter[s1] = prime[s];
            n = n/prime[s];
            s1 += 1;
        }
        if(n%prime[s]!=0){
            s += 1;
        }
        if(n==1){
            break;
        }
    }
    cout << primecounter[0];
    for(int i = 0; i<s1; i++){
        cout <<" * "<< primecounter[i];
    }
    cout << endl;
    return 0;
}
*/