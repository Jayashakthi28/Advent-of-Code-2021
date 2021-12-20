#include<bits/stdc++.h>
using namespace std;

string numReturner(int size,vector<string> v1){
        int j=0;
        string oxy;
        while(j<=size){
            int zero_cnt=0,one_cnt=0;
            vector<string> zero_arr,one_arr;
            for(int i=0;i<v1.size();i++){
                if(v1[i][j]=='0'){
                    zero_cnt++;
                    zero_arr.push_back(v1[i]);
                }
                else{
                    one_cnt++;
                    one_arr.push_back(v1[i]);
                }
            }
            if(zero_cnt>one_cnt){
                if(zero_arr.size()==1){
                    oxy=zero_arr[0];
                    break;
                }
                else{
                    v1=zero_arr;
                }
            }
            else if(zero_cnt<one_cnt){
                if(one_arr.size()==1){
                    oxy=one_arr[0];
                    break;
                }
                else{
                    v1=one_arr;
                }
            }
            else{
                v1=one_arr;
                oxy=v1[0];
            }
            j++;
        }
        return oxy;
}

string coReturner(int size,vector<string> v1){
        int j=0;
        string oxy;
        while(j<=size){
            int zero_cnt=0,one_cnt=0;
            vector<string> zero_arr,one_arr;
            for(int i=0;i<v1.size();i++){
                if(v1[i][j]=='0'){
                    zero_cnt++;
                    zero_arr.push_back(v1[i]);
                }
                else{
                    one_cnt++;
                    one_arr.push_back(v1[i]);
                }
            }
            if(zero_cnt<one_cnt){
                if(zero_arr.size()==1){
                    oxy=zero_arr[0];
                    break;
                }
                else{
                    v1=zero_arr;
                }
            }
            else if(zero_cnt>one_cnt){
                if(one_arr.size()==1){
                    oxy=one_arr[0];
                    break;
                }
                else{
                    v1=one_arr;
                }
            }
            else{
                v1=zero_arr;
                oxy=v1[0];
            }
            j++;
        }
        return oxy;
}

int main(){
    ifstream f;
    f.open("inp.txt");
    vector<string> v1,v2;
    string s,oxy="",co2="";
    while(getline(f,s)){
        v1.push_back(s);
        v2.push_back(s);
    }
    int size=v1[0].length(),j=0;
    oxy=numReturner(size,v1);
    co2=coReturner(size,v1);
    cout<<stoi(oxy,0,2)*stoi(co2,0,2);
}