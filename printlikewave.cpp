#include<iostream>
using namespace std;

void wave(int arr[][3],int row,int col)
{
    for(int col=0;col<3;col++)
    {
        if(col&1)
        {                               //odd index ->bottom to top print
        for(int row=row-1;row>=0;row--)
        {
          cout<<arr[row][col]<<" ";
        }cout<<endl;
        }
        else{                           //even index ->top to bottom print
            for(int row=0;row<row;row++)
            {
                 cout<<arr[row][col]<<" ";
            }cout<<endl;
        }
        
   }
}
    

int main()
{
   int arr[3][3]={1,2,3,4,5,6,7,8,9};
    wave(arr,3,3);
}