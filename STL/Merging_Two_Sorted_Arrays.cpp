/*
input = 5
1 3 5 7 9
4
2 4 6 8

output = Merged sorted array: 1 2 3 4 5 6 7 8 9 
*/


// CODE

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n1, n2;
    
    cin >> n1;
    vector<int> arr1(n1);
    
    for (int i = 0; i < n1; i++) {
        std::cin >> arr1[i];
    }
    
    cin >> n2;
    vector<int> arr2(n2);
    
    for (int i = 0; i < n2; i++) {
        std::cin >> arr2[i];
    }
    
    vector<int> result(n1 + n2);
    

    merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), result.begin());
    
    cout << "Merged sorted array: ";
    for (int i : result) {
       cout << i << " ";
    }
    
    return 0;
}
