/*
a=[1,3,5] b=[2,4,6]
add=[3,7,11]
sub=[-1,-1,-1]
*/

#include <iostream>
using namespace std;
int main()
{
    int numbers[3];
    int a[3];
    int b[3];
    int add[3],sub[3];

    cout<<"enter 3 integers for array a:"<<endl;
    for(int i=0;i<3;i++) 
    {
        cin>>a[i];
    }
     cout<<"enter 3 integers for array b:"<<endl;
    for(int i=0;i<3;i++) 
    {
        cin>>b[i];
    }
    cout<<"addition of a and b:"<<endl;
    for(int i=0;i<3;i++)
    {
        add[i]=a[i]+b[i];
        cout<<add[i]<<" ";

    }
    cout<<"subtraction of a and b:"<<endl;
    for(int i=0;i<3;i++)
    {
        sub[i]=a[i]-b[i];
        cout<<sub[i]<<" ";
    }
    return 0;
} 