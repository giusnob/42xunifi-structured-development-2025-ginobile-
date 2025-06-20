#ifndef EXPENSE_H
# define EXPENSE_H

# include <stddef.h>
# define MAX_EXPENSES 1000

typedef struct s_date
{
	int  year;
	int  month;
	int  day;
}	t_date;

typedef struct s_expense
{
	size_t	id;          // ID sequenziale (>0)
	t_date	date;        // sempre YYYY-MM-DD validata
	double	amount;      // >0, 2 cifre decimali
	char	*category;   // trim, case-fold
	char	*desc;       // descrizione libera (può essere "")
}	t_expense;

// ───────────── API ─────────────
int     load_expenses(const char *file, t_expense v[], size_t cap);
void    filter_by_category(const t_expense *src, size_t n,
                           const char *substr, t_expense *out, size_t *out_n);
int     filter_by_daterange(const t_expense *src, size_t n,
                            t_date from, t_date to,
                            t_expense *out, size_t *out_n);
void    summary(const t_expense *v, size_t n);   // stampa totali & breakdown
void    free_expenses(t_expense v[], size_t n);

/* parser utils */
int     parse_date(const char *s, t_date *out);
int     cmp_date(t_date a, t_date b);            // <0,0,>0

#endif
