#include<stdio.h>
int s[1000];
int main(int argc,char const* argv[]){
    
    int n,i,j,cnt=1,max=0,num;
    //输入
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    //循环a[i]与之后的数，判断是否相等
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(s[i]==s[j]){
                cnt++;//相等则计数器++
            }
        }
        //取最大次数max，出现次数最多的数为num
        if(max<cnt){
            max=cnt;
            num=s[i];
        }else if(max==cnt){
            if(s[i]<num){
                num=s[i];
            }
        }
        cnt=1;//最后重置计数器
    }
    printf("%d",num);
    return 0;
}