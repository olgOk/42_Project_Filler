/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 11:18:31 by user              #+#    #+#             */
/*   Updated: 2020/04/14 16:48:27 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# include <stdio.h>
# include "../libft/libft.h"

typedef	struct	s_game_info
{
	char		enemy_char;
	char		player_char;
	int 		map_row;
	int 		map_col;
	char		**piece;
	char		**map;
	int			piece_x;
	int			piece_y;
}				t_game_info;

void			name_parsing(t_game_info *game);
void			map_parsing(t_game_info *game);
void    		create_map(t_game_info *game);
void    		create_piece_map(t_game_info *game);
void    		ft_clean_array(t_game_info *game);
void 			placement(t_game_info *game);


#endif