#include <iostream>
using namespace std;
#include <vector>
int main(){
int n,k;
cin>>n>>k;
int s=0;
vector<int>t(n);
for(int i=0;i<n;i++){
    cin>>t[i];
}
k--;
for(int i=0;i<n;i++){
    if(t[k]==0 &&t[i]>t[k] ){
        s++;
}
else{
    if(t[k]!=0 && t[i]>=t[k])s++;
}}
cout<<s;
}