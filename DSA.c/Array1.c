#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct DynamicArray{
    int *a;
    int size;
    int capacity;
};
struct DynamicArray *createDynArray(){
    struct DynamicArray *dynArr=(struct DynamicArray *)malloc(sizeof(struct DynamicArray));
    dynArr->size=0;
    dynArr->capacity=0;
    dynArr->a=NULL;
    return dynArr;
};

void createArray(struct DynamicArray *dynArr){
    printf("Enter the initial capacity of the  Array:");
    scanf("%d",&(dynArr->capacity));
    dynArr->a=(int*)malloc(dynArr->capacity*sizeof(int));
    dynArr->size=0;
    printf("Enter the element one by one (enter -1 to stop):\n");
    int x;
    while(1){
        printf("Enter an Elemenmt:");
        scanf("%d",&x);
        if(x==-1){
            break;
        }
     if(dynArr->size == dynArr->capacity){
        dynArr->capacity*=2;
        dynArr->a=(int*)realloc(dynArr->a,dynArr->capacity *sizeof(int));
        }
        dynArr->a[dynArr->size++]=x;
}
}
void insertElement(struct DynamicArray *dynArr,int x){
    if(dynArr->size==dynArr->capacity){
        dynArr->capacity *=2;
        dynArr->a=(int *)realloc(dynArr->a,dynArr->capacity* sizeof(int));
    }
    dynArr->a[dynArr->size++]=x;
}
void deleteArray(struct DynamicArray *dynArr,int index){
    if(index==0 && index< dynArr->size){
        for(int i=0;i<dynArr->size;i++){
           dynArr->a[i]=dynArr->a[i+1];
        }
        dynArr->size--;
    }
}
void traverseArray(struct DynamicArray *dynArr){
    printf("Array Elemnets:");
    for(int i=0;i<dynArr->size;i++){
        printf(" %d ",dynArr->a[i]);
    }
    printf("\n");
}
void freeDynamicArray(struct DynamicArray *dynArr){
    free(dynArr->a);
    free(dynArr);
}
int main(){
 struct DynamicArray *dynArr=createDynArray();
 int choice,x,index;
 while(1){
    printf("\n Menu \n");
    printf("\n 1.Create Array\n 2.Insert Element\n 3.Delete Element\n 4.traverse Array\n 5.Exit\n");
    printf("\nEnter Your Choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:createArray(dynArr);
               break;
        case 2:printf("Enter the Element to Insert:");
               scanf("%d",&x);
               insertElement(dynArr,x);
               break;
        case 3:printf("Enter the index of the element to Delete:");
               scanf("%d",&index);
               deleteArray(dynArr,index-1);
               break;
        case 4:traverseArray(dynArr);
               break;
        case 5:freeDynamicArray(dynArr);
               printf("Exiting the Program!\n");
               return 0;
        default:printf("Invalid Option\n");
    }
 }
 getch();
 return 0;
}