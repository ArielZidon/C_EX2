#include <stdio.h>
#include "my_mat.h"
#include <limits.h>

// void open(){
//         printf("Please select the desired action:\n \n");
//         printf("A to create a new graph.\n \n");
//         printf("B to know if there is a trajectory.\n \n");
//         printf("C to know what the shortest trajectory is.\n \n");
//         printf("D to exit the program.\n \n");
// }


void A(int mat[N][N]){

    for(size_t i=0 ; i<N ; ++i)
    {
        for(size_t j=0 ; j<N ; ++j)
        {
            // printf("value to %ld,%ld :",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}

void print_mat(int mat[N][N]){

    for(size_t i=0 ; i<N ; ++i)
    {
        for(size_t j=0 ; j<N ; ++j)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    // open();
}

void B(int i, int j,int mat[N][N]){
    if(mat[i][j]==0){
        printf("False\n");
    }
    else{
        printf("True\n");
    }
    // open();
}

void C(int i , int j ,int mat[N][N]){
    if(mat[i][j]!=0)
    {
    printf("%d\n",mat[i][j]);
    }
    else{
        printf("-1\n");
    }
    // open();
}


void algo(int arr[N][N])
{

    for (size_t k = 0; k < N; k++)
    {
        for (size_t i = 0; i < N; i++)
        {
            for (size_t j = 0; j < N; j++)
            {
                int ij = 0;
                if (i == j)
                {
                    arr[i][j] = 0;
                }
                else if (i == k || j == k ){
                    arr[i][j] = arr[i][j];
                }
                else{
                    int temp = 0;
                    if(arr[i][k]==0 ||  arr[k][j]==0){
                        temp = 99999999;
                    }
                    else{
                        temp = arr[i][k] + arr[k][j];
                    }
                    if(arr[i][j]==0){
                        ij=99999999;
                    }
                    else{
                        ij = arr[i][j];
                    }
                    arr[i][j] = ((ij>temp) ? temp : arr[i][j] );
                }
            }
        }
    }
}