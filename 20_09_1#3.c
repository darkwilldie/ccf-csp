#include<stdio.h>
#include<math.h>
typedef struct{
    int x,y,s,num;
}DOT;
void swap(int *m,int *n);
int main(int argc,char const* argv[]){
    
    int i,j,n,X,Y;
    DOT dot[201];
    scanf("%d%d%d",&n,&X,&Y);
    for(i=1;i<=n;i++){
        scanf("%d%d",&dot[i].x,&dot[i].y);
        dot[i].s=pow((dot[i].x-X),2)+pow((dot[i].y-Y),2);
        dot[i].num=i;
    }
    // 选择排序（只排前三位）
    for(i=1;i<=3;i++){
        int k=i;
        for(j=i+1;j<=n;j++){
            // 路程小或路程相等但编号小，则k=j
            if(dot[k].s>dot[j].s||(dot[k].s==dot[j].s&&dot[k].num>dot[j].num)){
                k=j;
            }
        }
        // 交换最小路程和编号到第i位
        swap(&dot[k].num,&dot[i].num);
        swap(&dot[k].s,&dot[i].s);
    }
    printf("%d\n%d\n%d",dot[1].num,dot[2].num,dot[3].num);
    return 0;
}
void swap(int *m,int *n)
{
    int t;
    t=*m;
    *m=*n;
    *n=t;
}
