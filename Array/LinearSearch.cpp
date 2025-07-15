#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool search(int arr[] , int size, int key){

    for (int i = 0; i < size; i++)
    {
       if(arr[i]==key){

           return 1;
       };
    }
    return 0;
    

}
int main(){
    int arr[10]={3,4,9,2,-2,-4,92,43,1,22};

    int key;
    cin>>key;

    bool found=search(arr,10,key);

    if(found){
        cout<<"number is present in the array"<<endl;
    }
    else cout<<"Number is not present in the array "<<endl;
    return 0;
}