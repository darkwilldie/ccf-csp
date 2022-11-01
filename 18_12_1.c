#include<stdio.h>

int main(int argc,char const* argv[]){
    
    int r,g,y,sum=0,n,i,k,t;
    //输入
    scanf("%d%d%d",&r,&g,&y);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&k,&t);
        if(k==0||k==1){//红灯和道路直接+t
            sum+=t;
        }else if(k==2){
            sum+=r+t;//等完黄灯还要等红灯
        }//绿灯直接过
    }
    printf("%d",sum);
    return 0;
}