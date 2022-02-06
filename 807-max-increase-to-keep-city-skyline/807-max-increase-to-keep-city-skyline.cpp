class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int number=0;
        int max1[grid.size()];
            for(int &value:max1){
                value=0;
            }
         int max2[grid.size()];
        for(int &value:max2){
            value=0;
        }
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                    if(max1[i]<grid[i][j]){
                        max1[i]=grid[i][j];
                    }
            }
        }
          for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                    if(max2[i]<grid[j][i]){
                        max2[i]=grid[j][i];    
                    }
            }
        }
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size();j++){
                number+=(min(max1[i],max2[j])-grid[i][j]);    }
        }
        return number;
    }
};