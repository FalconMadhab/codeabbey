#include<bits/stdc++.h>
using namespace std;
int main(){
	int num,sum=0;
	cout<<"Enter how many numbers to be added\n";
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	cout<<"The sum of numbers is "<<sum;
}
