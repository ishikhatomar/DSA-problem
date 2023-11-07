#include<iostream>
#include<vector>
#include<unordered_map>
bool containsDuplicate(std::vector<int> & nums){
  std:: unordered_map<int,int> mpp; 
   for(int i=0; i<nums.size() ; i++){
    if(mpp.find(nums[i])!=mpp.end()){
        mpp[nums[i]]++;
        return true;
    }
    else{
        mpp[nums[i]]=1;
    }
   }
   return false;
}
int main(){
   std::vector<int> vec = {1,1,1,3,3,4,3,2,4,2};
std::cout<<containsDuplicate(vec);
}
