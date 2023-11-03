#include<iostream>
#include<vector>
int removeElement(std::vector<int>& nums, int val){
 if(nums.size()==0){
    return 0;
 }
 int i =0, j=1;
 while(j<nums.size()){
    if(val == nums[i]){
       if(nums[j]!=val){
        int temp = nums[i];
        nums[i]=nums[j];
        nums[j]= temp;
        i++;
       }
       j++;
    }
    else{
      i++;
      if(i ==j){
        j++;
      }
    }
 }
 if(nums[j-1]!=val){ 
    std::cout<<"j: "<<j<<std::endl;
    return j;
 }
 return i;
}

int main(){
std:: vector<int> nums = {3,2,2,3};
int val = 3;
int k = removeElement(nums, val);
for(int i =0; i<k; i++){
    std::cout<<nums[i]<<" ";
}
}