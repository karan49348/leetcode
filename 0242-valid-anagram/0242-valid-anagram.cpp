class Solution {
public:
    bool isAnagram(string s, string t) {
     map<char,int>m;
     for(auto x:s){
        m[x]++;
     }
     map<char,int>k;
     for(auto x:t){
        k[x]++;

     }
     if(m==k){
        return true;
     }else{
        return false;
     }
    }
};