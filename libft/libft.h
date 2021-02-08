/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flemos-d <flemos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 05:59:36 by flemos-d          #+#    #+#             */
/*   Updated: 2021/02/08 21:18:28 by flemos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);

void				ft_bzero(void *str, size_t n);

void				*ft_calloc(size_t nitems, size_t size);

int					ft_isalnum(int c);

int					ft_isalpha(int c);

int					ft_isascii(int c);

int					ft_isdigit(int c);

int					ft_isprint(int c);

void				*ft_memccpy(void *dest, const void *src,
						int c, size_t count);

void				*ft_memchr(const void *str, int c, size_t n);

int					ft_memcmp(const void *str1, const void *str2, size_t n);

void				*ft_memcpy(void *dest, const void *src, size_t n);

void				*ft_memmove(void *dest, const void *src, size_t n);

void				*ft_memset(void *str, int c, size_t n);

char				*ft_strchr(const char *haystack, int needle);

char				*ft_strdup(const char *string);

unsigned int		ft_strlcat(char *dest, char *src, size_t size);

unsigned int		ft_strlcpy(char *dest, char *src, size_t size);

size_t				ft_strlen(const char *s);

int					ft_strncmp(const char *str1, const char *str2, size_t n);

char				*ft_strnstr(const char *big, const char *little,
						size_t len);

char				*ft_strrchr(const char *haystack, int needle);

int					ft_tolower(int c);

int					ft_toupper(int c);

/*
** Aditional Functions
*/

char				*ft_substr(char const *s, unsigned int start, size_t len);

char				*ft_strjoin(char const *s1, char const *s2);

char				*ft_strtrim(char const *s1, char const *set);

char				**ft_split(char const *s, char c);

char				*ft_itoa(int n);

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void				ft_putchar_fd(char c, int fd);

void				ft_putnbr_fd(int n, int fd);

void				ft_putendl_fd(char *s, int fd);

void				ft_putstr_fd(char *s, int fd);

/*
** Bonus Functions
*/

t_list				*ft_lstnew(void *content);

void				ft_lstadd_front(t_list **lst, t_list *new);

int					ft_lstsize(t_list *lst);

t_list				*ft_lstlast(t_list *lst);

void				ft_lstadd_back(t_list **lst, t_list *new);

void				ft_lstdelone(t_list *lst, void (*del)(void*));

void				ft_lstclear(t_list **lst, void (*del)(void*));

void				ft_lstiter(t_list *lst, void (*f)(void *));

t_list				*ft_lstmap(t_list *lst, void *(*f)
						(void *), void (*del)(void *));

#endif
