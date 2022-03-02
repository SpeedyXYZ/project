#include<stdio.h>
void search(int arr[],int target,int n)
{
int i,j,flag=0;
    for(i=0;i<n;i++)
    {
       if(target==arr[i])
           flag++;
       }

    if(flag==1)
        printf("\n search found \n");
    else
        printf("\n search not found \n");
}
int main()
{
    int target,arr[100],n;
    int i;
    scanf("%d",&n);
    scanf("%d",&target);
    for(int i=0;i<n;i++)
    {

        scanf("%d",&arr[i]);
    }
    search(arr,target,n);
    return 0;

}
