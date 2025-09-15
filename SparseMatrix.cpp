#include<stdio.h>
#include<conio.h>
#define SIZE 10

int mat[SIZE][SIZE]={0}; //Sabhi elements ko initially 0 se initialize kiya gaya hai.

struct sparsematrix{
	int row , col , val;
};

//apne ek structure banaya hai sparseMatrix jo 3 values rakhta hai:

//row ? element kis row me hai

//col ? element kis column me hai

//val ? us position ka actual value (non-zero)

int main(){
	int n,i,j,k=0;
	printf("Enter number of non-zero elements for matrix: ");
	scanf("%d", &n);  
	struct sparsematrix sm[n];
	for (i = 0; i < n; i++) {            
    printf("Enter row %d: ", i + 1);
    scanf("%d", &sm[i].row);

    printf("Enter col %d: ", i + 1);
    scanf("%d", &sm[i].col);

    printf("Enter val %d: ", i + 1);
    scanf("%d", &sm[i].val);
}
for (i = 0; i < n; i++) {              
    mat[sm[i].row][sm[i].col] = sm[i].val; 
    //Yeh loop har struct entry ko use karke mat[][] me value dalta hai.

//Jaise upar ke example me:

//mat[0][2] = 5

//mat[1][1] = 9

//Baaki ke sab elements 0 hi rahenge.
}
for (i = 0; i < SIZE; i++) {           
    for (j = 0; j < SIZE; j++) {
        printf("%d ", mat[i][j]);
    }
    printf("\n");
}
return 0 ;
}
