from<https://leetcode.com/problems/valid-parentheses/submissions/881376894/>

unordered_map<char,int> d ={{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};
class Solution {
public:
    bool isValid(string x) {
         stack<char> st;
       for(char s:x)
       {
           if(d[s]<0)
             st.push(s);
        else{
            if(st.empty()) return 0;
            char top=st.top();
            st.pop();
            if(d[top]+d[s]!=0)
              return 0;
               
        }
       }
       if(st.empty()) return 1;
       return 0;
    }
};

