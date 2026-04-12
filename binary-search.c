#include <stdio.h>
int main(){
    int n,searchElement,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter elements of array 1 by 1:\n");
    for(i=0;i<n;i++){
        printf("%d> ",(i+1));
        scanf("%d",&arr[i]);
    }
    printf("Entered array= ");
    printf("%d", arr[0]);
    for(int i=1;i<n;i++){
        printf(",%d",arr[i]);
    }

    return 0;

}