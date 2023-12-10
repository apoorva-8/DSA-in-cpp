#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v(10);
    for(int i =0; i<v.size(); i++){
        cout<<"Enter 10 elements: ";
        cin>>v[i];

    }
    int sum1=0;
    int sum2=0;
    int result;
    for(int i=0; i<v.size(); i+=2){
        sum1 = v[i] + sum1;
    }
    for(int j=1; j<v.size(); j+=2){
        sum2 = v[j]+sum2;
    }
    result= sum1 - sum2;
    cout<<result;
}