//
// Created by 郝鸿 on 15/04/2018.
//

#include <stdio.h>
#include <sys/stat.h>

int main()
{
    struct stat infobuf;

    if (stat("/etc/passwd", &infobuf) == -1)
        perror("/etc/passwd");
    else
        printf("The size of /etc/passwd is %lld\n", infobuf.st_size);
}