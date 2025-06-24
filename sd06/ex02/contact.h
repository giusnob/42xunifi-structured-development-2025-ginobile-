#ifndef CONTACT_H
# define CONTACT_H

# define MAX_CONTACTS 1000
# define PHONE_MAXLEN 32
# define EMAIL_MAXLEN 64

# include <stddef.h>

typedef struct s_contact {
	char	*name;                       // trimmed, non‑empty
	char	phone[PHONE_MAXLEN];         // digits + symbols
	char	email[EMAIL_MAXLEN];         // basic pattern user@host
	char	*tag;                        // optional category / label
}   t_contact;

#endif
