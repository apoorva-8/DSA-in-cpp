#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n=4;
    int m=6;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if((i+j)%2==0){
                cout<<1;
            }else{
                cout<<2;
            }
        }cout<<endl;
    }
}