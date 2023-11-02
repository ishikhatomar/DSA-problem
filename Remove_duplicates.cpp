//Remove duplicates from sorted array
#include<iostream>
#include<vector>
int removeDuplicates(std::vector<int> & nums){
int i =0;
    for(int j =1; j<nums.size(); j++)
    {
         if(nums[i]!=nums[j])
         {
            i++;
            nums[i] = nums[j];
         }
    }
    return i+1;
}
int main()
{
    std::vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int k = removeDuplicates(nums);
    std::cout<<k<<std::endl;
    std::cout<<"New vector will be: ";
    for(int i:nums)
    std::cout<<i;

    return 0;
}