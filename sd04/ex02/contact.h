#ifndef CONTACT_H
# define CONTACT_H

# include <stddef.h>
# define MAX_CONTACTS 1000
# define PHONE_MAXLEN 32
# define EMAIL_MAXLEN 64

typedef struct s_contact
{
	size_t	id;                     // positive & unique       
	char	*name;                  // non-empty          
	char	phone[PHONE_MAXLEN];    // digits + symbols, ≥1 digit
	char	email[EMAIL_MAXLEN];    // valid basic pattern
	char	*city;                  // non-empty
	char	*address;               // may be empty
}	t_contact;

int     load_contacts(const char *file, t_contact v[], size_t cap);
int     save_contacts(const char *file, const t_contact v[], size_t n);
void    list_contacts(const t_contact v[], size_t n);
size_t  add_contact(t_contact v[], size_t *n);
int     update_contact(t_contact *c);
int     delete_contact(t_contact v[], size_t *n, size_t id);

void    search_by_name(const t_contact *src, size_t n,
                       const char *substr);
void    search_by_city(const t_contact *src, size_t n,
                       const char *substr);

void    free_contacts(t_contact v[], size_t n);

#endif
