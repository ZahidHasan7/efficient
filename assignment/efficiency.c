#include<stdio.h>
#include<math.h>

int main(){
    int a[5],b[5],i,j;
    float sum1 ,mean1,sd1=0,d1, sum2 ,mean2,sd2=0,d2;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
for(i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++){
            sum1=sum1+a[i];
    }
    mean1=sum1/5;
    for(i=0;i<5;i++){
   sd1=sd1+(pow(a[i]-mean1,2));
     }
     d1=sqrt(sd1/5);
     printf("%lf\n",d1);

     for(i=0;i<5;i++){
            sum2=sum2+b[i];
    }
    mean2=sum2/5;
    for(i=0;i<5;i++){
   sd2=sd2+(pow( b[i]-mean2,2));
     }
     d2=sqrt(sd2/5);
     printf("%lf\n",d2);
     if(d1<d2){
        printf("The first player is more efficient");
     }
    else{
        printf("The second player is more efficient");
     }



return 0;
}
