/*
** get_next_line.h for  in /home/lefevr_h/Repository/Epitech/First_Year/CPE/CPE_2015_getnextline
**
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
**
** Started on  Tue Jan  5 02:47:02 2016 Lefevre Philippe
** Last update Fri Jan 22 15:50:30 2016 Lefevre Philippe
*/

#ifndef			GET_NEXT_LINE_H_
# define		GET_NEXT_LINE_H_
# include		<unistd.h>
# include		<stdlib.h>
# include		<errno.h>

# ifndef		READ_SIZE
#  define		READ_SIZE	(14)
# endif			/* !READ_SIZE */

char			*my_realloc(char *cur, int n);
char			*get_next_line(const int fd);

#endif			/* !GET_NEXT_LINE_H_ */
