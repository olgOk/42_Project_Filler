/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 13:17:11 by user              #+#    #+#             */
/*   Updated: 2020/04/14 14:42:27 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void    create_map(t_game_info *game)
{
	int		i;

    i = 0;
	game->map = (char **)malloc(sizeof(char *) * (game->map_row + 1));
	while (i < game->map_row)
		game->map[i++] = (char *)malloc(sizeof(char) * (game->map_col + 1));
	game->map[i] = NULL;
}

void    create_piece_map(t_game_info *game)
{
    int		i;

    i = 0;
	game->piece = (char **)malloc(sizeof(char *) * (game->piece_y + 1));
	while (i < game->piece_y)
		game->piece[i++] = (char *)malloc(sizeof(char) * (game->piece_x + 1));
	game->piece[i] = NULL;
}

void    ft_clean_array(t_game_info *game)
{
    int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(game->piece[i]))
		return ;
	while (game->piece[i])
		i++;
	while (j < i)
	{
		free(game->piece[j]);
		j++;
	}
	free(game->piece);
}