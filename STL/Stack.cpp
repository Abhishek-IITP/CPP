#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string>s;
    s.push("Abhishek");
    s.push("Kumar");
    s.push("Mohanty");

    cout<<"Top Element -> "<< s.top()<<endl;
    cout<<"Size of Stack -> "<< s.size()<<endl;
    
    s.pop();

    cout<<"Top Element -> "<< s.top()<<endl;
    cout<<"Size of Stack -> "<< s.size()<<endl;
}