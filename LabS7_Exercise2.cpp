#include <stdio.h>
int main(){
	int n;
	printf("Enter n=");
	scanf("%d",&n);
	int arr[n];
	printf("Enter a list of %d integers:",n);
	for(int i=0;i<n;i++){
		int flag = 0;
		do{
			flag = 0;
			printf("Enter the number %d =",i);
			scanf("%d",&arr[i]);
			for(int j=0;j<i;j++){
				if(arr[j] == arr[i]){
					flag =1;
					printf("Already exist %d in the list\n",arr[i]);
					break;
				}
			}
		}while(flag == 1);
	
	}
	printf("Array after input:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}
