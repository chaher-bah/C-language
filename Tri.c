#include <stdio.h>
/*ordre croissante */
int T[50]={5,10,3,1,4};
void tri_insertion(int T[],int n){
    int i,j,v;
    for (i=1;i<n;i++){
        v=T[i];
        j=i;
        while (j>0&&T[j-1]>v){
            T[j]=T[j-1];
            j--;
        }
        T[j]=v;
    }
}
void swap (int a,int b){
    int v=a;
    a=b;
    b=v;
}
void tri_selection (int T[],int n ){
    int i,j,m,v;
    for (i=0;i<n-1;i++){
        m=i;
        for (j=i+1;j<n;j++){
            if (T[j]<T[m])
                m=j;
        }
        v=T[i];
        T[i]=T[m];
        T[m]=v;
    }
}
int partition (int m,int M){
    int pivot=T[m];
    int i=m,j=M;
    while (i<j){
        do {
            i++;
        }while (T[i]<=pivot);
        do
        {
            j--;
        } while (T[j]>pivot);
        if (i<j)
            swap(T[i],T[j]);    
    }
    swap(T[m],T[j]);
    return j;
}
void tri_rapide (int T[],int m,int n){
    int j;
    j=partition(m,n);
    tri_rapide(T,m,j);
    tri_rapide(T,j+1,n);
}
void tri_bulle (int T[],int n ){
    int i,j,tp,cp;
    for (i=0;i<n-1;i++){
        cp=0;
        for (j=0;j<n-1-i;j++){
            if (T[j]>T[j+1]){
                cp=1;
                tp=T[j];
                T[j]=T[j+1];
                T[j+1]=tp;
            }
        }
        if (cp==0)
            break;
    }
}

void main (){
    int n=5,i;
    for (i=0;i<n;i++){
        printf("%d\t",T[i]);
    }
    printf("\n");
    tri_bulle(T,n);
    for (i=0;i<n;i++){
        printf("%d\t",T[i]);
    }
    printf("\n"); 

}