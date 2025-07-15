#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<string>q;

    q.push("Abhishek");
    q.push("Kumar");
    q.push("Mohanty");

    cout<<"First Element -> "<<q.front()<<endl;
    cout<<"Size of Queue -> "<<q.size()<<endl;
    q.pop();
    cout<<"First Element -> "<<q.front()<<endl;
    cout<<"Size of Queue -> "<<q.size()<<endl;
}