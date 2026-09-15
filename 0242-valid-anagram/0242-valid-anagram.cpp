class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int m=s.length();
        int n=t.length();
        if(m!=n) return false;
        // int i=0,j=0;
        // while(i<m && j<n){
        //     if(s[i]==t[j]){
        //         i++;
        //         j++;
        //     }
        //     else{
        //         return false;
        //     }
        // }
        // if(s==t) return true;
        // else  return false;
        // return true;
        return (s==t);
    }
};