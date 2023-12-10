#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> line(5);
    int i;
    for(i=0;i<line.size();i++){
        cin>>line[i];
    }
    for(i=0;i<line.size();i++){
        if(line[i]>line[i+1]){
            cout<<"Not sorted"; 
        }
    }
}
