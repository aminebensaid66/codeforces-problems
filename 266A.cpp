#include <iostream>
using namespace std;
int main() {
    string ch;
    int n;
    cin>>n>>ch;
    int x =0;
    int i=0;
    while(i<n-1) {
        while(ch[i]==ch[i+1]){x++;i++;}
        i++;
    }
    cout<<x;




}