#include<iostream>
#include<stack>
bool validParanthesis(std::string s){
 std::stack<char> st; 
 int i =0;
 while(i<s.size()){
    if(s[i]=='('|| s[i]=='['||s[i]=='{'){
         st.push(s[i]);
    }
    else{
        if(st.empty()){
            return false;
        }
        char top = st.top();
        st.pop();
        if(s[i]==')'&& top!='(' || s[i]==']'&& top!='['|| s[i]=='}'&& top!='{')
          {
            return false;
          }
    }
   i++;
 }  
  if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    std::string s = "{}(){[]}";
    std::cout<<validParanthesis(s);
    
}