#include <iostream>
using namespace std;

string input, input_temp = "";
int i = 0, j = 0, rows = 0, cols = 0;



typedef enum{ wood, stone} material;
struct tile
{
    int x=0, y=0;
    bool isWall;
    material type;
};

int main()
{
    cin >> rows;
    cin >> cols;

    int player_x = rows/2, player_y = cols/2, input_length = 0;

    // tile playground[rows][cols];

    tile **playground = new tile*[rows];
    for(int s = 0; s < rows; s++)
    {
        playground[s] = new tile[cols];
    }

    while(true)
    {
        for(i = 0; i < rows; i++)
        {
            for(j = 0; j < cols; j++)
            {
                playground[i][j].x = player_x;
                playground[i][j].y = player_y;
                playground[i][j].isWall = (j==0 || i==(rows-1) || (i==0 && j!=3) || j==(cols-1));
                if(playground[i][j].isWall)
                {
                    playground[i][j].type = stone;
                    cout << "*";
                } 
                else if(i == playground[i][j].x && j == playground[i][j].y)
                {
                    cout << "O";
                }
                else
                {
                    playground[i][j].type = wood;
                    cout << " ";
                }
                
            }
            cout << endl;
        }
        if(input.length() == 0)
        {
            cin >> input;
            input.length();
        } 
        if(input.length() > 0)
        {
            input_temp = input.at(0);
            input.erase(0,1);
        }
        if (input_temp == "q")
        {
            return 0;
        }
        if (input_temp == "l")
        {
            if(playground[player_x][player_y - 1].isWall)
            {
                player_y = player_y;
            }
            else
            {
                player_y = player_y - 1;
            }
        } 
        if (input_temp == "r")
        {
            if(playground[player_x][player_y + 1].isWall)
            {
                player_y = player_y;
            }
            else
            {
                player_y = player_y + 1;
            }
        }
        if (input_temp == "d")
        {
            if(playground[player_x + 1][player_y].isWall)
            {
                player_x = player_x;
            }
            else
            {
                player_x = player_x + 1;
            }
        }  
        if (input_temp == "u")
        {
            if(playground[player_x - 1][player_y].isWall)
            {
                player_x = player_x;
            }
            else
            {
                player_x = player_x - 1;
            }
        } 
    }
    
}
