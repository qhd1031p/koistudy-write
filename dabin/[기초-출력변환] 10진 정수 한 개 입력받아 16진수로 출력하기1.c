#include <stdio.h>
int main()
{
    int a=0;
    char b[5];
    scanf("%d",&a);
    for(int i=0;i<5;i++){
    if(a/16==0){b[i]=a; break;}
    else{b[i]=a%16;}
    a=a/16;
    }
    for(int i=4;i>-1;i--){
    if(b[i]!=0)printf("%x",b[i]);
    }
    return 0;
    }
