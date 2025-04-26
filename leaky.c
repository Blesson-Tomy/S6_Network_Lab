#include <stdio.h>

int main()
{
    int size, store, in, out, n;

    printf("Enter bucket Size:");
    scanf("%d",&size);

    printf("Enter outgoing rate:");
    scanf("%d",&out);

    printf("Enter number of packets:");
    scanf("%d",&n);

    while(n!=0)
    {
        printf("Incoming Packet Size:");
        scanf("%d",&in);

        if(in<size-store)
        {
            store=store+in;
            printf("Bucket Size is: %d out of &d.", store, size);
        }
        else
        {
            printf("Dropped %d no of packets\n.", in-size+store);
            store=size;
        }

        printf("\n");

        if(store>=out)
        {
            store=out-store;
        }
        if(store<0)
        {
            store=store*-1;
        }
    }


}