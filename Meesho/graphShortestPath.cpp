int minimumMoves(vector<string> grid, int startX, int startY, int goalX, int goalY) {
    int n = grid.size();
    int m = grid[0].size();

    vector<vector<int>> dist(n, vector<int>(m, -1));
    queue<pair<int, pair<int, int>>> q;

    dist[startX][startY] = 0;
    q.push({0, {startX, startY}});

    int dr[] = {-1, 0, 1, 0};
    int dc[] = {0, -1, 0, 1};

    while (!q.empty()) {
        int dis = q.front().first;
        int row = q.front().second.first;
        int col = q.front().second.second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            for (int j = 1;; j++) {
                int nrow = row + j * dr[i];
                int ncol = col + j * dc[i];

                if (nrow < 0 || nrow >= n || ncol < 0 || ncol >= m || grid[nrow][ncol] == 'X')
                    break;

                if (dist[nrow][ncol] == -1) {
                    dist[nrow][ncol] = dis + 1;
                    if (nrow == goalX && ncol == goalY)
                        return dis + 1;

                    q.push({dis + 1, {nrow, ncol}});
                }
            }
        }
    }

    return -1;
}
