#include <stdio.h>
#include <limits.h>

int main()
{
	char c;

	/*
	** W_CHARs
   */

	printf("rl_printf: %s%d%p%%%S%D%i%o%O%u%U%x%X%c%C\n","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
	ft_putchar('\n');
	ft_printf("ft_printf: %s%d%p%%%S%D%i%o%O%u%U%x%X%c%C\n\n","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');

	printf("rl_printf: %S\n", L"暖炉");
	ft_printf("ft_printf: %S\n\n", L"暖炉");

/**/	

/*
 *		MODIFIERS    // y'en a plein j'ai la flemme :D     check moulitest , pour voir les tests cherche le repo github moulitest -> ft_printf_tests/tests/
 */

	printf("rl_printf: %ju, %ju\n", 0, ULLONG_MAX);
	ft_printf("ft_printf: %ju, %ju\n\n", 0, ULLONG_MAX);

	/**/

	/*
	**  NULL string -> (null)   -> on s'en fout?
	*/

	printf("rl_printf: % s\n", NULL); 
	ft_printf("ft_printf: % s\n\n", NULL);
	
	printf("rl_printf: %+s\n", 0);
	ft_printf("ft_printf: %+s\n\n", 0);

	printf("rl_printf: %s\n", 0);
	ft_printf("ft_printf: %s\n", 0);
	
	/**/

	printf("rl_printf: %.p, %.0p\n", 0, 0);
	ft_printf("ft_printf: %.p, %.0p\n\n", 0, 0);
	
	printf("%"); 	// cf moulitest
	ft_printf("%");
	return (0);
}
