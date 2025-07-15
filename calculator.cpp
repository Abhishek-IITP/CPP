#include <iostream>;
using  namespace std;

int main(){
    int a,b;
    cin>>a;
    cout<<"Enter the value of a "<<a<<endl;
    cin>>b;
    cout<<"Enter the value of b "<<b<<endl;

    char op;
    cin>>op;
    cout<<"Enter the operations you want to perform"<<op<<endl;
    
    switch (op)
    {
    case '+': cout<<(a+b)<<endl;
    break;
    case '-':cout<<(a-b)<<endl;
    break;
    case '*':cout<<(a*b)<<endl;
    break;
    case '%':cout<<(a%b)<<endl;
    break;
    case '/':cout<<(a/b)<<endl;
    break;
    default:
    cout<<"Please enter a valid operation "<<endl;
        break;
    }

    return 0;
}