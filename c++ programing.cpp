// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
int arr[]={1,2,3,2,1};
for(int i=0;i<5;++i)
{
    bool dup=false;
    for(int j=i+1; j<5; ++j)
    {
        if(arr[i]==arr[j] && arr[i]!=-1)
        {
            arr[j]=-1;
            dup=true;
            
        }
    }
    if(dup)
    {
        cout<<arr[i];
    }
}
}