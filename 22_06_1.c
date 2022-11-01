#include<stdio.h>
#include<math.h>
int a[1000];
int main(int argc,char const* argv[]){
    
    int n,i;
    double avg=0,D=0;
    //输入
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        avg+=a[i];
    }
    avg/=n;//求平均数
    for(i=0;i<n;i++){
        D+=pow(a[i]-avg,2);
    }
    D/=n;//求方差
    for(i=0;i<n;i++){
        printf("%lf\n",(a[i]-avg)/sqrt(D));
    }
    return 0;
}