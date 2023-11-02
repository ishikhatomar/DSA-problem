#include<iostream>
#include<vector>

int main(){
    std::vector<std::string> strs = {"Flower", "Flow", "Flight"};
    std::string ans = "";
    int i =0, flag =0;
    while(i<strs[0].size()){
        char s = strs[0][i];
        for(auto x: strs){
            if(x[i]!=s){
             flag =1;
             break; 
            }
        }
        if(flag ==1){
           std::cout<<ans;
            break;
        }
        else{
            ans += strs[0][i];
            i++;
        }
    }
    return 0;
}