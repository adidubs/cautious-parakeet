#include <stdio.h>
int main(){

    
    int a[10][10],r ,c,i,j,sum=0;
    printf("Enter the number of the rows and coloums .");
    scanf("%d%d",&r,&c);


    if (r==c){
    printf("Enter the element of the  Matrix");
    for (i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
        }
    }

    for (i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    {
    if (i==j)
    {
    sum= sum+a[i][j];
    }
    }
    }


    printf("The sum of the trace of the given Matrix Is %d",sum);
    }
    else
{
    printf("Trace not find !..");

}
}