#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream f;
    int prev,curr,cnt=0;
    f.open("inp.txt");
    string s;
    getline(f,s);
    prev=stoi(s);
    while(getline(f,s)){
        curr=stoi(s);
        if(prev<curr){
            cnt++;
        }
        prev=curr;
    }
    cout<<cnt;
}