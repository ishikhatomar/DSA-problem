#include<iostream>
int lastWordLength(std::string s){
  int count =0; 
  int i = s.size()-1;
  while(i>0){
    if(s[i]!= ' '){
        while(i>=0 && s[i]!= ' '){
            count +=1;
            i--;
        }
        return count;
    }
    else{
        i--;
    }
  }
  return 1;
}
int main(){
    std:: string s = " fly me to the moon  ";
    std::cout<<lastWordLength(s);
}
