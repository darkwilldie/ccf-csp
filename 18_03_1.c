#include<stdio.h>

int main(int argc,char const* argv[]){
    
    int i=1,x,point=0;
    do{
        scanf("%d",&x);//输入
        if(x==1){
            point+=1;
            i=1;//中断连击重置计数
        }
        if(x==2){
            point+=2*i;
            i++;//连击计数
        }
    }while(x);//x为零时跳出循环
    printf("%d",point);
    return 0;
}