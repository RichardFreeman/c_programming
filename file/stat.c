#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{

    char path[100];
    struct stat buf;
    mode_t modes;

    printf("Please input your file path:\n");
    scanf("%s", path);

    // int st = lstat(path, &buf);
    int st = stat(path, &buf);

    if(st == -1)
    {
        printf("The path is not correct!");
    }

    modes = buf.st_mode;

    printf("file size: %lld\n",  buf.st_size);
    printf("device number: %d\n", buf.st_dev);
    printf("link:%d\n", buf.st_nlink);
    printf("user id:%d\n", buf.st_uid);
    printf("group id:%d\n", buf.st_gid);
    printf("io buffer size:%d\n", buf.st_blksize);
    printf("file block count:%lld\n", buf.st_blocks);
    printf("last time readed:%ld\n", buf.st_atime);

    if(S_ISREG(buf.st_mode))
        printf("file type is regular\n");
    else if(S_ISDIR(buf.st_mode))
        printf("file type is directory\n");

    if(!S_ISDIR(modes) && (modes & S_IRWXU) == S_IXUSR)
        printf("file persion model: %d", buf.st_mode);

    return(0);
}
