#include"UsunCiagi.h"

void UsunCiagi()
{
  for (int i = 0; i < g_ileCiagow; ++i)
     delete ga_usunac[i];
}
