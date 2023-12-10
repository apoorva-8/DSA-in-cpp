#include<iostream>
using namespace std;
int main(){
    int i,j,k,l,n,count=1;
    cout<<"enter n = ";
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        /* code  equilateral triangle*/
        for ( j = 1; j <=n-i; j++)
        {
            cout<<" ";
            
        }
        for ( k = 1; k <=i;k++)
        {
            cout<<"*";

        }
        for (  j = k; j >0; j--)
        {
            cout<<"1";
        }
        
        cout<<endl;
    }
    
}
