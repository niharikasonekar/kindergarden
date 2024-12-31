// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
    
int targetsum(int arr[],int n , int target){
    for( int i=0;i<=n;++i){
        for(int j=i+1;j<=n; j++){
            if(arr[i]+arr[j]==target){
                cout<<i <<j;
            }
        }
    }
    return 0;
}



int main(){
    int arr[]={1,2,5,6,7};
    int target=12;
    int n=4;
    targetsum(arr,n,target);
    
}

