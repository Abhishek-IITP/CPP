#include <iostream>
using namespace std;

// int main()
// {
//     int num = 1;
//     int ch = '1';
//     switch (num)
//     {
//     case 1:switch (ch){
//         case '1':cout << "Value of num is " << num << endl;
//             break;
//         }
//         break;
//     case 2:cout << "Second" << endl;
//         break;
//     default:
//         cout << "It is a default case" << endl;
//     }

//     cout << endl;
//     return 0;
// }

int main(){
    for(int i=0;i<5;i++){
        switch (i)
        {
        case 0 :
        cout<<"Form 0"<<endl;
        continue;
        case 1 :
        cout<<"Form 1"<<endl;
        break;
        case 2 :
        cout<<"Form 2"<<endl;
        continue;
        default:
        cout<<"default case"<<endl;
            break;
        }
        cout<<"break hone ke baad"<<endl;
    }
    return 0;
}