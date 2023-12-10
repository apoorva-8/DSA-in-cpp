#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n=4;
    for(i=1;i<=n;i++){
        for(j=1;j<=7;j++){
            if(j%2!=0){
                cout<<"*";
                cout<<endl;
            }
            
        }
    }
}