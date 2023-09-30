#include<iostream>
using namespace std;

int largestsum(int arr[][3],int row,int col)
{
    int max=INT16_MIN;
    int rowindex=-1;
    for(int row=0;row<3;row++)
    {
        int sum=0;
        
        for(int col=0;col<3;col++)
        {
           sum+=arr[row][col];
        }
       if(sum>max)
       {
        max=sum;
        rowindex=row;
       }
    }
    cout<<"maximum sum"<<max<<" ";
    return rowindex;
    }

    

int main()
{
   int arr[3][3]={1,2,3,4,5,6,7,8,9};
cout<<"max index no"<<largestsum(arr,3,3);
}