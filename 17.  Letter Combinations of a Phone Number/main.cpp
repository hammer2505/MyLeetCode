#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
private:
    const string letterMap[10] = {
            " ",
            "",
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz"
    };
    vector<string> res;
    void findCombination(const string &digits, int index, const string &s){
        if(index == digits.size()){
            res.push_back(s);
            return;
        }
        char c = digits[index];
        string letters = letterMap[c-'0'];
        for(int i=0;i<letters.size();i++){
            findCombination(digits, index+1, s+letters[i]);
        }
        return;

    }
public:
    vector<string> letterCombinations(string digits) {
        res.clear();
        if(digits == "")
            return res;
        findCombination(digits, 0, "");
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}