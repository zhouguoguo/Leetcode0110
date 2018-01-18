#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for (int i = 1; i <= n; ++i) {
            string s;
            if (i % 3 == 0) {
                s.append("Fizz");
            }
            if (i % 5 == 0) {
                s.append("Buzz");
            }
            if (s == "") {
                s = to_string(i);
            }
            result.push_back(s);
        }
        return result;
    }
};

int main(int argc, char *args[])
{
    Solution s;
    vector<string> v = s.fizzBuzz(15);
    for (auto str : v)
        cout << str << endl;
    system("pause");
    return 0;
}