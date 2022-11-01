#include<stdio.h>
//声明结构类型
typedef struct{
    int x,y;
    char type;
    
}DOT;
typedef struct{
    int a,b,c;
    int a0,a1,b1,b0;
}LINE;
int main(int argc,char const* argv[]){
    
    int i,j,n,m,sum;
    scanf("%d%d",&n,&m);
    //建立数组
    DOT dot[n+1];
    LINE line[m+1];
    //输入点
    for(i=0;i<n;i++){
        scanf("%d %d %c",&dot[i].x,&dot[i].y,&dot[i].type);
    }
    //输入线
    for(i=0;i<m;i++){
        scanf("%d %d %d",&line[i].c,&line[i].a,&line[i].b);
        //初始化a0,a1,b0,b1
        line[i].a0=line[i].a1=line[i].b0=line[i].b1=0;}
    //外循环遍历线
    for(i=0;i<m;i++)
    {
        //内循环遍历点
        for(j=0;j<n;j++)
        {
            //将点代入线，值为sum
            sum=dot[j].x*line[i].a+dot[j].y*line[i].b+line[i].c;
            //判断type和sum的正负
            if(sum<0&&dot[j].type=='A')
            {
                line[i].a0++;//在线之下且type为A的点数++
            }
            else if(sum>0&&dot[j].type=='A')
            {
                line[i].a1++;
            }
            else if(sum<0&&dot[j].type=='B')
            {
                line[i].b0++;
            }
            else if(sum>0&&dot[j].type=='B')
            {
                line[i].b1++;
            }
        }
    }
    //遍历线
    for(i=0;i<m;i++){
        //判断线上线下且type分别为A,B的点数是否为点总数n
        if(line[i].a0+line[i].b1==n||line[i].a1+line[i].b0==n){
            printf("Yes\n");//是，则输出yes
        }else
            printf("No\n");
    }
    return 0;
}
/* 
9 3
1 1 A
1 0 A
1 -1 A
2 2 B
2 3 B
0 1 A
3 1 B
1 3 B
2 0 A
0 2 -3
-3 0 2
-3 1 1 */