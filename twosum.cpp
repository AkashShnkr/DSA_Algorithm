#include<bits/stdc++.h>
using namespace std;

vector<int> Twosum(vector<int>& arr,int t){vector<int> ans;
int n=arr.size();
unordered_map<int,int> map;
for(int i=0;i<n;i++)
{
    if(map.find(t-arr[i])!=map.end()){
        ans.push_back(map[t-arr[i]]);
        ans.push_back(i);
    }map[arr[i]]=i;
}
}
int main()  {
    
return 0;
}