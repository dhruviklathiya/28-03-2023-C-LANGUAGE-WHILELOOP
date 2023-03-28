#include <stdio.h>
int main()
{   
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int i=1,c=1;
    while(i<=n){
        c*=i;
        i++;
    }
    printf("%d is factorial number %d",c,n);
    return 0;
}
