#include<bits/stdc++.h>
using namespace std;

int findMax(int A[],int n)
{
	int max = INT_MIN;
	for(int i=0;i<n;i++)
	{
	if(A[i]>max)
	max=A[i];
	}
	return max;
}

void bucketSort(int a[], int n){
	int max = findMax(a, n);
	int bucket[max],i;
	
	for(int i=0;i<=max;i++){
		bucket[i]= 0;
	}
	
	//bin-array
	for(int i=0;i<n;i++){
	    bucket[a[i]]++;
	}
	
	for(int i=0, j=0; i<=max;i++){
		while(bucket[i]>0){
			a[j++]=i;
			bucket[i]--;
		}
	}
}

int main()
{
	int n=8;
    int arr[n] = {2, 5, 8, 12, 3, 6, 7, 10};
    
    bucketSort(arr, n);
    for(int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
	}
 
    return 0;
}
