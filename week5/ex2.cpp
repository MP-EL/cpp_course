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

    while(true)
    {
        if(input.length() == 0)
        {
            i = 0;
            while(container_a.empty() == false || container_b.empty() == false)
            {
                if (container_a.empty()==false)
                {
                    std::cout << container_a[i] << ' ';
                    container_a.pop_back();
                }
                if (container_b.empty()==false)
                {
                    std::cout << container_b[i] << ' ';
                    container_b.pop_back();
                }
                i++;
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
    