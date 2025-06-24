#ifndef UTILS_H
# define UTILS_H

# include "contact.h"

char	*str_trim(char *s);
char	*str_tolower(char *s);
int		is_valid_email(const char *s);
int		is_valid_phone(const char *s);

#endif