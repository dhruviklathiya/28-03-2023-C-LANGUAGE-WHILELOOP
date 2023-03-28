#include <stdio.h>
int main()
{   
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int i=1,c=0;
    while(i<=n){
        c+=i;
        i++;
    }
    printf("%d is sum of all number between 0 to %d",c,n);
    return 0;
}
