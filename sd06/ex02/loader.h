#ifndef LOADER_H
# define LOADER_H

# include "contact.h"

int		load_contacts(const char *file, t_contact dst[], size_t cap);
void	free_contacts(t_contact dst[], size_t count);
void	warn_malformed_line(size_t ln, const char *raw);

#endif