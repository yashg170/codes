class NumMatrix {
public:
    
     int sum[1000][1000];
    NumMatrix(vector<vector<int>>& matrix) {
    int n=matrix.size(); int  m=matrix[0].size();
       for(int i=0; i<=n; i++){
          for(int j=0; j<=m; j++){
                sum[i][j]=0;
            }
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                sum[i][j]=sum[i][j-1]+matrix[i-1][j-1]+sum[i-1][j]-sum[i-1][j-1];
                cout<<sum[i][j]<<" ";
            }
            cout<<endl;
        }
      
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return sum[row2+1][col2+1]-sum[row1][col2+1]-sum[row2+1][col1]+sum[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */