#include<iostream>
using namespace std;
int main()
{
    int arr[2][2]={
        {15,18},
        {10,20}
    };

    for(int j=0; j<2; j++)
    {
        int sum=0;
        for(int i=0; i<2; i++)
        {
            sum=sum+arr[i][j];
        }
        cout<<"sum of each Column "<<j+1<<"="<<sum<<endl<<endl;
    }
    cout<<endl<<endl;
    return 0;
}