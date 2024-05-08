#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            arr[i]=k;
        }
        
        int f=arr[0];
        int no_de = true;
        
         for (int i = 1; i < n; i++) {
            if (arr[i] < f) {
                no_de = false;
                break;
            }
            f = arr[i];
        }
        
        if(no_de){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

}
