#include<iostream>
#include<vector>
int searchInsert(std::vector<int>& nums, int target){
  int lower = 0;
  int upper = nums.size()-1;
  int mid;
  while(lower<upper){
    mid = (upper+lower)/2;
    if(target ==nums[mid]){
        return mid;
    }
    else if(target< nums[mid]){
        upper = mid-1;
    }
    else{
        lower = mid+1;
    }
  }
  return lower;
}

int main(){
 std::vector<int> nums = {1,3,5,6};
 int target = 0;
 std::cout<<searchInsert(nums, target);

}