#include <stdio.h>
#include<conio.h>
int main(){
    int j=1;
    int list[10];
    int count=-1;
    int no,f;
    printf("Enter the number of elements you want to insert in the array:");
    scanf("%d",&no);
    if (no>10)
    {
        printf("\nArray will be overloaded. Please enter less than 10 elements\n");
    }
    else{
        for(f=0;f<no;f++)
        {
            printf("\nEnter the element you want to insert:");
            scanf("%d",&list[f]);
        }
    while(j==1){
    count++;
    int pos=-1;
    int length = no;
    int i;
    int item;
    if (length==0){
        printf("The array is empty");
        break;
    }
    else{
    printf("Array before deleting the element\n");
    for (i=0;i<length-count;i++){
        printf("%d\n",list[i]);
    }
    printf("Enter the position of element you want to remove\n");
    scanf("%d",&item);
        i=item-1;
        while((i>=pos) && (i<no)){
           list[i]=list[i+1];
           i++;}
        printf("Array after deleting the element\n");
        for (i=0;i<length-(1+count);i++){
           printf("%d\n",list[i]);
        }
    printf("Do you want to continue? Enter 1 for yes and 0 for no");
    scanf("%d",&j);
    if (j==1){
        continue;
    }
    else{
        break;
    }
    }
    }
    }
printf("Thank You for using this application");
printf("\nHemang Vats\n05713202723\nCSE-1");
return 0;
}