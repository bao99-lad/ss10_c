
#include <stdio.h>

int main()
{
    int n,temp;
    int arr[]={1,4,5,2,7,9,3,8,10};
    int s=sizeof(arr)/sizeof(arr[0]);
    int check=0;
    printf("Mang cu la: ");
    for(int i=0;i<s;i++)
    {
        printf(" %d",arr[i]);
    }
    
    for (int i = 1; i < s - 1; i++) 
    {
        int min=i;
        for(int j=i+1;j<s;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    printf("\nMang moi la: ");
    for(int i=0;i<s;i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}