#include <stdio.h>

struct node{
    unsigned dist[10];
    unsigned from[10];
}rt[10];

int main(void)
{
    int i,j,k, count=0,nodes;
    unsigned int costmat[10][10];

    printf("Enter the number of nodes:");
    scanf("%d",&nodes);

    for(i=0;i<nodes;i++)
    {
        for(j=0;j<nodes;j++)
        {
            scanf("%d",&costmat[i][j]);
            costmat[i][i]=0;
            rt[i].dist[j]=costmat[i][j];
            rt[i].from[j]=j;
        }
    }

    do{
        count =0;
        for(i=0;i<nodes;i++)
        {
            for(j=0;j<nodes;j++)
            {
                for(k=0;k<nodes;k++)
                {
                    if(rt[i].dist[j]>costmat[i][k]+rt[k].dist[j])
                    {
                        rt[i].dist[j]=rt[i].dist[k]+rt[k].dist[j];
                        rt[i].from[j]=k;
                        count++;
                    }
                }
            }
        }

    }while(count!=0);

    for(i=0;i<nodes;i++)
    {
        printf("\n For router %d", i+1);
        for(j=0;j<nodes;j++){

            printf("\n Node %d via %d with a distance of %d.",j+1, rt[i].from[j], rt[i].dist[j]);

        }
    }
return 0;

}