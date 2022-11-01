#include<stdio.h>
int a[1000][1000];
int main(int argc,char const* argv[]){

    int i,j,n,m;
    //输入
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //以j为行（j从末尾开始），i为列输出
    for(j=m-1;j>=0;j--){
        for(i=0;i<n;i++){
            printf("%d ",a[i][j]);
        }
        putchar('\n');//每行末尾换行
    }

    return 0;
}