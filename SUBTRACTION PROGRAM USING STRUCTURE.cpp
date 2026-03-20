
    #include <iostream>
    #include <string.h>
    using namespace std;
    struct Arithmetic
    {
        int x;
        int y;
        int z;
    };
    int main()
    {
        struct Arithmetic obj;
        cout<<"Enter first number\n";
        cin>>obj.y;
        cout<<"Enter second number\n";
        cin>>obj.z;
        obj.x=obj.y-obj.z;
        cout<<"Sub="<<obj.x;
    }
        


    // ### output ###
    // Enter first number
    // 65
    // Enter second number
    // 45
    //     Sub=20

