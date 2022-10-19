#include<bits/stdc++.h>
using namespace std;
int Anagram(string s,string t){
    if(s.size()!=t.size()){
        return 0;
    }
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    return s==t;
}
int main(){
    string s;
    string t;
    cin>>s>>t;
    cout<<Anagram(s,t);
    return 0;
}
