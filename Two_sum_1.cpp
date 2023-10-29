#include <iostream>
#include <unordered_map>
#include <vector>
class Twosum
{
public:
    std::vector<int> twoSumTarget(const std::vector<int> &v, int &target)
    {
        std::unordered_map<int, int> mpp;

        for (int i = 0; i < v.size(); i++)
        {
            int complement = target - v[i];
            if (mpp.find(complement) != mpp.end())
            {

                return {mpp[complement], i};
            }
            else
            {
                mpp[v[i]] = i;
            }
        }
        return {}; // return an empty vector if no pair is found
    }
};
int main()
{
    std::vector<int> arr = {2, 7, 11, 15};
    int t = 9;
    Twosum s;
    auto ans = s.twoSumTarget(arr, t);
    for (int i : ans)
    std::cout << i << " ";
    return 0;
}