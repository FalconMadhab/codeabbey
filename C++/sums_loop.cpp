#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr1[30],arr2[30],sum[30]={0},num;
	cout<<"Enter the number of pairs to be added\n";
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>arr1[i];
		cin>>arr2[i];
		sum[i] = arr1[i]+arr2[i];
	}
	cout<<"The results are : \n ";
	for(int i=0;i<num;i++){
		cout<<sum[i]<<"\t";
	}
}
