#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> q;//最小堆
        int i=0;
        while(i<nums.size()){
            if(q.size()<k){
                q.push(nums[i]);
            }else{
                if(q.top() < nums[i]){
                    cout << q.top()<< endl;
                    q.pop();
                    q.push(nums[i]);
                }
            }
            i++;
            cout << q.top()<< endl;
        }
        cout << "**************" << endl;
        return q.top();
    }
    //还可以利用快速排序partition放入正确位置的性质去做(更慢）
    int partition(vector<int>& nums, int l, int r){
        if(l==r)
            return l;
        int res=0;
        for(int i=l+1;i<=r;i++){
            if(nums[i]>nums[l]){
                swap(nums[l+res+1], nums[i]);
                res++;
            }
        }
        swap(nums[l+res], nums[l]);
        return res+l;
    }
    int findKthLargest1(vector<int>& nums, int k) {
        int l=0, r=nums.size()-1;
        int point = partition(nums, l, r);
        while(point != k-1){
            cout << point<< endl;
            if(point<k-1){
                l=point+1;
                point = partition(nums, l, r);
            }
            else{
                r=point-1;
                point = partition(nums, l, r);
            }
            cout << point <<" " << k-1 << endl;
        }
        return nums[k-1];

    }
};
int main() {
    vector<int> nums = {5,2,4,1,3,6,0};
    cout << Solution().findKthLargest(nums, 4);
    return 0;
}