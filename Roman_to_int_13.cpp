#include<iostream>
int getInt(char c){
    switch (c){
     case 'I': return 1;
     case 'V': return 5;
     case 'X': return 10;
     case 'L': return 50;
     case 'C': return 100;
     case 'D': return 500;
     case 'M': return 1000;
     default: return -1;   
    }
    return 0;
    
}

int main(){
    std::string s ="LVIII";
    int ans =0;
    for(int i =0; i<s.size(); i++){
        if(i!=s.size()-1 && getInt(s[i])< getInt(s[i+1])){
            ans = ans + (getInt(s[i+1]) - getInt(s[i]));
            std::cout<<"ans at "<<i<<" :"<<ans<<std::endl;
            i++;
        }
        else{
            ans = ans + getInt(s[i]);
             std::cout<<"ans at "<<i<<" :"<<ans<<std::endl;
        }
    }
    std::cout<<ans;

    return 0;
}