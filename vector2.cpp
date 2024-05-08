#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    t--;
	    int n;
	    cin>>n;
	    vector<int> al(n);
	    vector<int> bo(n);
	    for(int i =0;i<n;i++){
	        int k;
	        cin>>k;
	        al[i]=k;
	    }
	    for(int i=0;i<n;i++){
	        int k;
	        cin>>k;
	        bo[i]=k;
	    }
	    
	    int happy=0;
	    
	    for(int i=0;i<n;i++){
	        if(al[i]<=(2*bo[i]) && bo[i] <= (2*al[i])){
	            happy++;
	        }
	    }
	    cout<<happy<<endl;
	    
	}
	

}
