#include<iostream>
using namespace std;
int main()
{
    int arr[2][2]={
        {15,18},
        {10,20}
    };
    int sum=0;

    for(int i=0; i<2; i++)
    {
        
        for(int j=0; j<2; j++)
        {
            sum=sum+arr[i][j];
        }
    }
        cout<<"sum of all no = "<<sum<<endl;
    
    
    return 0;
}