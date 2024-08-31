#include<iostream>
using namespace std;

int main() 
{
    const int i=3,j=3;
    cout<<i<<endl;
    int arr[i][j]={{1,2,3},
                    {4,5,6},
                    {7,8,9}};
    for (int i = 0; i < 3; i++) {
        for(int j=0;j<3;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        /* code */
    }
    int brr[i][j]={{5,4,3},{4,3,2},{3,4,7}};
    cout<<"\n"<<endl;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum[i][j];
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            sum[i][j]=arr[i][j] + brr[i][j];
        }
    }

    cout<<"Summation matrix:\n"<<endl;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Thank You."<<endl;
    return 0;
}