#include<iostream>
#include<vector>
#include<algorithm> //Use std::reverse from the algorithm header
std::vector<int> plusOne(std::vector<int>& digits){
   std:: reverse(digits.begin(), digits.end());
    int carry =1;
    for(int i =0; i<digits.size(); i++){
        digits[i] += carry;
        carry = digits[i]/10;
        digits[i] %= 10;
    }
    if(carry>0){
        digits.push_back(carry);
    }
    std::reverse(digits.begin(), digits.end());
    return digits;
}

int main(){
    std::vector<int> digits= {1,9,9};
    std::vector<int> vec = plusOne(digits);
    for(int a:vec){
        std::cout<<a<<" ";
    }
}