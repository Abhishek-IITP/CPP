//          *
//         ***
//        *****
//       *******
//      *********
//     ***********
//    *************
//   ***************
//  *****************
// *******************
// *******************
//  *****************
//   ***************
//    *************
//     ***********
//      *********
//       *******
//        *****
//         ***
//          *



#include<iostream>

using namespace std;

void pattern(int n)
{
	for(int i=1;i<=n; i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=2*i-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
    }
    for(int i=n;i>0;i--)
    {
    	for( int j=1;j<=n-i;j++)
    	{
    		cout<<" ";
    	}
    	for(int j=1;j<=2*i-1;j++)
    	{
    		cout<<"*";
    	}
    	cout<<endl;
    }

}


int main()
{
	int m;
	cin>>m;
	pattern(m);
	return 0;
}