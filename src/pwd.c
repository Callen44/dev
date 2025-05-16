#include <stdio.h>
#include <unistd.h>
#include <limits.h>

// print linked directory (the current directory without resolving links)
int printLD(){
    char cwd[PATH_MAX];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("Current working directory: %s\n", cwd);
        return 0;
    } else {
        perror("could not determine current working directory! getcwd() failed!");
        return 1;
    }
}

int main(){
    return printLD();
}