#include <iostream>
using namespace std;
#include <vector>
int main(){
int n;
cin>>n;
int x=0;
string ch;
for(int i=0;i<n;i++){
cin>>ch;
if(ch[0]=='X'){
ch=ch[1];
}
if(ch[0]=='+')x++;
else x--;


}
cout<<x;
}