#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<int> data;
public:
    int climbStairs(int n) {
        data = vector<int>(n+1,-1);
        data[1]=1;
        data[2]=2;
        for(int i=3;i<n+1;i++)
            data[i]= data[i-1]+data[i-2];
        return data[n];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}