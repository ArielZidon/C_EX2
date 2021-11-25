#include <stdio.h>
#include "my_mat.h"
#define N 10
int count;
char pick;

int main(){
    int mat[N][N];
    // printf("*********************************************** \n \n");
    // open();
    do{
        // printf("Your pick: ");
        pick = getchar();
        // printf("\n");

        if(pick == 'A'){    //Pressing A creates a matrix use the algorithm.
            A(mat);
            algo(mat);
            // printf("\n \n");
            // print_mat(mat);   
        }

        else if(pick == 'B'){ //Pressing B shows us whether there is a connection between 2 numbers selected on the graph.
            int i, j;
            // printf("Please pick 2 numbers between 0 and 9 to check if they have connection");
            scanf("%d %d", &i, &j);
            B(i,j,mat);
            // print_mat(mat);
        }

        else if(pick == 'C'){ //Pressing C will give us the size of the shortest route between the 2 numbers selected.
            int i, j;
            // printf("Please select 2 numbers between 0 and 9 on the graph to see which is the smallest way among them. ");
            scanf("%d %d", &i, &j);
            C(i,j,mat);
        }

        else if(pick == 'D'){
            // printf("Bye bye! \n");
            break;
        }

        else{
            //printf("\n \n ");
            //printf("You can pick only A,B,C or D! \n");
        }

    }
    while((scanf("%c",&pick)));
     
return 0;
}