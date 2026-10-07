class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        // vector<vector<int>>  copy = arr;
        int m =arr.size() , n=arr[0].size(); // revise

        // Method 1
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(copy[i][j]==0){ //set ith row and 
        //         for(int col=0;col<n;col++){
        //             arr[i][col]=0;
        //         }
        //         // jth column to 0
        //         for(int row=0;row<m;row++){
        //             arr[row][j]=0;
        //         }
        //         }
        //     }
        // }


        // Method 2
        // vector<bool> row(m,false);
        // vector<bool> col(n,false);
        //   for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(arr[i][j]==0){ //set ith row and 
        //       row[i] = true;
        //       col[j] = true;
        //         }
        //     }
        //   }
        //   for(int i=0;i<row.size();i++){
        //     if(row[i]==true){
        //         for(int j=0;j<n;j++){
        //             arr[i][j]=0;
        //         }
        //     }
        //   }
    
        //   for(int j=0;j<col.size();j++){
        //     if(col[j]==true){
        //         for(int i=0;i<m;i++){
        //             arr[i][j]=0;
        //         }
        //     }
        //   }


          // Method 3 

        int ROWS = arr.size(), COLS = arr[0].size();
        bool rowZero = false;

        for (int r = 0; r < ROWS; r++) {
            for (int c = 0; c < COLS; c++) {
                if (arr[r][c] == 0) {
                    arr[0][c] = 0;
                    if (r > 0) {
                        arr[r][0] = 0;
                    } else {
                        rowZero = true;
                    }
                }
            }
        }

        for (int r = 1; r < ROWS; r++) {
            for (int c = 1; c < COLS; c++) {
                if (arr[0][c] == 0 || arr[r][0] == 0) {
                    arr[r][c] = 0;
                }
            }
        }

        if (arr[0][0] == 0) {
            for (int r = 0; r < ROWS; r++) {
                arr[r][0] = 0;
            }
        }

        if (rowZero) {
            for (int c = 0; c < COLS; c++) {
                arr[0][c] = 0;
            }
        }
    }

    
};