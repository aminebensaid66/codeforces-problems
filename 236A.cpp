#include <iostream>
using namespace std;
#include <set>
int main() {
    set<char> s;
    string ch;
    cin>>ch;
    for(int i=0;i<ch.length();i++) {
        if(s.count(ch[i])==0) s.insert(ch[i]);
    }
    if(s.size()%2==0)cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
}