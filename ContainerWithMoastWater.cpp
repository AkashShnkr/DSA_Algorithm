#include<bits/stdc++.h>
using namespace std;
int maxArea(vector<int> &nums){
    int mx=INT_MIN;
    for(int i = 0;i<nums.size();i++){
for(int j=i+1;j<nums.size();j++){
    int water=(j-i)*min(nums[i],nums[j]);
    mx=max(mx,water);
}
    }
    return mx;
} 
int main()  {
vector<int> nums {1,4,2,3};
cout<<"Maximum amount of water is : "<<maxArea(nums);
return 0;
}