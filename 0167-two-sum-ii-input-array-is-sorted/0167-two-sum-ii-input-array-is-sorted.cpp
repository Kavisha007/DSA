class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size(); // revise
        vector<int> ans(2);
        int i=0 , j=n-1;
        while(i<=j){
            if(arr[i]+arr[j]>target) j--;
            else if(arr[i]+arr[j]<target) i++;
            else if(arr[i]+arr[j]==target){
                ans[0]=i+1;
                ans[1]=j+1;
                break;
            }
        }
        return ans;
    }
};