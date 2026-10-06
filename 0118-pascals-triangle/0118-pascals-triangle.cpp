class Solution {
public:
    vector<vector<int>> generate(int m) {
     vector<vector<int>> ans; // revise
     for(int i=1;i<=m;i++){
        ans.push_back(vector<int>(i,1));
     }

     // fill the  pascals triangle
     for(int i=2;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
           if(j != 0 && j != i)
                 ans[i][j]=ans[i-1][j-1] + ans[i-1][j];
        }
     }
     return ans;

    }
};