#include <iostream>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int t = 0;
        while(x > 0 || y > 0)
        {
            t += (x % 2)^(y % 2);
            x = x >> 1;
            y = y >> 1;
        }
        return t;
    }
};

int main(int argc, char *args[])
{
    Solution s;
    cout << s.hammingDistance(1, 4) << endl;
    system("pause");
    return 0;
}