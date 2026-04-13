#include <stdio.h>

int fact(int n){
    if(n<=1) return 1;
    return n*fact(n-1);
}

int main(){
    int n,i;
    long long f=1;

    scanf("%d",&n);

    if(n<0){
        printf("Invalid input");
        return 0;
    }

    for(i=1;i<=n;i++)
        f*=i;

    printf("Iterative = %lld\n",f);
    printf("Recursive = %lld",fact(n));

    return 0;
}
