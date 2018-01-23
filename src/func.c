#include	<unistd.h>
#include	"my_printf.h"

void    my_putchar(char c)
{
  write(1, &c, 1);
}

int     my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
  return (0);
}

int     my_strlen(char *str)
{
  int   i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

t_func	*init_continue(t_func func[])
{
  func[9].c = 'u';
  func[9].f = &put_unsigned;
  func[10].c = 'o';
  func[10].f = &put_octal;
  func[11].c = 'n';
  func[11].f = &put_write_char;
  func[12].c = 'f';
  func[12].f = &put_float;
  return (func);
}

t_func	*init_func(t_func func[])
{
  func[0].c = 'c';
  func[0].f = &put_char;
  func[1].c = 's';
  func[1].f = &put_str;
  func[2].c = 'S';
  func[2].f = &spe_putstr;
  func[3].c = 'p';
  func[3].f = &put_point;
  func[4].c = 'b';
  func[4].f = &put_bin;
  func[5].c = 'd';
  func[5].f = &put_int;
  func[6].c = 'i';
  func[6].f = &put_int;
  func[7].c = 'x';
  func[7].f = &put_hexa_s;
  func[8].c = 'X';
  func[8].f = &put_hexa_b;
  init_continue(func);
  return (func);
}
