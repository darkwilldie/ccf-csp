#include<stdio.h>
int a[1000];
int main(int argc,char const* argv[]){
    
    int i,cnt=1,n;
    // 输入
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }    
    // 比较a[i]与a[i+1]是否相等（i最大为n-2）
    for(i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            cnt++;//不相等则计数器++
        }
    }
    printf("%d",cnt);
    return 0;
}