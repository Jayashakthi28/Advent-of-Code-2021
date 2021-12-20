#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream f;
    f.open("inp.txt");
    vector<string> v;
    string s,gamma="",epsilon="";
    while(getline(f,s)){
        v.push_back(s);
    }
    int size=v[0].length(),curr_pos=0,one_pos=0,zero_pos=0;
    while(curr_pos<size){
        for(int i=0;i<v.size();i++){
            char c=v[i][curr_pos];
            (c=='1')?one_pos++:zero_pos++;
        }
        if(one_pos>zero_pos){
            gamma+='1';
            epsilon+='0';
        }
        else{
            gamma+='0';
            epsilon+='1';
        }
        one_pos=0;
        zero_pos=0;
        curr_pos++;
    }
    cout<<stoi(gamma,0,2)*stoi(epsilon,0,2);
}