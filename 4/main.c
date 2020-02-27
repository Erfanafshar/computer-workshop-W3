#include <stdio.h>
int main (){
    int sum=0 , average ;
    int i;
    printf ("please enter ten number");
for(i=1;i<11;i++){
        scanf ("%d",&i);
        sum=sum+i;
}
average=sum/10;
printf("%d",average);
return 0;
}
