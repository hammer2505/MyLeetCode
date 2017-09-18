#include <iostream>
#include <string>

using namespace std;
class Solution {
public:
    string reverseString(string s) {
        string res;
        for (int i = s.size()-1; i >=0 ; --i) {
            res+=s[i];
        }
        return res;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}