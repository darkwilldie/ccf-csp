#include<stdio.h>
int main(int argc,char const* argv[]){
    
    int n,mid=0,num1,i,max,min,num;
    //输入n和第一个num    
    scanf("%d",&n);
    scanf("%d",&num);
    num1=num;//记录下第一个数
    for(i=1;i<n;i++){
        scanf("%d",&num);
        if(n%2){//n为奇数
            if(i==(n-1)/2)
                mid=num;//取中位数
        }else if(i==n/2||i==n/2-1){
            mid+=num;//n为偶数，mid取中位数之和
        }
    }
    if(num1<num){//比较第一个数和最后一个数
        max=num;
        min=num1;
    }else{
        max=num1;
        min=num;
    }

    if(n%2){//n为奇数，直接输出
        printf("%d %d %d",max,mid,min);
    }else if(mid%2==1){//中位数不是整数
        printf("%d %.1lf %d",max,1.0*mid/2,min);//double类型输出中位数
    }else{//中位数是整数
        printf("%d %d %d",max,mid/2,min);//%d输出中位数
    }

     

    return 0;
}