#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int f1=1,f2=1,f = 0,a;
    
    printf("please enter a number");
    scanf("%d",&a);
    
    if(a==2){
        printf("1");
    }
    else if (a==1){
        printf("1");
    }
    else{
    a=a-2;
    while(a!=0){
        f=f1+f2;
        f1=f2;
        f2=f;
        a=a-1;
    }
    printf("%d",f);
    }
    system("pause");
    return 0;
    
}
