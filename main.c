#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <string.h>    
#include <stdlib.h> 
#include "op.h"
#include "rock.h"
#include "mat.h"
#include "new.h"
#include "glass.h"

int main()
{
  op();
  while (getchar() != '\n');
  rock();
  system("pause");
  while (getchar() != '\n');
  mat();
  while (getchar() != '\n');
  new();
  while (getchar() != '\n');
  Glass_Game();
  
  return 0;
}
