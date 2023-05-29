//a) Write C program that allows the user to enter several values of resistors,
//	then store the values in an array, finally sort the values in an ascending order.
//		Print the array after sorting.

#include <stdio.h>

void printArray(int arr[],int times){
    for (int i = 0; i < times; i++)
    {
        printf(" Element : %d\n",arr[i]);
    }
}
int main()
{
    //input for array
    int times, values_res, temp = 0;
    printf("Please enter a Times resistors :");
    scanf("%d", &times);
    int arr_val_res[times];
    for (int i = 0; i < times; i++)
    {
        printf("Please Enter a values resistors : ");
        scanf("%d", &arr_val_res[i]); 
    }

    //sort array
    for (int i = 0 ; i < times ; i++)
    {
        for (int j = i + 1 ; j < times; j++)
        {
          if (arr_val_res[i]>arr_val_res[j])
          {
            temp = arr_val_res[i];
            arr_val_res[i] = arr_val_res[j];
            arr_val_res[j]= temp;
          }
            
        }
        
    }   
    printArray(arr_val_res,times);

    return 0;
}