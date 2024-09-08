#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string ch1,ch2;
    cin>>ch1>>ch2;
    transform(ch1.begin(),ch1.end(),ch1.begin(),::toupper);
    transform(ch2.begin(),ch2.end(),ch2.begin(),::toupper);
    if(ch1>ch2) cout<<1;
    if(ch2>ch1)cout<<-1;
    if(ch1==ch2)cout<<0;

    return 0;


}
