#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}


void Insert(int a[],int *n,int x){
    (*n)++;
    int i=*n;
    a[i]=x;  
    while(i>1){
        int parent=i/2;
        if(a[parent]<a[i]){
         swap(&a[parent],&a[i]);
         i=parent;
        }
        else{
            return;
        }
    }
}


void Delete(int a[],int *n){
    a[1]=a[*n];
    (*n)--;
    int i=1;
    while(2*i<=*n){
        int left=a[2*i],right=a[2*i+1];
        n-=1;
        i=1;
        int largest=(2*i+1<=*n && right>left)?(2*i+1):(2*i);
        if(a[i]<a[largest]){
            swap(&a[i],&a[largest]);
            i=largest;
        }
        else{
            return;
        }
    }
}
void Display(int a[],int n){
    printf("\nHeap:");
    for(int i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int a[100],n=0,choice,x;

    while(1){
      printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &x);
                Insert(a, &n, x);
                Display(a,n);
                break;
            case 2:
                if (n > 0) {
                    Delete(a, &n);
                    printf("Element deleted.\n");
                    Display(a,n);
                } else {
                    printf("Queue is empty.\n");
                }
                break;
            case 3:Display(a,n);
                   break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }  
    }

    getch();
    return 0;
}