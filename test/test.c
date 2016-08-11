
#include "../ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main ()
{


	/*
	 * to fix
	 */

	// fix itoa_base with negatives

	// all NULL cases
	
	// z & j

	// printf("%%\n", 808);
  // ft_printf("\n");
  // ft_printf("%%\n");
  // ft_printf("%d\n", 42);
  // ft_printf("%30.20d\n", 41);
  // ft_printf("%.10d\n", 42);
 


  // ft_printf("%lld\n", 9223372036854775807);
  // ft_printf("%x\n", 505);
  // ft_printf("%X\n", 505);
  // ft_printf("%p\n", &ft_printf);






  // ft_printf("%20.15d\n", 54321);
  // ft_printf("%-10d\n", 3);
  // ft_printf("% d\n", 3);
  // ft_printf("%+d\n", 3);
  // ft_printf("%010d\n", 1);
  // ft_printf("%hhd\n", 0);
  // ft_printf("%jd\n", 9223372036854775807);
  // ft_printf("%zd\n", 4294967295);
  // ft_printf("%\n");
  // ft_printf("%U\n", 4294967295);
  // ft_printf("%u\n", 4294967295);
  // ft_printf("%o\n", 40);
  // ft_printf("%%#08x\n", 42);
  // ft_printf("%x\n", 1000);
  // ft_printf("%#X\n", 1000);
  // ft_printf("%s\n", NULL);
  // ft_printf("%S\n", L"ݗݜशব");
  // ft_printf("%s%s\n", "test", "test");
  // ft_printf("%s%s%s\n", "test", "test", "test");
  // ft_printf("%C\n", 15000);
	

	 // ft_putnbr(printf("%"));
	 // ft_putnbr(ft_printf("%"));
	 //ft_printf("%");

	 //ft_putnbr(printf("rl_printf: %s\n", NULL));
	 //ft_printf("ft_printf: % 12s\n\n", NULL);
	// ft_putchar('\n');
/*
	 printf("rl_printf: %\n", 0);
	 ft_printf("ft_printf: %\n\n", 0);

	printf("rl_printf: %#.5x\n", 1);
	ft_printf("ft_printf: %#.5x\n", 1);

	 printf("rl_printf: %#o\n", 0);
	 ft_printf("ft_printf: %#o\n\n", 0);

	 printf("rl_printf: %p\n", 0);
	 ft_printf("ft_printf: %p\n\n", 0);

	printf("rl_printf: %S\n", L"暖炉");
	ft_printf("ft_printf: %S\n\n", L"暖炉");
	
printf("rl_printf: %s%d%p%%%S%D%i%o%O%u%U%x%X%c%C\n","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
ft_printf("ft_printf: %s%d%p%%%S%D%i%o%O%u%U%x%X%c%C\n\n","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
*/
	/*
	**  TESTS STR / CHAR


	 printf("------> TESTS s, c <-------\n\n");

	
	 ft_printf("ft_printf: %c\n", 0);  // cat -e
	 printf("rl_printf: %c\n\n", 0);

  	printf("%d\n", ft_printf("ft_printf: %10s is a string\n\n", "this"));
 	printf("%d\n\n", printf("rl_printf: %10s is a string\n\n", "this"));

	  ft_printf("ft_printf: %-.2s is a string\n", "");
	  printf("rl_printf: %-.2s is a string\n\n", "");

	 ft_printf("ft_printf: %5.2s is a string\n", "this");
	 printf("rl_printf: %5.2s is a string\n\n", "this");

	 printf("rl_printf: %.2s\n", "test");
	 ft_printf("ft_printf: %.2s\n\n", "test");
*/

	/*
	** TESTS d
	


	 printf("------> TESTS num <-------\n\n");

	printf("rl_printf: %#x\n", 0);
	ft_printf("ft_printf: %#x\n\n", 0);

	 printf("rl_printf: %#.o\n", 0, 0);
	 ft_printf("ft_printf: %#.o\n", 0, 0);

	 printf("rl_printf: %.d, %.0d\n", 0, 0);
	 ft_printf("ft_printf: %.d, %.0d\n\n", 0, 0);

	printf("rl_printf: %.4d\n", 42);
	ft_printf("ft_printf: %.4d\n\n", 42);

	printf("rl_printf: %15.4d\n", -42);
	ft_printf("ft_printf: %15.4d\n\n", -42);

	 printf("rl_printf: %+i\n", 42);
	 ft_printf("ft_printf: %+i\n\n", 42);

	 printf("rl_printf: %03.2d\n", 0);
	 ft_printf("rl_printf: %03.2d\n\n", 0);

	 printf("rl_printf: %-+10.5d\n", 4242);
	 ft_printf("ft_printf: %-+10.5d\n\n", 4242);

	 printf("rl_printf: %+10.5d\n", 4242);
	 ft_printf("ft_printf: %+10.5d\n\n", 4242);
	 
	 printf("rl_printf: % 10.5d\n", 4242);
	 ft_printf("ft_printf: % 10.5d\n\n", 4242);

	 printf("rl_printf: %10.5d\n", 4242);
	 ft_printf("ft_printf: %10.5d\n\n", 4242);

	 printf("rl_printf: %.4d\n", 42);    // test same with x,o,z,j
	 ft_printf("ft_printf: %.4d\n\n", 42);

	 printf("rl_printf: %05d\n", -42);
	 ft_printf("ft_printf: %05d\n\n", -42);
	 
	 printf("rl_printf: %0+5d\n", -42);
	 ft_printf("ft_printf: %0+5d\n\n", -42);

	 printf("rl_printf: %lld\n", -9223372036854775808);
	 ft_printf("ft_printf: %lld\n\n", -9223372036854775808);


*/



	/*
	**  TESTS o, O, x, X, u, U
	

 	printf("------> TESTS o, x, u <-------\n\n");


  * cas particulier
*/  
// 	ft_printf("ft_printf: %#.0x\n", 0, 0);
// 	printf("rl_printf: %#.0x\n\n", 0, 0);

// 	printf("rl_printf: %lu\n", "4294967296");
// 	ft_printf("ft_printf: %lu\n\n", "4294967296");

// 	ft_printf("ft_printf: %#.x\n", 0, 0);
// 	printf("rl_printf: %#.x\n\n", 0, 0);
/**/


	
/*
**   tests ok 

 	printf("rl_printf: %-10.5o\n", 2500);
 	ft_printf("ft_printf: %-10.5o\n\n", 2500);

 	printf("rl_printf: %-5.10o\n", 2500);
 	ft_printf("ft_printf: %-5.10o\n\n", 2500);

	printf("rl_printf: %-#6o\n", 2500);
	ft_printf("ft_printf: %-#6o\n\n", 2500);

	printf("rl_printf: %x\n", -42);
	ft_printf("ft_printf: %x\n\n", -42);

	printf("rl_printf: %  +d\n", 42);
	ft_printf("ft_printf: %  +d\n\n", 42);

	printf("rl_printf: % d\n", 9999); 
	ft_printf("ft_printf: % d\n\n", 9999); 

	ft_printf("ft_printf: %ld\n", -9873878742);
	printf("rl_printf: %ld\n", -9873878742);

	printf("rl_printf: %p\n", &n);
	ft_printf("ft_printf: %p\n\n", &n);

	ft_printf("ft_printf: %lx\n", 4294967296);
	printf("rl_printf: %lx\n\n", 4294967296);

	printf("rl_printf: %#o\n", 42);
	ft_printf("ft_printf: %#o\n", 42);

	printf("rl_printf: %10d\n", -42);    
	ft_printf("ft_printf: %10d\n\n", -42);


	ft_printf("ft_printf: %#-08x\n", 42);
	printf("rl_printf: %#-08x\n\n", 42);

	ft_printf("ft_printf: %#8x\n", 42);
	printf("rl_printf: %#8x\n\n", 42);

	ft_printf("ft_printf: %#08x\n", 42);
	printf("rl_printf: %#08x\n\n", 42);

	ft_printf("ft_printf: %#8x\n", 42);
	printf("rl_printf: %#8x\n\n", 42);

	ft_printf("ft_printf: %#X\n", 42);
	printf("rl_printf: %#X\n\n", 42);

	ft_printf("ft_printf: %#x\n", 0);
	printf("rl_printf: %#x\n", 0);


	ft_printf("ft_printf: %X\n", 4294967296);
	printf("rl_printf: %X\n\n", 4294967296);

	ft_printf("ft_printf: %x\n", 0);
	printf("rl_printf: %x\n\n", 0);
	

	printf("rl_printf: %d\n", 12);
	ft_printf("ft_printf: %d\n\n", 12);

	printf("rl_printf: %ld\n", 12342342666);
	ft_printf("ft_printf: %ld\n\n", 12342342666);
	
	printf("rl_printf: %lD\n", 123456789012);
	ft_printf("ft_printf: %lD\n\n", 123456789012);
	
	printf("rl_printf: %x\n", 12);
	ft_printf("ft_printf: %x\n\n", 12);
	
	printf("rl_printf: %X\n", 12);
	ft_printf("ft_printf: %X\n\n", 12);
	
	printf("rl_printf: %o\n", 12);
	ft_printf("ft_printf: %o\n\n", 12);
*/

	/*
	**    error cases / undefined 

	printf("rl_printf: %+d\n", 4242424242424242424242);
	ft_printf("ft_printf: %+d\n\n", 4242424242424242424242);

	printf("%05..d", 12);

	printf("%wd%.12d", 12);
	printf("%#012wd", 12);	
	printf("%#.12wd", 12);	
	printf("%#012td", "esre");	

	printf("%#+d", 12);
	printf("%c\n", 'ers');
	printf("%s\n", "test", "undeux");
	printf("%\cd",1);
	printf("\123");
	printf("%#12re#d",3);
	printf("%5.4d\n", 12);

	 **
	 */
	return (0);
}
