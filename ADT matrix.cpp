#include<iostream>
using namespace std;

class Matrix
{
    int a[10][10], r, c;

public:

    void read()
    {
        cout<<"Enter rows and columns: ";
        cin>>r>>c;
        cout<<"Enter elements:\n";
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>a[i][j];
            }
        }
    }

    void print()
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    Matrix add(Matrix m)
    {
        Matrix t;
        t.r=r;
        t.c=c;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                t.a[i][j]=a[i][j]+m.a[i][j];
            }
        }
        return t;
    }

    Matrix sub(Matrix m)
    {
        Matrix t;
        t.r=r;
        t.c=c;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                t.a[i][j]=a[i][j]-m.a[i][j];
            }
        }
        return t;
    }

    Matrix mul(Matrix m)
    {
        Matrix t;
        t.r=r;
        t.c=m.c;
        for(int i=0;i<t.r;i++)
        {
            for(int j=0;j<t.c;j++)
            {
                t.a[i][j]=0;
                for(int k=0;k<c;k++)
                {
                    t.a[i][j]+=a[i][k]*m.a[k][j];
                }
            }
        }
        return t;
    }
};

int main()
{
    Matrix m1,m2,m3;

    cout<<"Enter first matrix\n";
    m1.read();

    cout<<"Enter second matrix\n";
    m2.read();

    cout<<"Matrix 1\n";
    m1.print();

    cout<<"Matrix 2\n";
    m2.print();

    m3=m1.add(m2);
    cout<<"Addition\n";
    m3.print();

    m3=m1.sub(m2);
    cout<<"Subtraction\n";
    m3.print();

    m3=m1.mul(m2);
    cout<<"Multiplication\n";
    m3.print();

    return 0;
}