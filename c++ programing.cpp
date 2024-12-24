// Online C++ compiler to run C++ program online
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int arr[]={10,20,5,9,10};
    for(int i=0;i<5;++i)
    {
        if(arr[i+1]-arr[i]>1)
        {
            for(int j=arr[i]+1;j<arr[i+1];++j)
            {
                cout<<j;
        }
    }
}
}
