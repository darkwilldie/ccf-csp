#include<stdio.h>
int main(){

    int i,n,min=0,max=0;
    scanf("%d",&n);
    int b[n];

    scanf("%d",&b[0]);
    max=min=b[0];
    
    for(i=1;i<n;i++){
        scanf("%d",&b[i]);
        max+=b[i];
        
        if(b[i]>b[i-1]){
            min+=b[i];
        }
    }
    printf("%d\n%d",max,min);
    return 0;
}