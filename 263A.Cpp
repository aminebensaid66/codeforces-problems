#include <iostream>
using namespace std;
#include <vector>
int main(){
int x,y;
vector<vector<int>> m(5, vector<int>(5));
for(int i=1;i<=5;i++){
    for (int j=1;j<=5;j++){
        cin>>m[i][j];
        if(m[i][j]==1){
            x=i;
            y=j;
        }
        }
}
int s=0;
if(x>3)s=s+(x-3);
else s=s=(3-x);
if(y>3)s=s+(y-3);
else s=s=(3-y);
}