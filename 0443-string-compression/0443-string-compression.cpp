class Solution {
public:
    int compress(vector<char>& arr) {
        string ans="";
        int n=arr.size();
        int i=0,j=0;
        while(j<n){
            if(arr[j]==arr[i]) j++;
            else{
                int len=j-i;
                ans.push_back(arr[i]);
                if(len !=1)  ans +=to_string(len);
                i=j;
            }
        }
          int len=j-i;
         ans.push_back(arr[i]);
         if(len !=1) ans +=to_string(len);
         
          vector<char> ans2;
          for(char ch:ans)  ans2.push_back
          (ch);
          arr=ans2;
          return arr.size();
    }
};