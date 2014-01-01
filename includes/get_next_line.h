/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/04 17:29:17 by mdelage           #+#    #+#             */
/*   Updated: 2013/12/10 13:08:12 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUF_SIZE 4096

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <libft.h>

size_t	ft_strlen_spe(char *str, char c);
void	ft_strcpy_clean(char dest[BUF_SIZE + 1], char *src);
char	*ft_strjoin_spe(char *s1, char *s2, size_t l_s2);
void	get_next_line_subfunc(char buf[BUF_SIZE + 1], size_t len, char *line);
int		get_next_line(int const fd, char **line);

#endif /* !GET_NEXT_LINE_H */
