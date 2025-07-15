#include <iostream>
using namespace std;

int main(){
    int number= 1380;


    int hundred = number/100;
    number=number%100;

    int fifty = number/50;
    number = number%50;

    int twenty = number/20;
    number=number%20;

    int ones= number/10;

    cout<<"100rs note: "<<hundred<<endl;
    cout<<"50rs note: "<<fifty<<endl;
    cout<<"20rs note: "<<twenty<<endl;
    cout<<"10rs note: "<<ones<<endl;

}