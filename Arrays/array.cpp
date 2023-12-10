#include<iostream>
using namespace std;
int main(){
    int i;int count=0;
    int arr[]={2,3,4,3,5,3,6,3,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<=size;i++){
        if(arr[i]==3){
            count++;
        }
    }cout<<count;
}
    
