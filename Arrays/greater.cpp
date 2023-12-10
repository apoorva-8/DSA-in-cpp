#include<iostream>
using namespace std;
int greater(int arr[],int count=0,int size,int n){
    for int(i=0;i<size;i++){
        if(arr[i]>n){
            count++
        }
    }
    return count;
}
int main(){
    int size;
    cout<<"Enter the size of array";
    cin>>size;

    int arr size;
    for(i=0;i<size;i++){
        cin>>size;
    }
    int n;
    cout<<"enter the number of elements";
    cin>>n;

    int result= greater(arr,size,n);
    cout<<"no  of elements greater than i "<<result<<endl;
    return 0;
}
