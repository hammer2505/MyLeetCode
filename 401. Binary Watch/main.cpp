#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> minute = {-1,-2,-4,-8,1,2,4,8,16,32};

    vector<vector<int>> res;
    void _readBinaryWatch(vector<int> result, int num, int startM){
        if(num==0) {
            res.push_back(result);
        }

        for(int i=startM; i<minute.size(); i++){
            result.push_back(minute[i]);
            int hours=0;
            int minutes = 0;
            for(int j=0;j<result.size();j++){
                if(result[j]<0)
                    hours-=result[j];
                if(result[j]>0)
                    minutes+=result[j];
            }
            if(hours<12 && minutes<60)
                _readBinaryWatch(result, num-1, i+1);
            result.pop_back();
        }
    }

    vector<string> readBinaryWatch(int num) {
        vector<string> res1;
        if(num==0){
            res1.push_back("0:00");
            return res1;
        }
        res.clear();
        vector<int> result;
        _readBinaryWatch(result, num, 0);
        for(int i=0;i<res.size();i++){
            int hours=0;
            int minutes = 0;
            for(int j=0;j<res[i].size();j++){
                if(res[i][j]<0)
                    hours-=res[i][j];
                if(res[i][j]>0)
                    minutes+=res[i][j];
            }
            string s = "";
            s+= to_string(hours);
            s+=':';
            if(minutes<10)
                s+='0';
            s+=to_string(minutes);
            res1.push_back(s);
        }
        return res1;
    }
};

int main() {
    vector<string> res = Solution().readBinaryWatch(2);
    sort(res.begin(),res.end());
    for(int i=0;i<res.size();i++)
        cout << res[i]<<endl;
    return 0;
}