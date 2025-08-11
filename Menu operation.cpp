#include<stdio.h>
#include<conio.h>
#define MAX 100
 
int arr[MAX];
int n=0;
void CreateArray(){
	printf("Enter the Size of the array\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter The values in the array ");
		scanf("%d",&arr[i]);
	}
	printf("Array Created Succesfully\n");
}
void display(){
	int i;
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
printf("\n");
}
void insert(){
	int ele,pos,i;
	printf("Insert the element ");
	scanf("%d",&ele);
	printf("Enter The Position");
	scanf("%d",&pos);
	for(i=n;i>pos;i--){
		arr[i]=arr[i-1];
	}
arr[pos]=ele;
n++;	
}
void deleteelement(){
	int pos,i;
	printf("Enter the the position for 0 to %d",n-1);
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++){
		arr[i]=arr[i+1];
	}
n--;
printf("Element deleted\n");
}
int main(){
	int choice;
	while(1){
		printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Insert Element\n");
        printf("4. Delete Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice){
        	case 1:
        		CreateArray();
        		break;
        	case 2:
        		display();
        		break;
        	case 3:
        		insert();
        		break;
        	case 4:
        		deleteelement();
        		break;
        	case 5:
        		printf("Thank you");
        		return 0;
        	default:
        		printf("Invalid Choice\n");
        		
		}
	}
getch();
}
