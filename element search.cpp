#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t>0){
	    t--;
	    int items_in_shop, coupon_price, discounted_rupee;
	    cin>>items_in_shop>>coupon_price>>discounted_rupee;
	    
	    vector<int> arr(items_in_shop);
	    
	    for(int i=0;i<items_in_shop;i++){
	        int k;
	        cin>>k;
	        arr[i]=k;
	    }
	    int sum1=0;
	    for(int num: arr){
	        sum1+=num;
	    }
	    int without_disc = sum1;
	    int with_disc;
	    vector<int> zoom(items_in_shop);
	    
	    for(int i=0;i<items_in_shop;i++){
	        int diff=arr[i]-discounted_rupee;
	        zoom[i]= (diff<0) ? 0 : diff;
	    }
	    int sum2=0;
	    for(int num:zoom){
	        sum2+=num;
	    }
	    with_disc=sum2;
	    
	    with_disc+=coupon_price;
	    if(with_disc<without_disc){
	        cout<<"COUPON"<<endl;
	    }else{
	        cout<<"NO COUPON"<<endl;
	    }
	}

}
