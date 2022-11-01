#include<stdio.h>
int a[1000],b[1000],c[1000];
int main(int argc,char const* argv[]){
    
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    //将c[]数组初始化为1
    for(i=0;i<=n;i++){
        c[i]=1;
    }
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);//输入选项数a[i]
        for(j=1;j<=i;j++){
            c[i]*=a[j];//c[i]为a[i]的前缀乘积
        }
        b[i]=(m%c[i]-m%c[i-1])/c[i-1];//按照公式得到b[i]
        printf("%d ",b[i]);//输出
    }

    return 0;
}