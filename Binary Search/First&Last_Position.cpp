#include <iostream>
using namespace std;

int firstOccurrence (int arr[], int size, int key){
    int s=0, e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s<=e)
    {
        if (arr[mid]== key)
        {
            ans = mid;
            e= mid-1;
        }
        else if(key> arr[mid]){
            s= mid + 1;
        }
        else {
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int lastOccurrence (int arr[], int size, int key){
    int s=0, e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s<=e)
    {
        if (arr[mid]== key)
        {
            ans = mid;
            s= mid+1;
        }
        else if(key> arr[mid]){
            s= mid + 1;
        }
        else {
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int arr[6]={0,5,5,6,6,6};
    int key = 5;
    int first= firstOccurrence(arr, 6, key);
    int last= lastOccurrence(arr, 6, key);
    if(first != -1 && last != -1){
        cout<<"First Occurrence of 6 exists at Index of "<<first<<endl;
        cout<<"Last Occurrence of 6 exists at Index of "<<last<<endl;
    }
    else{
        cout<<"Element not Found."<<endl;
    }
    return 0;
}