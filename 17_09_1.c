#include<stdio.h>

int main(int argc,char const* argv[]){
    
    int n,cnt=0;
    scanf("%d",&n);
    //先买大的，余下再买小的
    while (n/50)
    {
        cnt+=n/50*7;
        n%=50;
    }
    while (n/30)
    {
        cnt+=n/30*4;
        n%=30;
    }
    while (n/10)
    {
        cnt+=n/10;
        n%=10;
    }
    printf("%d",cnt);
        
    return 0;
}