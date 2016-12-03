
#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdio.h>

size_t	ft_strlen(char *str);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strncpy(char *dst, char *src, size_t len);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strncat(char *s1, char *s2, size_t n);
size_t	ft_strlcat(char *dst, char *src, size_t size);

#endif
