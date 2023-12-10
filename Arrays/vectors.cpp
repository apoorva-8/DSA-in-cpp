#include<iostream>
using namespace std;
int main(){
    int i;int j;int count=0;
    int arr[]={3,4,5,2,1,3};
    int target = 6;
    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
            if(arr[i]+arr[j]==target){
                count++;
            }
        }
    }cout<<count;
}