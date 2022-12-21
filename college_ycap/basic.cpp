#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) ;
void max(int arr[],int n);
void min(int arr[],int n);
void sortaa(int arr[],int n);

int main(){
    int n,choice,arr[100],times;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the element of array ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    
    while(choice!=4)
    {
        printf("enter the choice\n 1.to find max \n 2. to find min \n 3. to sortaa the array \n 4. to exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            max(arr,n);
            break;
        case 2:
            min(arr,n);
            break;
        case 3:
            sortaa(arr,n);
            break;
        default:
            break;
        }
    }

    return 0;
}
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

void max(int arr[],int n){
    int maxa=arr[0];
    for(int i=1; i<n;i++){
        if(maxa<arr[i]) maxa=arr[i];
    }
    printf("the max element is %d\n",maxa);
} 

void min(int arr[],int n){
    int mi=arr[0];
    for(int i=1;i<n;i++) if(mi>arr[i]) mi=arr[i];
    printf("the min element is %d\n",mi);
}
void sortaa(int arr[],int n){
    qsort(arr,n,sizeof(int),cmpfunc);
    printf(" the sortaaed array is ");
    for(int i=0;i<n;i++) printf(" %d",arr[i]);
}