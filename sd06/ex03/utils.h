#ifndef UTILS_H
# define UTILS_H

# include "movie.h"

char	*str_trim(char *s);
char	*str_tolower(char *s);
int		parse_date(const char *s, t_date *out);
int		cmp_date(t_date a, t_date b);

#endif