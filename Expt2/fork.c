// Program to perform Fork
#include <unistd.h>
#include <stdio.h>

int main()
{
    pid_t child=fork();
    if(child==-1)
    {
        printf("Fork is unsuccessful!");
    }
    else if(child==0)
    {
        printf("Fork is successful and the Process Id is:%d!",getpid());
    }
}