/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantos <jsantos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:22:54 by jsantos           #+#    #+#             */
/*   Updated: 2021/12/14 14:22:54 by jsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/*
**	Double Linked List: structure for the elements of the stack with content
**	and a pointer to the previous and the next elements.
*/

typedef struct s_stack
{
	int				content;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

/*
**	FIRST PART
*/

int				ft_atoi(const char *str);
void			ft_bzero(void *s, int n);
void			*ft_calloc(size_t count, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *b, int c, size_t len);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s1);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlen(const char *s);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
char			*ft_strrchr(const char *s, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);

/*
**	SECOND PART
*/

char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char *str, char c, int *nb_str);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

/*
**	BONUS
*/

t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

/*
**	STACKS
*/

t_stack			*stack_new(int new_content);
int				stack_pop(t_stack **stack);
void			stack_push(t_stack **stack, int new_content);
int				stack_size(t_stack *stack);
t_stack			*stack_bottom(t_stack *top_element);
void			stack_clear(t_stack *stack);

/*
**	MY OWN FUNCTIONS
*/

double			ft_power(double base, double exp);
int				ft_abs_int(int number);
double			ft_abs_double(double number);
double			is_in_range_int(double value, double min, double max);
int				is_in_range_long(long value, long min, long max);
int				is_int(char *str);
int				ft_isspace(int c);
int				count_chr_instances(char *str, char chr);
int				*map_chr_instances(char *str, char chr, size_t *nb_instances);
void			ft_str_eraser(void *str);
char			*ft_add_chars(char *original, char c, size_t instances);
void			free_matrix(void **matrix, int arrays);
void			*free_if_not_null(void *pointer);
int				ft_array_malloc(int **array, size_t size);
int				ft_str_malloc(char **str, size_t length);

#endif
