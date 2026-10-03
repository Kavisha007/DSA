class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& a, vector<int>& b) {
        sort(a.begin(), a.end()); /// revise
        sort(b.begin(), b.end());
        int m=a.size();
        int n=b.size();
        int i=0 , j=0;
        int ans1=0 , ans2=0;
        while(i<m && j<n){
            if(a[i]<b[j]) i++;
            else if(a[i]>b[j]) j++;
            else{ // a[i] =  b[j]
                int value = a[i];
                int count1=0 , count2=0;
                while(i<m && a[i]== value){
                    count1++;
                    i++;
                }
                while(j<n && b[j]== value){
                    count2++;
                    j++;
                }
                ans1+=count1;
                ans2+=count2;
                
            } 
        }
        return {ans1,ans2};
    }
};