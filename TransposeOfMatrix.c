#include <stdio.h>
int main()
{
int a[10][10],trans[10][10],i,j,r,c;
printf ("\nenter the number of rows and coloums ");
scanf("%d%d",&r,&c);
printf("\nthe element of the matrixs are  :");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);

    }
}

for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        trans[j][i]=a[i][j];    //To interchange the values 
    }
}

for(i=0;i<c;i++)
{
    for(j=0;j<r;j++)
    {
        printf("%d\t",trans[i][j]);
    }
        printf("\n");

    
}


}