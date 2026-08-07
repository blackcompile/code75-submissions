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
            int nr=row+dr[i];
            int nc=col+dc[i];
            if(nr>=0 && nr<m && nc>=0 && nc<n && grid[nr][nc]=='1' ){
                q.push({nr,nc});
                grid[nr][nc]='0';
            }
        }
    }
   }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    count++;
                    bfs(i,j,grid);
                }
            }
        }
        return count;
    }
};
