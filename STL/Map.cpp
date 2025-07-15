#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int, string>m;
    m[1]="Abhi";
    m[2]="Shek";
    m[13]= "kumar";

    for(auto i :m){
        cout<<i.first<<endl;
    }
}