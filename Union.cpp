
        #include <iostream>
        #include <string.h>
        using namespace std;
        union Student
           {
                char name[200];
                int rollno;
                float marks;
            };
            int main()
            {
                union Student obj;
                strcpy(obj.name,"Nemonet TYP");
                obj.rollno=205;
                obj.marks=85.4;
                cout<<"Name="<<obj.name<<"\n";
                cout<<"Rollno="<<obj.rollno<<"\n";
                cout<<"Marks="<<obj.marks<<"\n";
            }


            // ### output ###
            // Name=garbage
            // Rollno=garbage
            // Marks=85.4


