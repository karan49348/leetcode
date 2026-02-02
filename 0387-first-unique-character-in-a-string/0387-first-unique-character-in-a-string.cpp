class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>map;
    for(auto x:s){
     map[x]++;
    }
    for(int i=0;i<s.size();i++){
        if(map[s[i]]==1){
            return i;
        }
    }
    return-1;
    }
};