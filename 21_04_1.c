#include<stdio.h>
int main(){

    int n,m,L,x,i;
    scanf("%d%d%d",&n,&m,&L);
    int a[256]={0,};
    for(i=0;i<n*m;i++){
        scanf("%d",&x);
        if(i%n==0){
            getchar();
        }
        a[x]++;
    }
    for(i=0;i<L;i++){
        printf("%d ",a[i]);
    }
    return 0;
}