#include<iostream>
using namespace std;

 int main()
 {
   // int arr[3][4];
    // or we can take input like that
    int arr1[3][3]={{1,11,111},{2,22,222},{3,33,3333}};

    //taking input-> row wise
    /*for(int i=0;i<3;i++)
    {
         for(int j=0;j<4;j++)
         {
        cin>>arr[i][j];
        }
    }*/
    // taking input ->colom wise 
    // for(int i=0;i<4;i++)
    // {
    //      for(int j=0;j<3;j++)
    //      {
    //     cin>>arr[j][i];
    //     }
    // }


    // for(int i=0;i<3;i++)
    // {
    //      for(int j=0;j<4;j++)
    // {
    //     cout<<arr[i][j]<<" ";
    // }
    //  cout<<endl;
    // }

    for(int i=0;i<3;i++)
    {
         for(int j=0;j<3;j++)
    {
        cout<<arr1[i][j]<<" ";
    }
     cout<<endl;
    }
   
   

 }