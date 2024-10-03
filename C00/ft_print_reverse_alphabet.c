#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	count;
	
	count = 122;
	while (count >= 97)
	{
		write(1, &count, 1);
		count--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}