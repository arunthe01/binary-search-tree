int countZeroes(int arr[], int n) {
        // code here
        
        if(arr[0] == 0)
            return n;
        else if(arr[n-1] == 1)
            return 0;
            
        else{
            int l = 0,h = n-1;
            
            while(l<=h){
                int mid = (l+h)/2;
                
                if(arr[mid] == 1 && arr[mid+1] == 0){
                    return(n-1)-mid;
                }
                
                else if(arr[mid] == 1)
                    l = mid+1;
                
                else
                    h = mid-1;
                
            }
        }
            
    }
