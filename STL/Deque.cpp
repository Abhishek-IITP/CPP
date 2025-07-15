#include <iostream>
#include <deque> 
using namespace std;

int main(){

    deque<int>d;

    d.push_back(1);
    d.push_front(2);

    // for (int i : d)
    // {
    //     cout<<i<<" ";
    // }

    // d.pop_back();
    // cout<<endl;
    //     for (int i : d)
    // {
    //     cout<<i<<" ";
    // }

    cout<<"Print First Index Element -> "<< d.at(1)<<endl;
    cout<<"Print Front Element -> "<< d.front()<<endl;
    cout<<"Print last Element -> "<< d.back()<<endl;
    
    cout<<"Print Size Before erase -> "<< d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"Print Size after erase -> "<< d.size()<<endl;
    
    for(int i :d ){
        cout<<i<<endl;
    }
}
