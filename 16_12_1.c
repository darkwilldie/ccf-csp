#include<stdio.h>
int a[1000];
int main(int argc,char const* argv[]){
    
    int i,n,big=0,small=0,j; 
    //输入 
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    //循环比较a[i]和a[j]
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]>a[j]){
                small++;                
            }
            if(a[i]<a[j]){
                big++;
            }
        }
        if(small==big){
            printf("%d",a[i]);
            break;//输出中间数，退出循环
        }
        small=big=0;//重置
    }
    if(i==n)//没有break，即没有中间数
        printf("-1");
    return 0;
}