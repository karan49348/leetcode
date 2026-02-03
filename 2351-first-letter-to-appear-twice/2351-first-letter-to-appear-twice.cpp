class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char>m;
        for(auto x:s){
            if(m.count(x)) return x;
            m.insert(x);
        }
        return ' ';
    }
};