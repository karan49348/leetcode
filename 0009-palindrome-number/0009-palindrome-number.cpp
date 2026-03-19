class Solution {
public:
    bool isPalindrome(int x) {
        int ori=x;
        int digit=0;
        int rev=0;
        if(x<0){
            return false;}
        
        while(x){
            digit=x%10;
            if(rev>INT_MAX/10)return false;
            rev=rev*10+digit;
            x=x/10;
        }
      return ori==rev;
    }
};