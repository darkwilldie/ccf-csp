#include<stdio.h>
int a[1000];
int main(int argc,char const* argv[]){
    
    int i,j,min=1000,sub,n;   
    //输入
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //循环计算a[i]-a[j]
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            sub=a[i]-a[j];
            if(sub<0)
                sub=-sub;//使sub为正
            if(min>sub){
                min=sub;
            }//取最小差值
        }
    }
    printf("%d",min);
    return 0;
}