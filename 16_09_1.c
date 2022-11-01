#include<stdio.h>
int a[1000];
int main(int argc,char const* argv[]){
    
    int n,i,max=0,sub;
    // 输入
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }    
    //循环a[i]-a[i+1]
    for(i=0;i<n-1;i++){
        sub=a[i]-a[i+1];
        if(sub<0)
            sub=-sub;//使sub为正
        if(sub>max){
            max=sub;//取max为最大波动
        }       
    }
    printf("%d",max);
    return 0;
}