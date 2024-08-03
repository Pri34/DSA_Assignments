#include<stdio.h>
int main()
{
	int a ;
	printf("Enter total number of rows and columns") ;
	scanf("%d",&a);
	int B[a][a] ;
	int i,j ;
	printf("Enter the values in the matrix") ;
	printf("\n");
	for(i=0; i<a ; i++) {
		for(j=0 ; j<a ; j++) {
			scanf("%d",&B[i][j]) ;
		}
	}
	printf("The matrix is ") ;
	printf("\n");
	for(i=0; i<a ; i++) {
		for(j=0 ; j<a ; j++) {
			printf("%d \t",B[i][j]) ;
		}
		printf("\n") ;
	}
	printf("Finding greatest number in each row and each column") ;
	printf("\n");
	for(i=0 ; i<a ; i++) {
		int b=B[i][0];
		for(j=0;j<a;j++){
			if(b>B[i][j]){
				b = b ;
			}
			else {
				b=B[i][j] ;
			}
		}
		printf("\n");
		printf("Greatest Element in row is %d", b);
	}
	for(j=0 ; j<a ; j++) {
		int c=B[0][j];
		for(i=0 ; i<a ; i++){
			if(c>B[j][i]){
				c = c ;
			}
			else {
				c=B[i][j] ;
			}
		}
		printf("\n");
		printf("Greatest Element in column is %d", c);
	}
	return 0;
}