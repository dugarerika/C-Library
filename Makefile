
SRCS			=	ft_isalnum.c ft_isprint.c ft_putchar_fd.c ft_itoa.c\
					ft_strlcat.c ft_substr.c ft_isalpha.c ft_atoi.c\
					ft_memcpy.c  ft_putendl_fd.c ft_strlcpy.c \
					ft_tolower.c ft_bzero.c ft_isascii.c ft_strchr.c\
					ft_memmove.c ft_putnbr_fd.c ft_strlen.c ft_strrchr.c \
<<<<<<< HEAD
					ft_toupper.c ft_isdigit.c ft_memset.c ft_memcmp.c \
					ft_putstr_fd.c  ft_strjoin.c
=======
					ft_toupper.c ft_isdigit.c ft_memset.c  \
					ft_putstr_fd.c ft_strjoin.c ft_atoi
>>>>>>> db76a47b32e915ab56a2442f80849964d0fe33e0
OBJS			= $(SRCS:.c=.o)

# BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
# 					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
# 					ft_lstmap.c ft_lstnew.c ft_lstsize.c
# BONUS_OBJS		= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus
