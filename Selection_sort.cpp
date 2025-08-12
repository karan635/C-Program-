#include<stdio.h>
#include<conio.h>
# define MAX 100

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

void insertion_sort(int arr[],int n){
	printf("This Block is used for insertion sort\n");
	int i,curr,pre;
	for(i=1;i<n;i++){
		curr=arr[i];
		pre=i-1;
		
		while(pre>=0&&arr[pre]>curr){
			arr[pre+1]=arr[pre];
			pre=pre-1;
		}
		arr[pre+1]=curr;
	}
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	printf("Array sorted successfully\n");	
}
void Bubble_sort(int arr[],int n){
	printf("Bubble Sort\n");
	int temp,i,j;
	for(i=0;i<n;i++){ 
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	printf("Array sorted successfully\n");
}

void selection_sort(int arr[],int n){
	printf("Selection Sort\n");
	int i,j,temp;
	int min;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(arr[j] < arr[min]){
				min=j;
			}
		}
		temp = arr[i];
		arr[i]= arr[min];
		arr[min]=temp;
	}
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	printf("Array sorted successfully\n");
}
int main(){
	int choice;
	while(1){
		printf("1. Create Array\n");
        printf("2. Insertion\n");
        printf("3. Bubble Sort\n");
        printf("4. Selection Sort\n");
        printf("Enter your choice");
        scanf("%d",&choice);
        switch(choice){
        	case 1 :
        		CreateArray();
        		break;
        	case 2:
        		insertion_sort(arr,n);
        		break;
        	case 3:
        		Bubble_sort(arr,n);
        		break;
        	case 4:
        		selection_sort(arr,n);
        		break;
        	default:
        		printf("Invalid choice");
		}
	}
getch();
}
