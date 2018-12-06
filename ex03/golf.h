#ifndef GOLF_H
#define GOLF_H

constexpr int Len = 40;
struct golf
{
	char	fullName[Len];
	int	handicap;
};

void	setGolf(golf &, const char*, int);
int	setGolf(golf &);
void	handicap(golf &, int);
void	showGolf(const golf &);


#endif
