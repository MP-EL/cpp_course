#include <iostream>
#include <math.h>
#include <set>
using namespace std;

int main(){   
    string input;
    string output;
    int x = 0;
    multiset<int> container;
    int flag = 0;

    while(flag==0){
        cin >> input;
        if(input == "quit"){
            flag = 1;
        }
        else{
            cin >> x;
        
            if(input == "add"){
                container.insert(x);
            }
            if(input == "del"){
                const bool is_in = container.find(x) != container.end();
                if(is_in == true){
                    container.erase(container.lower_bound(x));
                }
            }
            if(input == "qry"){
                const bool is_in = container.find(x) != container.end();
                if(is_in == true){
                    cout << "T";
                }
                if(is_in == false){
                    cout << "F";
                }
            }
        }
        

    }
    return 0;
}