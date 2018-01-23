#include	<unistd.h>
#include	<string.h>
#include	<stdio.h>
#include	"src/my_printf.h"

int	main()
{
  char	*str;
  int	var;

  str = strdup("tititata");
  str[2] = 6;
  str[6] = 10;
  my_putstr("FLAGS NORMAUX\n");
  printf("n = %i %d %o %x %X %s %c %u %p %f\n", -42, -12222222222, -13, -80, -56, "toto", 48, -1, "titi", 42.2);
  my_printf("m = %i %d %o %x %X %s %c %u %p %f\n", -42, -12222222222, -13, -80, -56, "toto", 48, -1, "titi", 42.2);
  my_putstr("################################\nFLAGS SHORT\n");
  printf("n = %ho %hx %hX %hu %hd %hi %hf\n", 21, 2, 200, 80, -2147483647, 5000000, -6.1);
  my_printf("m = %ho %hx %hX %hu %hd %hi %hf\n", 21, 2, 200, 80, -2147483647, 5000000, -6.1);
  my_putstr("################################\nFLAGS LONG\n");
  printf("n = %lo %lx %lX %lu %ld %li %lf\n", 210000, 200000, 2000000, 800, -2147483646, 50000, -60.45);
  my_printf("m = %lo %lx %lX %lu %ld %li %lf\n", 210000, 200000, 2000000, 800, -2147483646, 50000, -60.45);
  my_putstr("################################\nFLAGS DIESE\n");
  printf("n = %#o %#x %#X %#li %#hx %#hd %#f\n", 800, -2147483646, 50000, 42, 45, 60000, 56.6);
  my_printf("m = %#o %#x %#X %#li %#hx %#hd %#f\n", 800, -2147483646, 50000, 42, 45, 60000, 56.6);
  my_putstr("################################\nFLAGS %S ET BINAIRE\n");
  my_printf("m = %S %b %S %b\n", str, 42, NULL, 0);
  my_putstr("################################\nFLAGS %n\n");
  printf("n = blabla c'est cool%n %p\n", &var, NULL);
  printf("nvar = %i\n", var);
  my_printf("m = blabla c'est cool%n %p\n", &var, NULL);
  my_printf("mvar = %i\n", var);
  my_putstr("################################\nFLAGS SPACE\n");
  printf("n = %     d % li % hx %  li %   f\n", 422, 42, 42, -65656, 0.1);
  my_printf("m = %     d % li % hx %  li %   f\n", 422, 42, 42, -65656, 0.1);
  my_putstr("################################\nFLAGS PLUS\n");
  printf("n = %+d %+i %+u %+hx %+i %+o\n", -422, 42, -42, 45, 0, 9);
  my_printf("m = %+d %+i %+u %+hx %+i %+o\n", -422, 42, -42, 45, 0, 9);
  my_putstr("################################\nFLAGS PLUS DIESE SPACE\n");
  printf("n = %+ d %#+  i %#   x % +li %%%# +X % i %+i\n", -422, 42, -42, 45, -64, 6, 6);
  my_printf("m = %+ d %#+  i %#   x % +li %%%# +X % i %+i\n", -422, 42, -42, 45, -64, 6, 6);
  my_putstr("################################\nFLAGS ERROR\n");
  printf("n = %d%i%%l %y%#w%lw%hq % %I %%%d %s %#f %# p\n", 42222222222, 42, -42, NULL, 2.456789, 45);
  my_printf("m = %d%i%%l %y%#w%lw%hq % %I %%%d %s %#f %# p\n", 42222222222, 42, -42, NULL, 2.456789, 45);
  my_putstr("################################\nTOUT\n");
  printf("n = %lx%i 666%%%hx %d%X%lX%o%% % %Lf%y %ly%s %ctiti%s %##%#hx%#lo% %# w %% %#+ \n", 42, 42, 42, 42, 42, 42, 42, 84.4, "yes", 8, "toto", 42, 42);
  my_printf("m = %lx%i 666%%%hx %d%X%lX%o%% % %Lf%y %ly%s %ctiti%s %##%#hx%#lo% %# w %% %#+ \n", 42, 42, 42, 42, 42, 42, 42, 84.4, "yes", 8, "toto", 42, 42);
  my_putstr("################################\nNULL\n");
  printf("%f\n", 1.32424);
  my_printf("%f\n", 1.32424);
  my_putstr("################################\nVALEUR RETOUR\n");
  return (my_printf("m = %s %i characteres dans cette phras%c\n", "Il y a", 44, 'e'));
}
