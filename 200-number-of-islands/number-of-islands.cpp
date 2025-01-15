class Solution {
    private:
    void srch(int row,int col,vector<vector<char>>&grid){
        
        if(row<0 || col<0 || row>=grid.size() || col>=grid[0].size() || grid[row][col]=='0')return ;
        grid[row][col]='0';
         srch(row,col-1,grid);
                 srch(row,col+1,grid);

              srch(row-1,col,grid);
 srch(row+1,col,grid);

    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        int m=grid[0].size();
int count=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!='0'){
                    count++;
                    srch(i,j,grid);
                }
            }
        }
        return count;
    }
};