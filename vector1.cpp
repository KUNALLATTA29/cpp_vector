#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t>0){
	    t--;
	    int num_items, min_fresh;
	    cin>>num_items>>min_fresh;
	    vector<int> fress_value(num_items);
	    for(int i=0;i<num_items;i++){
	        int k;
	        cin>>k;
	        fress_value[i]=k;
	    }
	    vector<int> cost_items(num_items);
	    for(int i=0;i<num_items;i++){
	        int k;
	        cin>>k;
	        cost_items[i]=k;
	        
	    }
	    int sum=0;
	    for (int i=0; i<num_items;i++){
	        if(fress_value[i]>=min_fresh){
	            sum+=cost_items[i];
	        }
	    }
	    cout<<sum<<endl;
	}

}
