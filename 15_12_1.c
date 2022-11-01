#include<stdio.h>

int main(int argc,char const* argv[]){
    
    int sum=0,n;
    // 输入
    scanf("%d",&n);
    while(n){
        sum+=n%10;//sum每次循环加上n对10的模
        n/=10;//n每次循环除以10
    }//n为零退出循环
    printf("%d",sum);
    return 0;
}