#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<math.h>
int titleToNumber(std::string& columnTitle){
    std::reverse(columnTitle.begin(),columnTitle.end());
    int j =1;
    int result =0;
   std:: unordered_map<int, int> mpp;
    for(char c= 'A'; c<='Z'; c++){
        mpp[c]=j;
        j++;
    }
    for(int i=0; i<columnTitle.size(); i++){
      result = result + pow(26,i) * mpp[columnTitle[i]];
    }
    return result;
}
int main(){
    std::string s = "ZY";
    std::cout<<titleToNumber(s);
}