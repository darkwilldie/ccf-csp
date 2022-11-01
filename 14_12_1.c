#include<stdio.h>
int a[1000];
int main(int argc,char const* argv[]){
    
    int n,cnt=1,j,i;
    scanf("%d",&n);
    //输入
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //循环比较a[i]和a[j]
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){//只比较a[i]之前的数
            if(a[i]==a[j]){
                cnt++;//相等则计数器++
            }
        }
        printf("%d ",cnt);
        cnt=1;//循环的最后要初始化计数器
    }
    return 0;
}