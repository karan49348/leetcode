class Solution {
public:
    int calPoints(vector<string>& operations) {
      stack<int>st;
      for(auto x: operations){
        if(x=="C"){
            st.pop();
        }else if(x=="D"){
        st.push(st.top()*2);
        } 
        else if(x=="+"){
            int a=st.top();
            st.pop();
           int b=st.top();
           st.push(a);
           st.push(a+b);
        }else{
    st.push(stoi(x));
}

        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
         return ans;
      
    }
}; 