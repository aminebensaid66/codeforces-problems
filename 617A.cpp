#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x=0,i=5;
    while(n!=0) {
        if(n-i>=0) {
            x++;
            n-=i;
        }
        while(n-i<0 && i>=0)i=i-1;
    }
    cout<<x;


}