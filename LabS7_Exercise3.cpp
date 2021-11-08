#include <stdio.h>
int main(){
	int n;
	printf("Enter n=");
	scanf("%d",&n);
	int arr[n];
	printf("Enter a list of %d different integers:\n",n);
	for(int i=0;i<n;i++){
		int flag = 0;
		do{
			flag = 0;
			printf("Enter the %d number =",i);
			scanf("%d",&arr[i]);
			for(int j=0;j<i;j++){
				if(arr[j] == arr[i]){
					flag =1;
					printf("%d already exists in the list\n",arr[i]);
					break;
				}
			}
			if(flag == 0){
				if(arr[i]<2){
					flag = 1;
				}else{
					for(int j=2;j<=arr[i]/2;j++){
						if(arr[i] %j==0){	
							flag = 1;
							break;
						}
					}
				}
				if(flag == 1){
					printf("Entered number is not prime\n");
				}
			}
			
		}while(flag == 1);
	}
	
	printf("Array after input:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}
