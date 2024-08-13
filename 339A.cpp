#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <vector>
using namespace std;

int main() {
    string ch1,ch2;
    cin>>ch1;
    ch1+="+";
    vector<int> t={};
    int i=0;
    int x;
    while(ch1.length()!=0) {
        ch2=ch1.substr(0,ch1.find("+"));
        ch1=ch1.erase(0,ch1.find("+")+1);
        t.push_back(stoi(ch2));
        i++;
    }
    sort(t.begin(),t.end());
    string res="";
    for(int j=0;j<i;j++) {
        res=res+to_string(t[j])+"+";
    }
    res=res.erase(res.rfind("+"));
    cout<<res;
    return 0;
}