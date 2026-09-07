#include<iostream>
using namespace std;
int main()
{
    int a, b, lcm;
    cout<<"Enter two no";
    cin>>a>>b;
    int LCM;
    for(int i=1; i<=a*b; i++)
    {
        if(i%a==0&&i%b==0)
        {
            lcm = i;
            break;
        }
    }
    cout<<lcm;
    return 0;




}