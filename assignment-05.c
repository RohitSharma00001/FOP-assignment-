#include <stdio.h>

int main() {
    int ch,i,j,k,n,r,c;
    scanf("%d",&ch);

    if(ch==1){
        scanf("%d%d",&r,&c);
        int a[r][c],b[r][c];
        for(i=0;i<r;i++)for(j=0;j<c;j++)scanf("%d",&a[i][j]);
        for(i=0;i<r;i++)for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
            printf("%d ",a[i][j]+b[i][j]);
            if(j==c-1)printf("\n");
        }
    }

    else if(ch==2){
        scanf("%d%d",&r,&c);
        int a[r][c],f=0;
        for(i=0;i<r;i++)for(j=0;j<c;j++)scanf("%d",&a[i][j]);

        for(i=0;i<r;i++){
            int min=a[i][0],col=0;
            for(j=1;j<c;j++)if(a[i][j]<min){min=a[i][j];col=j;}
            for(k=0;k<r;k++)if(a[k][col]>min)break;
            if(k==r){printf("Saddle Point = %d",min);f=1;break;}
        }
        if(!f)printf("No Saddle Point");
    }

    else if(ch==3){
        float a[2][2],d;
        for(i=0;i<2;i++)for(j=0;j<2;j++)scanf("%f",&a[i][j]);
        d=a[0][0]*a[1][1]-a[0][1]*a[1][0];
        if(d==0)printf("Inverse not possible");
        else{
            printf("%.2f %.2f\n%.2f %.2f",
            a[1][1]/d,-a[0][1]/d,-a[1][0]/d,a[0][0]/d);
        }
    }

    else if(ch==4){
        scanf("%d",&n);
        int a[n][n],s=0,f=1;
        for(i=0;i<n;i++)for(j=0;j<n;j++)scanf("%d",&a[i][j]);

        for(j=0;j<n;j++)s+=a[0][j];

        for(i=1;i<n;i++){
            int t=0;
            for(j=0;j<n;j++)t+=a[i][j];
            if(t!=s)f=0;
        }

        for(j=0;j<n;j++){
            int t=0;
            for(i=0;i<n;i++)t+=a[i][j];
            if(t!=s)f=0;
        }

        int d1=0,d2=0;
        for(i=0;i<n;i++){d1+=a[i][i];d2+=a[i][n-i-1];}
        if(d1!=s||d2!=s)f=0;

        if(f)printf("Magic Square");
        else printf("Not Magic Square");
    }

    else printf("Invalid Choice");

    return 0;
}
