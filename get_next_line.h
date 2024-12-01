/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:24:47 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/25 23:24:47 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# ifndef BUFFER_SIZE
# define BUFFER_SIZE 1024
# endif

//get_next_line.c
char	*one_line_into_str(int fd, char *str);
char	*get_next_line(int fd);
char	*extract_line(char *left_str);
char	*new_left_str(char *left_str);
// get_next_line_utils.c
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(const char *s1, const char *s2);
void	ft_bzero(void *s, size_t n);

#endif