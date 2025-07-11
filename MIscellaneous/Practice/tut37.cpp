#include<bits/stdc++.h>

using namespace std;

int main (){
    string s;
    getline(cin , s);
    for (auto& x : s) {
        x = tolower(x);
    }
    string ans = "";
    for(auto &x : s){
        if(x!=' ') ans.push_back(x);
    }
    bool pal = true;
    int i = 0;
    while(i < ans.size()/2){
        if(i != ans.size() - i){
            pal = false;
            break;
        }else{
            i++;
        }
    }
    cout << pal << " ";
  

}