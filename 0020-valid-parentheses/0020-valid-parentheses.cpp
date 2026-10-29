class Solution {
public:
    bool isValid(string s) {
         int a=s.size(); cout<<a;
         int top=-1;
         char b[a];int c=a;

        for(int i=0;i<a;i++){
            if(s[i]=='(' || s[i]=='{' ||s[i]=='['  ){
                b[++top]=s[i];
            }
            else{
                  if(s[i]==')' && top!=-1 && b[top]=='('){
                     top--; c-=2;
                  }else if(s[i]=='}' && top!=-1 && b[top]=='{' ){
                      top--;c-=2;
                  }else{
                   if(s[i]==']' && top!=-1 && b[top]=='['){
                     top--;c-=2;
                  }
                  }
                 
            }
            
         }
         
          return c==0;
    }
};