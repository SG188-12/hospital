#include<stdio.h>
int main(){
    int n,r,A=0,b;
    printf("entr the number");
    scanf("%d",&n);
    b=n;
    while (n>0)
    {
        r=n%10;
        A=A+r*r*r;
        n=n/10;
     

    }
    if(A==b){
        printf("a");
    }else{
        printf("na");
    }
    

}
