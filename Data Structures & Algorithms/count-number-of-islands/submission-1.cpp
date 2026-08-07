class Solution {
public:
    void bfs(int r,int c,vector<vector<char>>&grid){
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<int,int>>q;
        q.push({r,c});
        grid[r][c]='0';
        int dr[4]={-1,1,0,0};
        int dc[4]={0,0,-1,1};
        while(!q.empty()){
            auto[row,col]=q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int newRow=row+dr[i];
                int newCol=col+dc[i];
                if(newRow>=0&&newRow<m && newCol>=0&& newCol<n && grid[newRow][newCol]=='1'){
                    q.push({newRow,newCol});
                    grid[newRow][newCol]='0';
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    count++;
                    bfs(i,j,grid);
                }
            }
        }
        return count;
    }
};