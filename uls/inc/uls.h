#ifndef ULS_H_
#define ULS_H_

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <pwd.h>
#include <errno.h>
#include <grp.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <time.h>

#include "libmx.h"

int mx_empty_dir(char *dptr);
bool file_exist(char *name);
int mx_flag_l(void);
int mx_no_flags(void);

#endif
