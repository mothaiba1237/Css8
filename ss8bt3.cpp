#include <stdio.h>

int main(){
	int n ;
	
	printf("nhap vao n: ");
	scanf("%d", &n) ;
	if(n <=2){
		printf("n phai >2");
		return 1; 
	} 
	int arr[n][n] ;
	for (int i = 0; i <n ; i++){
		for(int j = 0; j < n ; j++){
			printf("nhap phan tu [%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		} 
	} 
	printf("ma tran vua nhap vao la: \n");
	for (int i = 0; i <n ; i++){
		for(int j = 0; j < n ; j++){
			printf("%d ", arr[i][j]); 
		} 
		printf("\n"); 
	}
	
	return 0; 
	 
} 
