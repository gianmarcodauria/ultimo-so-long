#ifndef STRUCT_SLONG_H
#define STRUCT_SLONG_H

#define COLLECTABLES 6
#define XPM_MAX 6

typedef struct s_third
{
	char	name_pos;
	int		X_ax;
	int		Y_ax;
	char	*img[XPM_MAX];
} t_third;

typedef struct s_second
{
    int     P;
    int     C;
    int     E;
    int     N;
	char	*map_path;
	int		heigth;
	int		width;
	t_third	spawn;
	t_third	out;
	t_third	ground;
	t_third	points;
	t_third enemy;
	t_third	coll[COLLECTABLES];
	int		n_c;
    int     n_p;
    int     n_out;
	int		img_wi;
	int		img_he;

} t_second;

typedef struct s_first
{
    char    **matrix;
    char    *floodmap;
    int     Xmax;
    int     Ymax;
	t_second	map;

} t_first;

# endif
