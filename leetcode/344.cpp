#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseString(string s) {
        string result;
        for (auto it = s.crbegin(); it != s.crend(); ++it) {
            result += *it;
        }
        return result;
    }
    
};

int main(int argc, char *args[])
{
    Solution s;
    cout << s.reverseString("hello") << endl;
    system("pause");
    return 0;
}