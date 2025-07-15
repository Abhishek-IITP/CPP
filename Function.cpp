#include <iostream>
using namespace std;

// int power(){
//     int a, b;
//     cin>>a>>b;
//     int ans=1;
//     for(int i=1;i<=b;i++){
//         ans= ans * a;
//     }
//     return ans;
// }

// int main(){
//     // int a,b;
//     int answer= power();
//     cout<<"the answer is "<<answer<<endl;

//     return 0;
// }


// bool isEven(int a){
    
//     if(a&1){
//         return 0;
//     }
//      return 1;
// }

// int main(){
//     int num ;
//     cin>>num;

//     if(isEven(num)){
//         cout<<"Even number"<<endl;
//     }
//     else cout<<"odd number"<<endl;

//     return 0;
// }

// int factorial(int n){
//     int fact=1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact=fact * i;
//     }
//     return fact;
    
// }
// int nCr(int n, int r){

//     int num = factorial(n);
//     int deno= factorial(r) * factorial(n-r);
//     int ans= num/deno;
//     return ans;

// }
// int main(){
//     int n,r;
//     cin>>n>>r;
//     cout<<"Answer is "<< nCr(n,r)<<endl;

//     return 0;
// }


// void printCounting(int n){
//     for(int i=1;i<=n;i++){
//         cout<<i<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;

//     printCounting(n);

//     return 0;

// }


// bool isPrime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int n;
//     cin>>n;
//     if (isPrime(n)){
//         cout <<n<<" is a prime number"<<endl;
//     }

//     return 0;

// }


/*AP= 3*n +7*/


// int ap(int n){
//     int final = (3*n+7);
//     return final;

// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<ap(n)<<endl;
//     return 0;
// }


// int countBits(int n){

//     for (int i = 0; i <=n; i++)
//     {
//         int sum=0;
//         int num=i;
//         while (n!=0)
//         {
//             sum += num % 2;
//             num = num / 2;
//         }  
//         cout<<i<<sum<<endl;  
//     }
    

// }
// int main(){
//     int n;
//     cin>>n;
//     countBits(n);

//     return  0;

// }


int update(int a){
    a-=5;
    return a;

}

int main(){
    int a=15;
    int as=update(a);
    cout<<as<<endl;
    cout<<a<<endl;

    return 0;
}