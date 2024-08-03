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
	//printf("Finding greatest number in each row and smallest in its column") ;
	printf("\n");
	int k,s,b;
	for(i=0 ; i<a ; i++){
		b=B[i][0];
		for(j=0 ; j<a ;j++) {
			if(B[i][j]>b){
				b=B[i][j];
			}
			else {
				b=b;
			}
			s=b ; 
			for(k=i ; k<a ; k++){
				if(s<B[k+1][j]){
					s=s;
					if(k=a && k=i){
						break;
					}
				}

			}
		}
	}
	printf("The ans is %d",s);
    return 0 ; 
}