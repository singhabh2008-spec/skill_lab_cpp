#include <iostream>
using namespace std;
class student{
    public:
    int Rollno;
    int marks;
    string name;

};
int main()
{
    student obj;
    obj.marks=40;
    obj.name="BCA";
    obj.Rollno=5;

    cout<<obj.name<<endl;
    cout<<obj.marks<<endl;
    cout<<obj.Rollno;
    return 0;
}