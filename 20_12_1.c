#include<stdio.h>
int ReLU(int n);

int main()
{
    int n,i,w,score,result=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&w,&score);
        result+=score*w;
    }
    printf("%d",ReLU(result));
    return 0;
}
int ReLU(int n){
    int x=0;
    if(n>0){
        x=n;
    }
    return x;
}