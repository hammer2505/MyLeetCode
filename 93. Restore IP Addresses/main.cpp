#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> res;
    bool isSafe(string ip){
        if(ip.size()>1 && ip[0]=='0')
            return false;
        if(ip.size()<=2)
            return true;
        if(ip.size()>3)
            return false;
        int number=(ip[0]-'0')*100+(ip[1]-'0')*10+(ip[2]-'0');
        if(number>=0&&number<=255)
            return true;
        return false;
    }
    void findIp(const string &ip, int index, int number, const string &s){
        if(index >= ip.size())
            return;
        if(number==3) {
            string strNumber = string(ip.begin() + index, ip.end());
            if(isSafe(strNumber)){
                res.push_back(s+ strNumber);
            }
            else return;
        }
        else {
            for (int i = 1; i <= 3; i++) {
                if(index+i <= ip.size()){
                    string strNumber = string(ip.begin() + index, ip.begin() + index+i);
                    if (isSafe(strNumber)) {
                        findIp(ip, index+i, number+1, s+strNumber + '.');
                    }
                }
            }
        }

    }
public:
    vector<string> restoreIpAddresses(string s) {
        res.clear();
        findIp(s, 0, 0, "");
        return res;
    }
};

int main() {
    string s = "010010";
    vector<string> res = Solution().restoreIpAddresses(s);
    cout << "+++++++++++++++++++++++++"<< endl;
    for(int i=0;i<res.size();i++)
        cout << res[i]<< endl;
    return 0;
}