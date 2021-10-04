#include <iostream>
#include <set>
using namespace std;

string input, tmp1 = "", tmp2 = "";
int i = 0, j = 0, rows = 0, cols = 0, s = 0;
multiset<int> container_a;
multiset<int> container_b;

int main()
{
    getline(cin, input);
    rows = input.length();
    s = rows;
    int* array_in = new int[rows];

    while(true)
    {
        if(input.length() == 0)
        {
            if (container_a.empty()==false)
            {
                for (std::multiset<int>::iterator it=container_a.begin(); it!=container_a.end(); ++it )
                std::cout << *it << ' ';
            }
            if (container_b.empty()==false)
            {
                for (std::multiset<int>::iterator it=container_b.begin(); it!=container_b.end(); ++it )
                std::cout << *it << ' ';
            }
            delete [] array_in;
            return 0;
        } 
        if(s != 0)
        {
            tmp1 = input.at(0);
            if (tmp1 == "a")
            {
                tmp2 = input.at(2);
                container_a.insert(stoi(tmp2));
                input.erase(0,4);
                s -= 4;
                i++;
            }
            else if (tmp1 == "b")
            {
                tmp2 = input.at(2);
                container_b.insert(stoi(tmp2));
                input.erase(0,4);
                s -= 4;
                j++;
            }
        }
    }
} 
    