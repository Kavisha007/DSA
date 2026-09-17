class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> ans(n, vector<int>(n));

        int minr = 0, maxr = n - 1;
        int minc = 0, maxc = n - 1;

        int val = 1;

        while (minr <= maxr && minc <= maxc) {

            // Top row: left → right
            for (int j = minc; j <= maxc; j++) {
                ans[minr][j] = val;
                val++;
            }
            minr++;

            // Right column: top → bottom
            for (int i = minr; i <= maxr; i++) {
                ans[i][maxc] = val;
                val++;
            }
            maxc--;

            // Bottom row: right → left
            if (minr <= maxr) {
                for (int j = maxc; j >= minc; j--) {
                    ans[maxr][j] = val;
                    val++;
                }
                maxr--;
            }

            // Left column: bottom → top
            if (minc <= maxc) {
                for (int i = maxr; i >= minr; i--) {
                    ans[i][minc] = val;
                    val++;
                }
                minc++;
            }
        }

        return ans;
    }
};