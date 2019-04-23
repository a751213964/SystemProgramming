/*************************************************************************
	> File Name: Su_homework1.c
	> Author:zhaohang 
	> Mail:751213964@qq.com 
	> Created Time: 2019年04月17日 星期三 18时18分55秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>   
#include <pwd.h>

int main(void) {   
    char buf[100];
    char hostname[100] = {'\0'};
    int res = gethostname(hostname, sizeof(hostname));
    struct passwd *pwd;
    pwd = getpwuid(getuid());
    getcwd(buf,sizeof(buf));
    printf("\033[44;32;1m%s@%s\033[0m", pwd->pw_name, hostname);
    printf(":%s\n", buf);
    return 0;
 } 


