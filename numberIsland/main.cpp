#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty() || grid[0].empty()) {
            return 0;
        }
        int answer = 0;
        int grid_row = grid.size();
        int grid_col = grid[0].size();
        //Check Boundaries
        auto bound = [&](int row, int col) {
            return 0 <= row && row < grid_row && 0 <= col && col < grid_col;
        };
        vector<pair<int,int>> directions{{1,0}, {0,1}, {-1,0}, {0,-1}};
        for(int row = 0; row < grid_row; row++) {
            for(int col = 0; col < grid_col; col++) {
                if(grid[row][col] == '1') {
                    answer++;
                    queue<pair<int,int>> q;
                    q.push({row, col});
                    grid[row][col] = 0;
                    while(!q.empty()) {
                        pair<int, int> p = q.front();
                        q.pop();
                        for(pair<int,int> dir : directions) {
                            int new_row = p.first + dir.first;
                            int new_col = p.second + dir.second;
                            if(bound(new_row, new_col) && grid[new_row][new_col] == '1') {
                                q.push({new_row, new_col});
                                grid[new_row][new_col] = 0;
                            }
                        }
                    }
                }
            }
        }
        return answer;
    }
};

int main()
{
    vector<vector<char>> grid = {{'1','1','1','1','0'},{'1','1','0','1','0'},{'1','1','0','0','0'},{'0','0','0','0','0'}};
    Solution mysolution;
    int x = mysolution.numIslands(grid);
    cout << x << endl;
    return 0;
}
