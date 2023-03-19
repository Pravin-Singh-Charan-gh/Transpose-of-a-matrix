#include <stdio.h>
int main(){
    int mat[3][5]={
        {1,2,3,4,5},{6,7,8,9,0},{9,8,7,6,5}
    };
    int transpose[5][3],i,j;
    printf("Real Martix:-\n");
    for(i=0;i<3;i++){
     for(j=0;j<5;j++){
      printf("%d ",mat[i][j]);
      transpose[j][i]=mat[i][j];}
      printf("\n");
    }
    printf("Transpose of above matrix:-\n");
    for(j=0;j<5;j++){
        for(i=0;i<3;i++)
        printf("%d ",transpose[j][i]);
        printf("\n");
    }
}
