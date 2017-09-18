#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int i=0,j=numbers.size()-1;
        while(numbers[i]+numbers[j]!=target){
            if(numbers[i]+numbers[j]>target){
                j--;
            }else{
                i++;
            }
        }
        res = {i+1,j+1};
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}