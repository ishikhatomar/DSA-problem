#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<math.h>
int titleToNumber(std::string& columnTitle){
    std::reverse(columnTitle.begin(),columnTitle.end());
    int j =1;
    int result =0;
  
    for(int i=0; i<columnTitle.size(); i++){
      result = result + pow(26,i) * (columnTitle[i]-'A'+1);
    }
    return result;
}
int main(){
    std::string s = "ZY";
    std::cout<<titleToNumber(s);
}