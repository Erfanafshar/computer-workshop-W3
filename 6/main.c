#include <stdio.h>
int main (void){
    int n ,a , sum=0;
    printf("please enter n: ");
    scanf("%d",&n);
    while (n!=0){
        a=n%10;
        n=(n-a)/10;
        sum=sum+a;
}
printf ("%d",sum);
return 0;
}
