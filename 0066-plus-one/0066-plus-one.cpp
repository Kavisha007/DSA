class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
   
    int no=0 , carry=1;
    int n = arr.size();
    vector<int>ans;
    for(int i=n-1;i>=0;i--){
        int sum = arr[i]+carry;
        if(sum<10)  {
            carry =0;
            ans.push_back(sum);
        }
        else{
            carry=1;
            ans.push_back(0);
        }
        
    }
    if(carry==1)  ans.push_back(1);
    reverse(ans.begin(),ans.end());
         return ans;
    } 

};