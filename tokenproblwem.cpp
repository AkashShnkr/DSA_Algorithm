#include<bits/stdc++.h>
using namespace std;
int bagOfTokensScore(vector<int>& tokens, int power) {
      sort(tokens.begin(),tokens.end());
      if(tokens[0]>power)
      {
          return 0;
      }
      int i=1;int score=0;
      int n=tokens.size();
      int j=n-1;

      while(i<=j){
          if(tokens[i]<=power){
              score++;
              power=power-tokens[i];i++;
          }
          else if(power<=tokens[j]){
              score--;
              power=power+tokens[j];
              j--;

          }
          else{
            return score;
          }
      }
   return score; }
int main()  {
vector<int> arr{200,100};
int power=150;

    int r=bagOfTokensScore(arr,power);
    cout<<r;
return 0;
}