#include<iostream>
using namespace std;

void merge(int *a,int s,int e){
	int temp[1000];
	int i = s;
	int mid = (s+e)/2;
	int j = mid + 1;
	int k = s;

	//Merging Logic
	while(i<=mid && j<=e){
		if(a[i]<a[j]){
			temp[k] = a[i];
			i++;
			k++;
		}
		else{
			temp[k] = a[j];
			j++;
			k++;
		}
	}
	//Some elements of one of the arrays are left 
	while(i<=mid){
		temp[k] = a[i];
		i++; k++;
	}
	//or 
	while(j<=e){
		temp[k] = a[j];
		j++; k++;
	}
	//Copy elements back to the original array
	for(int i=s;i<=e;i++){
		a[i] = temp[i];
	}

}

// Merge Sort 
void mergeSort(int *a,int s,int e){
	//Base Case
	if(s>=e){
		return;
	}

	//Recursive Case
	int mid = (s+e)/2;
	//Sort the first part
	mergeSort(a,s,mid);
	//Sort the second part
	mergeSort(a,mid+1,e);
	//Merge them
	merge(a,s,e);
	return;
}

int main(){
	int a[1000] = {3,1,5,2,6};
	int n = 5;

	mergeSort(a,0,n-1);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}