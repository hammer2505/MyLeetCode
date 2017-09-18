#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            if(!isalnum(s[i]))
                i++;
            else if(!isalnum(s[j]))
                j--;
            else if(toupper(s[i])!=toupper(s[j]))
                return false;
            else {i++;j--;}
        }
        return true;
    }
};
int main() {
    string s="a ba";
    cout << Solution().isPalindrome(s);
    return 0;
}