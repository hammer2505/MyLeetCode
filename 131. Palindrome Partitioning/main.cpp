#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<string>> res;
    bool isPalindrome(string s){
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[s.size()-i-1])
                return false;
        }
        return true;
    }
    void findPalindrome(const string &ip, int index, vector<string> s){
        if(index==ip.size())
            res.push_back(s);
        if(index >= ip.size())
            return;

        for (int i = 1; i <= ip.size()-index; i++) {
            string strNumber = string(ip.begin() + index, ip.begin() + index+i);
            if (isPalindrome(strNumber)) {
                s.push_back(strNumber);
                findPalindrome(ip, index+i, s);
                s.pop_back();
            }
        }

    }
public:
    vector<vector<string>> partition(string s) {
        res.clear();
        findPalindrome(s,  0, {});
        return res;
    }
};

int main() {
    vector<vector<string>> res = Solution().partition("aab");
    cout << "_______________________"<< endl;
    for (int i = 0; i < res.size(); i++){
        for (int j = 0; j < res[i].size(); ++j) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    cout << Solution().isPalindrome("aa");
    return 0;
}