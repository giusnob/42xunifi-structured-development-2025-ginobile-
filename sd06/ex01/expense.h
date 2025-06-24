#ifndef EXPENSE_H
# define EXPENSE_H

# define MAX_EXPENSES 1000

typedef struct s_date {
    int year;
    int month;
    int day;
}   t_date;

typedef struct s_expense {
    t_date  date;
    double  amount;
    char    *category;
    char    *description;
}   t_expense;

#endif