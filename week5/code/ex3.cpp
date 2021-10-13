#include <iostream>
#include <set>
#include <vector>
using namespace std;

string input, tmp1 = "", tmp2 = "";
int i = 0, j = 0, rows = 0, cols = 0, s = 0;
vector<int> container_a;
vector<int> container_b;

int main()
{
    getline(cin, input);
    rows = input.length();
    s = rows;
    int* array_in = new int[rows];
    double res = 0;
    while(true)
    {
        if(input.length() == 0)
        {
            if (container_a.size() < container_b.size())
            {
                int extra_zeros_a = container_b.size() - container_a.size();
                for (int i = 0; i < extra_zeros_a; i++)
                {
                    container_a.push_back(0);
                }                
            }
            if (container_b.size() < container_a.size())
            {
                int extra_zeros_b = container_a.size() - container_b.size();
                for (int i = 0; i < extra_zeros_b; i++)
                {
                    container_b.push_back(0);
                }
            }
            for (int i = 0; i < container_a.size(); i++)
            {
                res += container_a[i] * container_b[i];
            }
            cout << res << endl;
            
            delete [] array_in;
            return 0;
        } 
        if(s != 0)
        {
            tmp1 = input.at(0);
            if (tmp1 == "a")
            {
                tmp2 = input.at(2);
                container_a.push_back(stoi(tmp2));
                input.erase(0,4);
                s -= 4;
                i++;
            }
            else if (tmp1 == "b")
            {
                tmp2 = input.at(2);
                container_b.push_back(stoi(tmp2));
                input.erase(0,4);
                s -= 4;
                j++;
            }
        }
    }
} 
    