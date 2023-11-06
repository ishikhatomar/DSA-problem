#include<iostream>
std::string addBinary(std::string a, std::string b){
    int i = a.size()-1;
    int j = b.size()-1;
    std::string c;
    char carry ='0'; 
    while(i>=0 || j>=0){
       char A = i>=0?a[i]:'0';
       char B = j>=0?b[j]:'0';
       if(A=='0'&& B=='0'){
          if(carry =='0'){
             c = carry +c;
          }
          else{
            c = carry+c;
            carry ='0';
          }
       }
       else if(A=='1' && B =='1'){
         if(carry =='0'){
            c = '0'+c;
            
         }
         else{
            c = '1'+c;
         }
         carry = '1';
       }
       else{
          if(carry =='0'){
             c = '1'+c;
          }
          else{
            c = '0'+c;
            
          }
       }
       i--;
       j--;
    }
    if(carry =='1'){
        c = carry +c;
    }
return c;
}
int main(){
   std::string a ="101111";
   std::string b = "1011";
   std::cout<<addBinary(a,b);
}