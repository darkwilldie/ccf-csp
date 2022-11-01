#include<stdio.h>
int a[1000];
int main(int argc,char const* argv[]){

    int i,cnt=0,j,n;   
    //输入
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //循环a[i]之后的数，判断是否为相邻数
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]-a[j]==1||a[i]-a[j]==-1){
                cnt++;//相邻则计数器++
            }
        }
        //cnt为相邻数对总数，不用重置
    }
    printf("%d",cnt);
    return 0;
}