#include <stdio.h>
#include <unistd.h>

int main()
{
    char *args[] = {"./EXEC",NULL};
    execv(args[0],args);
}