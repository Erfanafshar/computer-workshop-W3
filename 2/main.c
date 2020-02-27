#include <stdio.h>
int main (){
    int a , b , c;
    int min=0 , max=0;
    printf ("please enter a , b , c:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
max=a;
min=b;
if (a<b){
    max=b;
    min=a;
}

if (c>max)
    max=c;
if (c<min)
    min=c;
printf ("max = %d and min = %d",max,min);
return 0;
}
