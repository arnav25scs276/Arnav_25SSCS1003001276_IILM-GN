
#include <iostream>
using namespace std;
int main()
    {
        int a,b,c;
        cout<<"Enter first number\n";
        cin>>a;
        cout<<"Enter second number\n";
        cin>>b;
        cout<<"Enter third number\n";
        cin>>c;
        if(a>b&&a>c)
        cout<<a<<" is greater";
        else if(b>a&&b>c)
        cout<<b<< "is greater";
        else
        cout<<c<< "is greater";
    }
