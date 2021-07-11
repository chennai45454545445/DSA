// Given Two Array A[] ,B[] ,Both are equal size. Task Sort B[] According to A[].

// A[] ={2,1,4,3}
//B[] ={B,C,D,H}

#include<bits/stdc++.h>
using namespace std;

void sort_pair(int a[],int b[],int n){
	pair<int ,char>p[n];
	for(int i=0;i<n;i++){
		p[i].first=a[i];
		p[i].second=b[i];
	}
	
	sort(p,p+n); //----> &p->first element+size
	
	for(int i=0;i<n;i++){
		b[i]=p[i].second;
	}
	for(int i=0;i<n;i++){
		cout<<p[i].first<<" "<<p[i].second<<endl;;
		
	}
	
	
}


int main(){
	int a[]={2,1,4,3};
	int b[]={'B','C','D','H'};
	int n=sizeof(a)/sizeof(a[0]);
	sort_pair(a,b,n);
	return 0;
}
