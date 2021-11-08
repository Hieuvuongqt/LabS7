#include <stdio.h>
int main(){
	int n;
	printf("Enter n=");
	scanf("%d",&n);
	int arr[n];
	printf("Enter a list of %d integers:",n);
	for(int i=0;i<n;i++){
		printf("Enter the number %d =",i);
		scanf("%d",&arr[i]);
	}
	int x;
	printf("Enter the value of x=");
	scanf("%d",&x);
	int m=x;
	for(int i=0;i<n;i++){
		if(arr[i]<x){
			m=arr[i];
			break;
		}
	}
	if(m==x){
		printf("All values are >= %d",x);
	}else{
		for(int i=0;i<n;i++){
			if(arr[i]<x && arr[i]>m){
				m = arr[i];
			}
		}	
		printf("The number to look up in the list is: %d",x,m);
	}
	
	
}

