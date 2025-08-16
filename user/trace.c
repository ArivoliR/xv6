#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  if(argc < 3){
    fprintf(2, "usage: trace mask command [args...]\n");
    exit(1);
  }

  int mask = atoi(argv[1]);
  trace(mask);         // syscall to set the mask

  // command traced
  exec(argv[2], &argv[2]);

  // clean exit if exec fails
  fprintf(2, "trace: exec %s failed\n", argv[2]);
  exit(1);
}

