#include<stdio.h>
int a[1000];
int main(int argc,char const* argv[]){
    
    int n,i;
    //输入
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //遍历a[i]
    for(i=0;i<n;i++){
        if(i==0){
            printf("%d ",(a[i]+a[i+1])/2);
        }else if(i==n-1){//一首一尾特殊情况单列
            printf("%d ",(a[i]+a[i-1])/2);
        }else{
            printf("%d ",(a[i+1]+a[i]+a[i-1])/3);
        }
    }
    return 0;
}