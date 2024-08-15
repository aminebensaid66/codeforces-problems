#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    string ch1,ch2;
    cin>>ch1;
    ch2=ch1[0];
    transform(ch2.begin(),ch2.end(),ch2.begin(),::toupper);
    ch2=ch2+ch1.substr(1);
    cout<<ch2;

}