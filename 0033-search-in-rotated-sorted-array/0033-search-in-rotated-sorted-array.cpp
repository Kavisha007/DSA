class Solution {
public:
    int search(vector<int>& arr, int tar) {
        int n=arr.size(); // revise 
        int lo=0, hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]== tar)  return mid;
            if(arr[lo]<=arr[mid]){// left half sorted
                if(arr[lo]<=tar && tar<=arr[mid]) hi=mid-1;
                else  lo=mid+1;
                
            }
            else{   // Right half sorted
                if(arr[mid]<=tar && tar<=arr[hi]) lo=mid+1;
                else  hi=mid-1;

            }
        }
        return -1;
        
    }
};