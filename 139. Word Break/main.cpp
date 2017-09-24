#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
private:
    vector<int> memo;
    bool find(string s, vector<string>& wordDict, int index){
        if(memo[index]!=-1)
            return memo[index];
        if(index==s.size())
            return true;
        if(index>s.size())
            return false;
        bool res1=false;
        for(int i=0; i<wordDict.size();i++) {
            int wordSize = wordDict[i].size();
            bool res = true;
            for (int j = index; j < wordSize + index; j++) {
                if (s[j] != wordDict[i][j-index]) {
                    res = false;
                    break;
                }
            }
            if (res) {
                res1 = res1 || find(s, wordDict, index + wordSize);
            }
        }
        memo[index]=res1;
    return memo[index];
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        memo = vector<int>(2*s.size(),-1);

        return find(s, wordDict, 0);
    }
};

int main() {
    string s = "a";
    vector<string> wordDict= {"b"};
    cout << Solution().wordBreak(s, wordDict);
    return 0;
}