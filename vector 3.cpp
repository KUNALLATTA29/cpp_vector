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
	    for(int i=0;i<n;i++){
	        int k;
	        cin>>k;
	        arr[i]=k;
	    }
	    int min=arr[0];
	    for (int num: arr){
	        if(min>num){
	            min=num;
	        }
	    }
	    int sum=0;
	    for(int i=0; i<n;i++){
	        if(arr[i]!=min){
	            sum+=1;
	        }
	    }
	    cout<<sum<<endl;
	}

}
