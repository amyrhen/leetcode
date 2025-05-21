#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector <int> & nums) {
        int k = 0;
        for (int x : nums) if (x != nums[k]) nums[++k] = x;
        nums.resize(++k), nums.shrink_to_fit();
        return k;
    }
};
