#include<stdio.h>
int main(){

    int i,sum=0,n,N,j;
    //输入
    scanf("%d%d",&n,&N);
    int a[n+1];
    a[0]=0;
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    /*//j是钱，i是下标，a[i]是商品价格
    for(j=0;j<N;j++){//外循环从0元循环到N-1元
        for(i=n;i>=0;i--){//内循环从最大下标n开始，找出小于j的最大下标i
            if(j>=a[i]){//钱大于商品价格（买得起）
                sum+=i;//买得起，则下标累加
                break;//退出内循环，钱数变化
            }
        }
    }*/
    
    //改进算法
    for(i=0;i<n;i++){//i代表下标
        sum+=i*(a[i+1]-a[i]);//sum累加(下标i*相邻商品价格差)
    }
        sum+=n*(N-a[n]);//累加最大下标n*(N-a[n])
    printf("%d",sum);
    return 0;
}