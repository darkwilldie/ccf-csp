#include<stdio.h>
int main(int argc,char const* argv[]){
    
    int n,k,i,j,cnt=0,flag=0;
    scanf("%d%d",&n,&k);
    int x[k+1],y[k+1];
    
    for(i=1;i<=k;i++){
        scanf("%d%d",&x[i],&y[i]);//输入
        if(y[i]==0){
            flag=1;//常量，已初始化
        }else 
            for(j=1;j<i;j++){
                if(y[i]==x[j]){
                    flag=1;//相等，已初始化
                    break;
                }
            }
        if(flag==0){
            cnt++;//未初始化，计数++
        }else 
            flag=0;//已初始化，重置计数器
    }
    printf("%d",cnt);
    return 0;
}