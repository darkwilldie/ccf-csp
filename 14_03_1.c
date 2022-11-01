#include<stdio.h>
int a[1000];
int main(int argc,char const* argv[]){
    
    int i,cnt=0,j,N;
    //输入
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    //循环a[i]之后的数，判断是否为相反数
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(a[i]+a[j]==0){
                cnt++;//相反数则计数器++
            }
        }
        //因为是cnt是相反数总数，所以不用重置
    }
    printf("%d",cnt);
    return 0;
}