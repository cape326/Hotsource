#include <stdio.h>
#include <time.h>
#include <string.h>    
#include <stdlib.h> 
#include "rock.h"
#include "new.h"
#include "glass.h"
#include "op.h"

int main()
{
  op();
  while (getchar() != '\n');
  rock();
  while (getchar() != '\n');
  mat();
  while (getchar() != '\n');
  new();
  while (getchar() != '\n');
  Glass_Game();
  
  return 0;
}
