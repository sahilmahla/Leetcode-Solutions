// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdlib.h>


 // } Driver Code Ends
//User function Template for C


// arr[]: Input Array
// N : Size of the Array arr[]
// Function to count inversions in the array.
long long merge(long long int A[],long long left,long long mid,long long  right){
	long long i = left, j = mid;
	long long k = 0;
	long long  temp[right-left+1];
	long long count = 0;
	while(i < mid && j <= right){
		if(A[i] <= A[j]){
			temp[k++] = A[i++];
		}else{
			temp[k++] = A[j++];
			count += mid -i;
		}
	}

	while(i<mid){
		temp[k++] = A[i++];
	}
	while(j<=right){
		temp[k++] = A[j++];
	}

	for (int i = left,k = 0; i <= right; i++,k++)
	{
		A[i] = temp[k];
	}
	return count;
}


long long int merge_sort(long long A[],long long  left,long long right){
	long long int count = 0;
	if(left<right){
		int mid = (left+right)/2;
		long long int leftCount = merge_sort(A,left,mid);
		long long int rigtCount = merge_sort(A,mid+1,right);
		long long int mergeCount = merge(A,left,mid+1,right);

		count = leftCount+rigtCount+mergeCount;
	}
	return count;
}
long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    long long int ans = merge_sort(arr,0,N-1);
	return ans;
}



// { Driver Code Starts.

int main() {
    
    long long T;
    scanf("%ld", &T);
    
    while(T--){
        long long N;
        scanf("%ld", &N);
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            scanf("%ld", &A[i]);
        }
        
        printf("%ld\n", inversionCount(A,N) );
    }
    
    return 0;
}
  // } Driver Code Ends