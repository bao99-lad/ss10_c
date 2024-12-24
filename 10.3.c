
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
        temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
    printf("\nMang moi la: ");
    for(int i=0;i<s;i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}