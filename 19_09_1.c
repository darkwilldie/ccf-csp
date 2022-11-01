#include<stdio.h>

int main(int argc,char const* argv[]){
    
    int N,M,i,j,a0,sub,T=0,k,subSum=0,P=0;
    scanf("%d%d",&N,&M);//输入轮数和棵数

    for(i=0;i<N;i++){
        scanf("%d",&a0);//输入每棵树初始苹果数
        T+=a0;//累加
        for(j=0;j<M;j++){
            scanf("%d",&sub);//输入去除苹果树（负数）
            T+=sub;//累加
            subSum-=sub;//绝对值累加
        }
        if(P<subSum){//取P最大subSum
            P=subSum;
            k=i+1;//此时编号k为i+1
        }
        subSum=0;//循环末重置subSum
    }   
    printf("%d %d %d",T,k,P);
    return 0;
}