/*
input= 
8  where 8 is no of element
4 3 2 4 1 5 6 1

output =  Enter elements: 1 2 3 4 5 6 
*/



#include<iostream>
#include <set>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    
    std::cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    
    set<int> s(arr.begin(), arr.end());
    
    for (auto it : s) {
        cout << it << " ";
    }
    
    return 0;
}