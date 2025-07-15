#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n){
    int add=0;
    for (int i = 0; i < n; i++)
    {
       add+=arr[i];
    }
 return add;   

}

int main(){
    int size=5;
    int arr[size]={2,4,6,8,10};
    // int sum=0;
    // for (int i = 0; i <size; i++)
    // {
    //     sum+=arr[i];
    // }
    cout<<sum(arr,size)<<endl;
    

    return 0;
}