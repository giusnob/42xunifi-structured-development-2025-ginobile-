#ifndef LOADER_H
# define LOADER_H

# include "expense.h"
# include <stddef.h>

int		load_expenses(const char *filename, t_expense arr[], size_t max);
void	free_expenses(t_expense arr[], size_t count);
void	warn_malformed_line(size_t line, const char *raw);

#endif