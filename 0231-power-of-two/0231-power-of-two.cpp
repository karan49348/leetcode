class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)return false;
        while(n>1){
            for(int i=0;i<n;i++){
                if(n%2!=0){
                    return false;
                    return 0;
                }
            }
            n=n/2;
        }
        return true;
    }
};