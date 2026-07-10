class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        queue<pair<int,int>> q;
        int fresh = 0;
        int time = 0;

        int rows = grid.size();
        int cols = grid[0].size();

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {

                if(grid[i][j] == 2)
                    q.push({i, j});

                else if(grid[i][j] == 1)
                    fresh++;
            }
        }

        int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

        while(!q.empty() && fresh) {

            int size = q.size();

            while(size--) {

                auto cur = q.front();
                q.pop();

                for(auto &d : dir) {

                    int x = cur.first + d[0];
                    int y = cur.second + d[1];

                    if(x >= 0 && y >= 0 && x < rows && y < cols && grid[x][y] == 1) {

                        grid[x][y] = 2;
                        fresh--;
                        q.push({x, y});
                    }
                }
            }

            time++;
        }

        return fresh ? -1 : time;
    }
};
