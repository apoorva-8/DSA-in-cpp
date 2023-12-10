# include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,int>> pairs1;
    
    pairs1.push_back(pair<int,int>(1,10));
    pairs1.push_back(pair<int,int>(2,20));
    pairs1.push_back(pair<int,int>(3,30));

    for(int i=0;i<pairs1.size();i++){

        cout<<pairs1[i].first<<"  "<<pairs1[i].second<<endl;
    }
}