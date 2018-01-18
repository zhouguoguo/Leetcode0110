#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (auto i : nums) {
            result ^= i;
        }
        return result;
    }
};

int main(int argc, char *args[])
{
    Solution s;
    vector<int> nums = {1,3,5,2,4,5,2,1,4};
    cout << s.singleNumber(nums) << endl;
    system("pause");
    return 0;
}
