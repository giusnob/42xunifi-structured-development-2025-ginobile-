#ifndef FILTER_H
# define FILTER_H

# include "expense.h"
# include <stddef.h>

int		filter_by_category(const t_expense src[], size_t n, const char *query,
							t_expense out[], size_t max);
int		filter_by_dates(const t_expense src[], size_t n, t_date from, t_date to,
						t_expense out[], size_t max);

#endif