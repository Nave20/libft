NAME = libft.a

SOURCES = \
	ft_arg_error.c	\
	ft_atoi.c		\
	ft_bzero.c		\
	ft_calloc.c		\
	ft_isalnum.c	\
	ft_isalpha.c	\
	ft_isascii.c	\
	ft_isdigit.c	\
	ft_isprint.c	\
	ft_memchr.c		\
	ft_memcmp.c		\
	ft_memcpy.c		\
	ft_memmove.c	\
	ft_memset.c		\
	ft_strchr.c		\
	ft_strdup.c		\
	ft_strlcat.c	\
	ft_strlcpy.c	\
	ft_strlen.c		\
	ft_strncmp.c	\
	ft_strnstr.c	\
	ft_strrchr.c	\
	ft_tolower.c	\
	ft_toupper.c	\
	ft_substr.c		\
	ft_strjoin.c	\
	ft_strtrim.c	\
	ft_split.c		\
	ft_itoa.c		\
	ft_strmapi.c	\
	ft_striteri.c	\
	ft_putchar_fd.c	\
	ft_putstr_fd.c	\
	ft_putendl_fd.c	\
	ft_putnbr_fd.c	\
	ft_putnbr_base.c\
	ft_printf.c

BONUS =	\
	ft_lstnew_bonus.c		\
	ft_lstadd_front_bonus.c	\
	ft_lstsize_bonus.c		\
	ft_lstlast_bonus.c		\
	ft_lstadd_back_bonus.c	\
	ft_lstdelone_bonus.c	\
	ft_lstclear_bonus.c		\
	ft_lstiter_bonus.c		\
	ft_lstmap_bonus.c

OBJS	=	${SOURCES:.c=.o}

B_OBJS	=	${BONUS:.c=.o}

HEADER	=	libft.h

NAME	=	libft.a

CC	=	cc

AR	=	ar -rc

FLAGS	=	-Wall -Wextra -Werror

all	:	${NAME}

%.o	:	%.c ${HEADER}
	${CC} ${FLAGS} -c $< -o $@

${NAME}	:	${OBJS} Makefile
	${AR} ${NAME} ${OBJS}

bonus	:
	@make SOURCES="${SOURCES} ${BONUS}"

clean	:
	rm -f ${OBJS} ${B_OBJS}

fclean	:	clean
	rm -f ${NAME} ${B_OBJS}

re	:	fclean all

.PHONY	:	all clean fclean re bonus