#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0 && i % 5 == 0) {
                result.push_back("FizzBuzz");
            }
            else if (i % 3 == 0) {
                result.push_back("Fizz");
            }
            else if (i % 5 == 0) {
                result.push_back("Buzz");
            }
            else {
                result.push_back(to_string(i));
            }
        }
        return result;
    }
};

int main(int argc, char *args[])
{
    Solution s;
    vector<string> test;
    test.push_back("hou");
    cout << test.size() << endl;
    test.push_back("xiao");
    cout << test.size() << endl;
    vector<string> v = s.fizzBuzz(15);
    cout << v.size() << endl;
    for (auto str : v)
        cout << str << endl;
    system("pause");
    return 0;
}