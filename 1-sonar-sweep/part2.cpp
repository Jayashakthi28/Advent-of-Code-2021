#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream f;
    string s;
    vector<int> v;
    f.open("inp.txt");
    while(getline(f,s)){
        int t=stoi(s);
        v.push_back(t);
    }
    int prev=v[0]+v[1]+v[2],curr,cnt=0;
    for(int i=3;i<v.size();i++){
        curr=prev-v[i-3]+v[i];
        if(prev<curr){
            cnt++;
        }
        prev=curr;
    }
    cout<<cnt;
}