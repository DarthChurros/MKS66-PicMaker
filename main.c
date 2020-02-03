#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
  FILE* img = fopen("image.ppm", "w");
  fprintf(img, "P3\n256 256 255\n");

  int i;
  int j;
  int k;
  for (i = 0; i < 256; i++) {
    for (j = 0; j < 256; j++) {
      for (k = 0; k < 3; k++) {
        fprintf(img, "%d ", (int)((k*i-j)%256));
      }
    }
    fprintf(img, "\n");
  }

  fclose(img);

  return 0;
}
