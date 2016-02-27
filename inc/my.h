/*
** my.h for wolf3d in /home/lefevr_h/epitech/first_year/gfx_wolf3d/lib/my/inc
**
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
**
** Started on  Tue Dec 29 10:53:47 2015 Lefevre Philippe
** Last update Fri Feb 26 23:06:38 2016 Lefevre Philippe
*/

#ifndef			MY_H_
# define		MY_H_
# include		<unistd.h>
# include		<stdlib.h>

# define	KNRM	"\x1B[0m"
# define	KRED	"\x1B[31m"
# define	KGRN	"\x1B[32m"
# define	KYEL	"\x1B[33m"
# define	KBLU	"\x1B[34m"
# define	KMAG	"\x1B[35m"
# define	KCYN	"\x1B[36m"
# define	KWHT	"\x1B[37m"

# define	SUCCESS	0
# define	ERROR	-1

int			my_strlen(char *str);
int			my_getnbr(char *str);

int			my_putchar(int fd, char c);
int			my_putstr(int fd, char *str);
int			my_put_nbr(int fd, int nb);
int			my_putnbr_base(int fd, int nb, char *base);

#endif			/* !MY_H_ */
