#include <iostream>

using namespace std;

const int PX[9] = { 0, 1, 2, 2, 1, -1, -2, -2, -1}, 
          PY[9] = { 0, 2, 1, -1, -2, -2, -1, 1, 2};
int horseX, horseY;
int bX, bY;
int map[23][23];
const int noun = 0, horse = 1, side = 3;
const int goX[2] = { 1, 0}, goY[2] = { 0, 1}, right = 0, down = 1;

void dfs(int x, int y) 
{
    if (map[x][y] = side) return ;
    if ()
    return ;
}

int main()
{
    for (int i = 0; i < 23; i++) {
        map[0][i] = side;
        map[i][0] = side;
        map[  ]
    }
    cin >> bX >> bY >> horseX >> horseY;

    return 0;
}

