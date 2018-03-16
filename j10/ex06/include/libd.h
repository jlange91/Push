/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libd.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlange <jlange@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 16:58:11 by jlange            #+#    #+#             */
/*   Updated: 2015/11/05 17:05:10 by jlange           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBD_H
# define LIBD_H
# include <unistd.h>

int						ft_atoi(char *str);
int						ft_plus(int valeur1, int valeur2);
int						ft_minus(int valeur1, int valeur2);
int			        	ft_multiplication(int valeur1, int valeur2);
int						ft_division(int valeur1, int valeur2);
int						ft_modulo(int valeur1, int valeur2);
int                     ft_power(int valeur1, int valeur2);
int						check_and_send(char **argv, int(**f)(int, int));
int						ft_strlen(char *str);
void					ft_putnbr(long int nb);
void					ft_putchar(char c);

#endif
