class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)return false;
        int x=2;
        while(n>1){
            if(n%2!=0){
                return false;
                return 0;
            }
           n=n/2;
        }
        return true;
    }
};