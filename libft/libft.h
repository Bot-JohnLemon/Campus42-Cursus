/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-p <dgomez-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:19:26 by dgomez-p          #+#    #+#             */
/*   Updated: 2022/05/03 17:15:30 by dgomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Those are the pre-processing direcctives
#ifndef LIBFT_H
# define LIBFT_H
//Here ikm including some standart libraries
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
//Here I created the structures of some C functions
typedef struct s_list
{
	void			*content;
	struct s_list	*next;	
}	t_list;
typedef struct s_split_next
{
	size_t	start;
	size_t	length;
}	t_split_next;

//Now im including my own C functions
//PART-I
int				ft_atoi(const char *str);
void			ft_bzero(void *str, size_t n);
void			*ft_calloc(size_t number, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t n);
void			*ft_memset(void *str, int c, size_t len);
char			*ft_strchr(const char *str, int c);
char			*ft_strdup(const char *str);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlen(const char *s);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_strrchr(const char *str, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);

//PART-II

char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
//Here I close the pre-processing directives, adn the program is closed
#endif
