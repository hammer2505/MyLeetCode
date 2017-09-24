#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        if(triangle.size()==1)
            return triangle[0][0];
        for(int i=1;i<triangle.size();i++){
            for(int j=0;j<triangle[i].size();j++){
                if(j==0)
                    triangle[i][0]+=triangle[i-1][0];
                else if(j==triangle[i].size()-1)
                    triangle[i][j]+=triangle[i-1][j-1];
                else
                    triangle[i][j]+=min(triangle[i-1][j-1], triangle[i-1][j]);
            }
        }
        int res = triangle[triangle.size()-1][0];
        for(int i=1;i<triangle.size();i++)
            if(triangle[triangle.size()-1][i] < res)
                res = triangle[triangle.size()-1][i];

        return res;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}