#include <stdio.h>
#include "comp_dict.h"
#include "comp_list.h"
#include "comp_tree.h"
#include "tokens.h"

int getLineNumber ()
{
  //mude aqui a implementação desta função
  return 0;
}

int main (int argc, char **argv)
{
  int token = TOKEN_ERRO;
  while (token = yylex()){
    printf ("token <%d> at %d\n", token, getLineNumber());
  }
>>>>>>> 352954f6ea187047b4861839b035be8ca58e825a
  return 0;
}
