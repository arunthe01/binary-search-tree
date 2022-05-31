#include<bits/stdc++.h>
#include<vector>
using namespace std;

  pair<long,long> indexes(vector<long long> arr, long long x)
    {
        int low = 0;
        int high = arr.size()-1;
        pair<long,long> p;
        
       
            while(low<=high){
            int mid = (low+high)/2;
            
            if(arr[mid] >= x)
                high = mid-1;
                
            else 
                low = mid+1;
            }
            
            if(arr[low] == x)
                 p.first = low;
            else
                return {-1,-1};
            
           
            
         low = 0;
         high = arr.size()-1;
        
            while(low<=high){
            int mid = (low+high)/2;
            
            if(arr[mid] <= x)
                low = mid+1;
                
            else 
                high = mid-1;
            }
            
            if(arr[high] == x){
                p.second = high;
                return p;
            }
            
    }
    
    int main(){
        vector<long long> v = {1, 3, 5, 5, 5, 5, 67, 123, 125};
        pair<long, long> p;
        p=indexes(v,5);
        cout<<p.first<<" "<<p.second;
    }
