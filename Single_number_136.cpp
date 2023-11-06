#include<iostream>
#include<vector>
int singleNumber(std::vector<int>& nums){
    int result =0;
    //used bitwise operator
    for(int i =0; i<nums.size(); i++){
        result = result ^ nums[i];
    }
    return result; 
}
int main(){
    std::vector<int> nums = {4,1,2,1,2};
    std::cout<<singleNumber(nums);

}