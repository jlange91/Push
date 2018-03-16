/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libd.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 16:58:11 by jlange            #+#    #+#             */
/*   Updated: 2015/11/29 20:28:13 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBD_H
# define LIBD_H
# include <unistd.h>

typedef int				(*t_s_opp)(int, int);

typedef struct			s_opp
{
	char *c;
	t_s_opp func;
}						t_opp;

int						ft_atoi(char *str);
int						ft_add(int valeur1, int valeur2);
int						ft_sub(int valeur1, int valeur2);
int						ft_mul(int valeur1, int valeur2);
int						ft_div(int valeur1, int valeur2);
int						ft_mod(int valeur1, int valeur2);
int						ft_usage(int valeur1, int valeur2);
int						check_and_send(char **argv);
int						ft_strlen(char *str);
void					ft_putnbr(long int nb);
void					ft_putchar(char c);

#endif
