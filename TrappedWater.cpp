long long trappingWater(int arr[], int n){
          long long l=0;long long r=n-1;
          long long lmax=0;
          long long rmax=0;
          long long result=0;
          while(l<=r){
                  if(arr[l]<=arr[r]){
                      if(arr[l]>=lmax){
                          lmax=arr[l];
                        
                      }
            else {
                result=result+lmax-arr[l];
            }
            l++;
                  }
                  else{
                     if(arr[r]>=rmax){
                         rmax=arr[r];
                     }
                     else{result=result+rmax-arr[r];
                     }
                         r--;
                  }
              }
          return result;