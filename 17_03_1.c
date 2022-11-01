#include<stdio.h>
int a[1000];
int main(int argc,char const* argv[]){
    
    int n,sum=0,k,i,cnt=0;
    //输入
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        sum+=a[i];//循环每轮sum加上a[i]
        if(sum>=k||i==n-1){//比较sum和k的大小
            cnt++;
            sum=0;//重置sum
        }
    }
    printf("%d",cnt);
    return 0;
}