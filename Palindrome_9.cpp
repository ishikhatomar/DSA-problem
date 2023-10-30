#include<iostream>
int main(){
    int n = 121;
    int original = n;
    int rev =0;
    while(n!=0){
     rev = rev*10+n%10;
     n /= 10;
    }
    if(original ==rev)
    std::cout<<"Palindrome";
    else
    std::cout<<"Not a palindrome";
    return 0;
}