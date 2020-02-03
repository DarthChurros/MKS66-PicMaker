#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
  open("image.ppm", O_WRONLY | O_CREAT | O_TRUNC, 644);

  return 0;
}
