#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int mod(int a, int b);

int main() {
  FILE* img = fopen("image.ppm", "w");
  fprintf(img, "P3\n512 256 255\n");

  int i;
  int j;
  int k;
  for (i = 0; i < 512; i++) {
    for (j = 0; j < 512; j++) {
      for (k = 0; k < 3; k++) {
        fprintf(img, "%d ", (int)abs(((k*i-j)/2)%256));
      }
    }
    fprintf(img, "\n");
  }

  fclose(img);

  return 0;
}
