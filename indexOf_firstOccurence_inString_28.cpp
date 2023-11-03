#include<iostream>

int strStr(std::string haystack, std::string needle){
int n1 = haystack.size();
int n2 = needle.size();
if(n1<n2){
    return -1;
}
int i =0;
int j =0;
int k=0;
while(i<n1 && j<n2){
    if(haystack[i]==needle[j]){
        if(i-k+1 == n2){
         return k;
        }
        else{
            i++;
            j++;
        }

    }
    else{
        j=0;
        k++;
        i=k;
    }
}
return -1;
}

int main(){
 std::string haystack = "mississippi";
 std::string needle = "issip";
 std::cout<<strStr(haystack, needle);
}