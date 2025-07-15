#include <iostream>
#include <vector> 
//vector ka jab storage full ho jata h tb woh khud ke existing size ke double size ka ek vector banata h aur previous vector ke sare value ko new me dal deta h aur previous vector ko dumb kr deta h

using namespace std;

int main(){
    vector<int>v;
    cout<<"Size ->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size ->"<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"Size ->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size ->"<<v.capacity()<<endl;

    cout<<"Element at 2nd Index ->"<< v.at(2)<<endl;

    cout<<"Front Element ->"<< v.front()<<endl;
    cout<<"Last Element ->"<< v.back()<<endl;
 
    
}