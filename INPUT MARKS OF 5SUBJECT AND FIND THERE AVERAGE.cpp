//here each subject be Physics=p, Chemistry=c, Math=m, Geography=g, English=e
#include <iostream>
using namespace std;
int main()
    {
        float p,c,m,g,e,avg;
        cout<<"Enter marks in physics\n";
        cin>>p;
        cout<<"Enter marks in chemistry\n";
        cin>>c;
        cout<<"Enter marks in math\n";
        cin>>m;
        cout<<"Enter marks in geography\n";
        cin>>g;
        cout<<"Enter marks in english\n";
        cin>>e;
        avg=(p+c+m+g+e)/5;
        cout<<"Average of result="<<avg;
    }