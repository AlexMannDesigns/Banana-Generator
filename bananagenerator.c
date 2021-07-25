#include <stdio.h>
#include <unistd.h>

int		main(void)
{
	int		cntr;
	int		i;
	char		*str;
	char		*m;

	m = "Bananas";
	str = m;
	i = 1;
	printf("Enter amount of bananas: ");
	scanf(" %d", &cntr);
	if (cntr == 0)
	{
		printf("No bananas found here.\n");
		return (1);
	}
	if (cntr < 0)
	{
		printf("Negative bananas do not count.\n");
		return (1);
	}
	while (i <= cntr)
	{
		if (i == 1)
			printf("1 Banana\n");
		else
			printf("%d %s \n", i, m);
		i++;
	}
	write(1, "Reject modernity, return to monke\n", 35);
	return (0);
}

