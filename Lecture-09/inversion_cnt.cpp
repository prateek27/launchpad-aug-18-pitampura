#include<iostream>
using namespace std;

int merge(int *a,int s,int e){
	int temp[1000];
	int i = s;
	int mid = (s+e)/2;
	int j = mid + 1;
	int k = s;

	int inv = 0;

	//Merging Logic
	while(i<=mid && j<=e){
		if(a[i]<a[j]){
			temp[k] = a[i];
			i++;
			k++;
		}
		else{
			inv += (mid-i+1);
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
	return inv;
}

// Merge Sort 
int mergeSort(int *a,int s,int e){
	//Base Case
	if(s>=e){
		return 0;
	}

	//Recursive Case
	int mid = (s+e)/2;
	//Sort the first part
	int left = mergeSort(a,s,mid);
	//Sort the second part
	int right = mergeSort(a,mid+1,e);
	//Merge them
	int cross = merge(a,s,e);
	return left + right + cross;
}

int main(){
	int a[1000] = {1,5,2,3,0};
	int n = 5;

	cout<< mergeSort(a,0,n-1);

	/*
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}*/
	return 0;
}