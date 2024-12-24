
#include <stdio.h>

int main()
{
    int n;
    int arr[]={1,2,3,4,5,6,7,8};
    int s=sizeof(arr)/sizeof(arr[0]);
    int check=0;
    
    do{
    printf("Nhap so can tim: ");
    scanf("%d",&n);
    int check=0;
    for(int i=0;i<s;i++)
    {
        if(n==arr[i])
        {
            check=1;
            printf("\nCo so ban nhap trong mang.");
        printf("\nSo %d o vi tri %d.",n,i+1);
        break;
        }
        
    }
    if(check==0)
        {
            printf("Khong co so ban nhap.");
        }
    }
    while(check==1);
    return 0;
}