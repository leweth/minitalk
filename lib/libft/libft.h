#ifndef LIBFT_H
# define LIBFT_H


#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include "../printf/ft_printf.h"
#include <stdbool.h>


# define SUCCESS 0
# define FAILURE -1

# define OVERFLOW -1
# define UNDERFLOW 0


typedef struct s_data {   
	unsigned char	*string;
	int				len;
	size_t			received_bits;
	size_t			offset;
	size_t			byte_pointer;
	pid_t			c_pid; // You can access the pid here.
}	t_data;


int		ft_atoi(const char *str);
size_t	ft_strlen(const char *str);
int		send_data(void *ptr, size_t limit, pid_t pid);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);

#endif