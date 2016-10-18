/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetris_grid.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 16:27:53 by ppatil            #+#    #+#             */
/*   Updated: 2016/10/17 16:27:53 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TETRIS_GRID_H
# define TETRIS_GRID_H

# include "libft.h"
# include "tetris_point.h"
# include "tetris_piece.h"

struct	s_tgrid
{
	t_tpc		*pieces;
	t_pointc	*gpos;
	char		*buff;
	int			size;
	int			n;
};

typedef	struct s_tgrid	t_tgrid;

# define INL_IS_VALID(c) (c == '\n' || c == '#' || c == '.')
# define INL_TGRID_INIT (t_tgrid){NULL, NULL, NULL, 0, 0}
# define INL_TGRID_P(g, p) (char *)(g->buff + p.x + p.y * (g->size + 1))

void	tgrid_solve(t_tgrid *tg);

char	*tgrid_buff_init(int size);

void	tgrid_resize(t_tgrid *tg, int nsize);

int		tgrid_place(t_tgrid *tg, t_pointc guess, t_tpc pc, char id);

void	tgrid_unplace(t_tgrid *tg, t_pointc guess, t_tpc pc, char id);

void	tgrid_read_pieces(t_tgrid *tg, char *file_buff, int n);

int		tgrid_validate_pieces(t_tgrid *tg);

#endif
