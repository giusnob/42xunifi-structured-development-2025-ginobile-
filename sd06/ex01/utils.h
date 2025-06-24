#ifndef UTILS_H
# define UTILS_H

# include "expense.h"
# include <stddef.h>

char	*str_trim(char *s);
char	*str_tolower(char *s);
int		parse_date(const char *s, t_date *out);   // returns 1 on success
int		cmp_dates(t_date a, t_date b);

#endif