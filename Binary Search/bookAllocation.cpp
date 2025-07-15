bool isPossible(vector<int> arr, int n, int m, int mid){
    int studentCount=1;
    int pageSum=0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i]<= mid)
        {
            pageSum += arr[i];
        }
        else {
            studentCount++;
            if (studentCount>m || arr[i]>mid)
            {
                return false;
            }
            pageSum = arr[i];    
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m){
    int s =0;
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum+= arr[i];
    }
    int ans = -1;
    int e = sum;
    int mid = s+ (e-s)/2

    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans= mid;
            e= mid -1; 
        }
        else s= mid+1;
        mid = s+ (e-s)/2
    }
    return ans;
    
}