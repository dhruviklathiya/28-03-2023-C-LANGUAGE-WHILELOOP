#include <stdio.h>
int main()
{   
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int i=n;
    while(i>=1){
        if(i%2==0){
            printf("%d\n",i);
        }
        i--;
    }
    return 0;
}
