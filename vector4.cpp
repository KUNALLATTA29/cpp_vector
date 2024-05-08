#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t>0){
	    t--;
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    
	    for(int i=0;i<n; i++){
	        int k;
	        cin>>k;
	        arr[i]=k;
	    }
	    int max1=0;
	    int max2=0;
	     for (int i = 0; i < n; i++) {
            if (arr[i] > max1) {
                max2 = max1;
                max1 = arr[i];
            } else if (arr[i] > max2 && arr[i] != max1) {
                max2 = arr[i];
            }
        }
	    
	    
	    cout<<max1+max2<<endl;
	    
	}

}
