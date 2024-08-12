#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main() {
    int z;
    cin >> z;
    int n;
    vector <int>a(z);
    for(int k = 0; k < z; k++) {
        cin >> n;
        vector<int> t(n);
        for(int i = 0; i < n; i++) {
            cin >> t[i];
        }
        vector<int> m(n-1);
        int j=0;
        for(int i=0;i<(n-1);i=i+1){
            if(t[i]>t[i+1])m[j]=t[i];
            else m[j]=t[i+1];
            j=j+1;
        }
        sort(m.begin(),m.end());
        a[k]=m[0]-1;
    }
    for(int i=0;i<z;i++){
        cout<<a[i]<<endl;
    }
    return 0;
//thanks for reading the code 3>
}
