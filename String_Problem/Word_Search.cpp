#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define LI long int
#define LLI long long int
#define ULL unsigned long long
#define MAX 10000
#define row 50
#define col 50

int X_arr[] = {-1, 1, 0, 0};
int Y_arr[] = {0, 0, -1, 1};



int word_search (char w_grid[][5], int x, int y, char goal[], int indx, int ln){
    int ans = 0, i, x_axis, y_axis, len = strlen (goal);

    if (indx > ln) return 0;

    if (w_grid[x][y] != goal[indx]) return 0;

    if (x < 0 || y < 0 || x >= 4 || y >= 5) return 0;

    if (indx == len-1) return 1;

    for (i = 0; i < 4; i++){
        x_axis = X_arr[i] + x;
        y_axis = Y_arr[i] + y;
        ans += word_search(w_grid, x_axis, y_axis, goal, indx+1, ln);
    }
    return ans;
}

int word_count (char w_grid[][5], char goal[]){
    int cnt, i, j, ans, len;
    len = strlen (goal);

    for (i = 0; i < 4; i++)
        for (j = 0; j < 5; j++)
            if (w_grid[i][j] == 'S')
                cnt += word_search (w_grid, i, j, goal, 0, len-1);
    return cnt;
}

int main (){
    int res;
    char word[][5] = {
                        { 'S', 'N', 'B', 'S', 'N' },
                        { 'B', 'A', 'K', 'E', 'A' },
                        { 'B', 'K', 'B', 'B', 'K' },
                        { 'S', 'E', 'B', 'S', 'E' }
                    };

    char search[] = {"SNAKES"};
    res = word_count (word, search);
    printf ("No of occurences are %d\n", res);
    return 0;
}
