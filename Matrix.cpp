#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,rows,cols;
	int rows2,cols2;
	int rows3,cols3;
// taking the input of 1st matrix

	printf("Enter the no. of rows that you required ");
	scanf("%d",&rows);
	printf("Enter the no. of cols that you required ");
	scanf("%d",&cols);
	int matrix[rows][cols];
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("Enter the element at the postion [%d] [%d]  ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
// taking input of the second matrix	
	printf("Enter the no. of rows that you required ");
	scanf("%d",&rows2);
	printf("Enter the no. of cols that you required ");
	scanf("%d",&cols2);
	int m2[rows][cols];
	for(i=0;i<rows2;i++){
		for(j=0;j<cols2;j++){
			printf("Enter the element at the postion [%d] [%d]  ",i+1,j+1);
			scanf("%d",&m2[i][j]);
		}
	}
// Printing of the 1st Matrix
	printf("This 1st Matrix\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d",matrix[i][j]);
		}
		printf("\n");
	}
	
// printing the the second matrix 
	printf("This second matrix\n");
	for(i=0;i<rows2;i++){
		for(j=0;j<cols2;j++){
			printf("%d",m2[i][j]);
		}
		printf("\n");
	}
getch();
}
