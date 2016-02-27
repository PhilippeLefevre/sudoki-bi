/*
** sudoki.h for sudoki in /home/lefevr_h/Repository/Epitech/First_Year/CPE/sudoki-bi/inc
**
** Made by Lefevre Philippe
** Login   <lefevr_h@epitech.net>
**
** Started on  Sat Feb 27 11:41:24 2016 Lefevre Philippe
** Last update Sat Feb 27 18:47:57 2016 Lefevre Philippe
*/

#ifndef			SUDOKU_BI_H_
# define		SUDOKU_BI_H_
# include		"my.h"
# include		"get_next_line.h"

void			*xmalloc(size_t size);

int			new_game(int y, int count);
int			aff_game(int map[9][9], int valid);

int			check_line(int nb, int map[9][9], int y);
int			check_collumn(int nb, int map[9][9], int x);
int			check_block(int nb, int map[9][9], int y, int x);
int			check_complete(int map[9][9], int position);

int			fill_map(int map[9][9], char *buf, int y, int x);
int			map_error(char *buf);

#endif			/* !SUDOKU_BI_H_ */
