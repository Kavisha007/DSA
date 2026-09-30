class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) { // revise
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int boat=0;
        // Two pointer approach
        int i=0 ,j=n-1;
        while(i<=j){
            if(arr[i]+arr[j]<=limit){
                i++;
                j--;
            }
            else j--;
            boat++;
        }
        return boat;
        
    }
};