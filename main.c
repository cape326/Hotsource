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
  mat();
  new();
  Glass_Game();
  
  return 0;
}
