#include <iostream>
using namespace std;
#include <vector>
int main(){
int n;
cin>>n;
vector<string>t(n);
for(int i=0;i<n;i++){
    string ch;
    cin>>ch;
    if(ch.length()>10){
    t[i]=ch[0]+to_string(ch.length()-2)+ch[ch.length()-1];;}
    else{
        t[i]=ch;
    }
}
for(int i=0;i<n;i++){
    cout<<t[i]<<endl;
}
return 0;
}
