
#include<bits/stdc++.h>
using namespace std;


int main(){
	int arr[]={1,5,4,3,8,6,7,2,10,9};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	sort(arr,arr+n,greater<int>());
	
	cout<<"Array Sort in Decending Order"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
	
}
