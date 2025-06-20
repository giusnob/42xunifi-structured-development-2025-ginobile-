#include "book.h"
#include <ctype.h>

char *str_trim(char *s)   { return s; }   // TODO
char *str_tolower(char *s){ char *p = s; while (*p){*p=tolower(*p); p++;} return s; }
