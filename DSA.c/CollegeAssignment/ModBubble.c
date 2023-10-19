#include<stdio.h>
#include<stdlib.h>
int *a,*c,n,i,ch;
void Swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
void Create(){
    printf("\nEnter the Number of Elements:");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int));
    c=(int *)malloc(sizeof(int));
	for(i=0;i<n;i++){
		printf("Enter the Element at %d position:",i);
		scanf("%d",(a+i));
        c[i]=a[i];
	}
}
void Print(int *a,int n){
	int i;
	printf("\nDisplay Array:");
	for(i=0;i<n;i++){
		printf(" %d ",a[i]);
	}
	printf("\n");
}
int Bubble(int *a,int n){
	int i,j,ch;
    while(1){
	printf("\n 1.Ascending\n 2.Descending\n 3.Exit From Bubble Sort");
	printf("\nEnter Your Choice:");
	scanf("%d",&ch);
	switch(ch){
		case 1:for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
		if(a[j]>a[j+1]){
			Swap(&a[j],&a[j+1]);
		}
		}
	}
    Print(a,n);
	break;
	case 2:	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
		if(a[j]<a[j+1]){
			Swap(&a[j],&a[j+1]);
		}
		}
	}
    Print(a,n);
		break;
    case 3:printf("\nExiting Bubble Sort");
           return 0;
	default:printf("\nInvalid Option!");
	
	}
    }
	}
	void ModBubble(int *a,int n){
	int i,j,f;
	for(i=1;i<n;i++){
		f=0;
		for(j=0;j<n-i;j++){
		if(a[j]>a[j+1]){
			Swap(&a[j],&a[j+1]);
			f=1;
		}
		}
		if(f==0){
			break;
		}
	}
}
int Check(int *a,int n){
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            return 0;
        }
    }
    return 1;
}
void Original(int *a,int *b,int n){
    for(int i=0;i<n;i++){
        a[i]=b[i];
    }
}
void CheckArray(){
while(1){
    Create(a,n);
        if (Check(a, n)) {
            printf("\nArray is Already Sorted!");
            printf("\nPlease Input Unsorted Array!\n");
           
        } else {
            printf("\nUnsorteed Array:\n");
             Print(a,n);
             break;
        }
   }
}
int WhatToDo(){
CheckArray();
	while(1){
	printf("\n1.Normal Bubble Sort\n2.Modified Bubble Sort\n3.Display\n4.Get Back Orgianl Array\n5.Exit");
	printf("\nEnter Your Choice:");
	scanf("%d",&ch);
	switch(ch){
          case 1:Original(a,c,n);
                 Bubble(a,n);
                 printf("\nSorted Array:\n");
                 Print(a,n);
		         break;
	    case 2:  Original(a,c,n);
                 ModBubble(a,n);
                 printf("\nSorted Array:\n");
                 Print(a,n);
		         break;
	           break;
	    case 3:Print(a,n);
	           break;
        case 4:Original(a,c,n);
               Print(a,n);
               break;
	    case 5:printf("\nExiting Priogram!");
		       return 0;
	    default:printf("\nInvalid Choice!");
	}
}
}
int main(){
    WhatToDo();
	return 0;
}