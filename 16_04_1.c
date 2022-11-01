#include<stdio.h>
int a[1000];
int main(int argc,char const* argv[]){
    
    int n,i,cnt=0;
    //输入
    scanf("%d",&n);   
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //比较a[i]是否为极大值或极小值
    for(i=1;i<n-1;i++){
        if((a[i]-a[i-1]<0&&a[i]-a[i+1]<0)||(a[i]-a[i-1]>0&&a[i]-a[i+1]>0)){
            cnt++;//折点数++
        }
    }
    printf("%d",cnt);
    return 0;
}