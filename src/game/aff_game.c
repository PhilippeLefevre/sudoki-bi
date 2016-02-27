/*
** aff_game.c for sudoki in /home/lefevr_h/Repository/Epitech/First_Year/CPE/sudoki-bi/src/game
** 
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
** 
** Started on  Sat Feb 27 11:51:50 2016 Lefevre Philippe
** Last update Sat Feb 27 12:12:55 2016 mathilde charpiot
*/

#include		"sudoki.h"

void    affichage(int   tab[9][9])
{
  int   i;
  int   j;

  i = 0;
  j = 0;
  while(i < 9)
    {
      while(j < 9)
        {
          printf(((j + 1)% 3) ? "%d " : "%d|", tab[i][j]);
          j++;
        }
      my_putchar('\n');
      if(!((i + 1)% 3)
         my_putstr("------------------");
	 i++;
	 }
      my_putstr("\n\n");
}
