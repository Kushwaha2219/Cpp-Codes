//leaders in an array
#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	cout<<"Enter Number of elements"<<endl;
	cin>>n;
	int arr[10];
	cout<<"Enter elements of array"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
	cout<<endl<<"Leaders of array are:-"<<endl;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				break;
			}		
		}
		if(j==n){
			cout<<" "<<arr[i];
		}
	}
	return 0;
}
