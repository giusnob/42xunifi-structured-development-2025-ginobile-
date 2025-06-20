# ==========================================
# Community Digital Library – ex00 (sd05)
# ==========================================

# ---- Project output ----------------------
NAME       := libtool

# ---- Directories -------------------------
SRCDIR     := src
INCDIR     := include
LIBFT_DIR  := ./libft

# ---- Sources / Objects -------------------
SRC := $(SRCDIR)/main.c \
       $(SRCDIR)/catalog.c \
       $(SRCDIR)/search.c \
       $(SRCDIR)/utils.c

OBJ := $(SRC:.c=.o)

# ---- Compiler flags ----------------------
CC      := cc
CFLAGS  := -Wall -Wextra -Werror -I$(INCDIR) -I$(LIBFT_DIR)

# ---- Libft --------------------------------
LIBFT_A := $(LIBFT_DIR)/libft.a

# ==========================================

$(NAME): $(OBJ) $(LIBFT_A)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT_A) -o $(NAME)

# Build libft if missing or stale
$(LIBFT_A):
	$(MAKE) -C $(LIBFT_DIR)

# Generic pattern rule
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# ---- Cleaning rules -----------------------
clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean $(NAME)

.PHONY: clean fclean re
