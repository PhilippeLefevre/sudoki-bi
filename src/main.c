/*
** main.c for sudoki in /home/lefevr_h/Repository/Epitech/First_Year/CPE/sudoki-bi/src
**
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
**
** Started on  Sat Feb 27 11:43:42 2016 Lefevre Philippe
** Last update Sun Feb 28 19:49:47 2016 Lefevre Philippe
*/

#include		"sudoki.h"

int			main(int ac, char **av)
{
  (void)av;
  if (ac == 1)
    new_game(0, 0);
  return (0);
}
