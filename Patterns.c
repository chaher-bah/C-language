#include <stdio.h>
void main (){
    int n,i,j,k,cp=2*n;
    do
    {
        printf("donner in entier");
        scanf("%d",&n);
    } while (n<=0);
    for (i=1;i<=n;i++){                 /*_____1*/
        for (k=5;k>=i;k--)              /*____21*/
            printf("-");                /*___321*/
        for (j=i;j>=1;j--)              /*__4321*/
            printf("%d",j);             /*_54321*/
        printf("\n");
    }
    for (i=1;i<=n;i++){
        for(j=1;j<=n;j++)                   /*-----*/
            if (j==1||i==1||i==n||j==n)     /*-   -*/
                printf("*");                /*-   -*/
            else                            /*-   -*/
                printf(" ");                /*-   -*/
        printf("\n");                       /*-----*/
    }



    for (i=1;i<=n*2;i++){
        if (i<=n)                       /*1*/
            for (j=1;j<=i;j++)          /*12*/
                printf("%d",j);         /*123*/
        else                            /*1234*/
            for (k=1;k<j;k++)           /*12345*/
                printf("%d",k);         /*1234*/
                j--;                    /*123*/
        printf("\n");                   /*12*/
    }                                   /*12*/                              
                                        /*1*/
     for (i=1;i<=n*2;i++){
        if (i<=n)                       /*1*/
            for (j=1;j<=i;j++)          /*12*/
                printf("%d",j);         /*123*/
        else                            /*1234*/
            for (k=1;k<=j;k++)          /*12345*/
                printf("%d",k);         /*12345*/
                j--;                    /*1234*/
        printf("\n");                   /*123*/
    }                                   /*12*/
                                        /*1*/


}