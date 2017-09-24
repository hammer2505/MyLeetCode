#include <iostream>
#include <vector>
using namespace std;

class NumArray {
private:
    vector<int> data;
public:
    NumArray(vector<int> nums) {
        data = nums;
    }

    int sumRange(int i, int j) {
        int res=0;
        for(int k=i;k<=j;k++)
            res+=data[k];
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}