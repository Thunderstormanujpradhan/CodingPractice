//Reverse of an array
#include <stdio.h>
int main()
{    int n_1716,i_1716;
printf("Enter the size of an array ");
scanf("%d",&n_1716);
int arr[n_1716];
printf("Enter the element of an array ");
for(i_1716=0;i_1716<n_1716;i_1716++)
scanf("%d",&arr[i_1716]);
int temp_1716;
    for(i_1716=0; i_1716<n_1716/2; i_1716++)
    {
        temp_1716 = arr[i_1716];
        arr[i_1716] = arr[n_1716-i_1716-1];
        arr[n_1716-i_1716-1] = temp_1716;
    }
    for(i_1716=0; i_1716 < n_1716; i_1716++){
        printf("%d ", arr[i_1716]);
    }
}