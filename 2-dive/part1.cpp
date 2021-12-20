#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream f;
    f.open("inp.txt");
    string s;
    int forward=0,depth=0;
    while (getline(f,s))
    {
        int flag=0;
        string word="",num="";
        for(auto x:s){
            if(flag==0 && x!=' '){
                word+=x;
            }
            if(x==' '){
                flag=1;
            }
            if(flag==1){
                num+=x;
            }
        }
        int number=stoi(num);
        if(word=="forward"){
            forward+=number;
        }
        if(word=="up"){
            depth-=number;
        }
        if(word=="down"){
            depth+=number;
        }      
    }
    cout<<depth*forward;
}