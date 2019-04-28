#include "table.h"

void table() {
  setlocale(LC_ALL, "Russian");
  register int i;
  // register int j;
  FILE *fp;
  char balance[1543];

  fp = fopen("text", "rb");
  // if ((fp = fopen("text", "wb")) == NULL) {
  //  printf("Cannot open file.");
  // getchar();
  //}
  /*
  for(i=0; i<32; i++) balance[i] = (float) i;


  fwrite(balance, sizeof balance, 1, fp) ;
  fclose(fp);
  */

  // for(i=0; i<32; i++) balance[i] = 0.0;

  if ((fp = fopen("text", "rb")) == NULL) {
    printf("cannot open file");
    getchar();
  }

  fread(balance, sizeof balance, 1, fp);

  for (i = 0; i < 1543; i++)
    // for (j = 0; j < 34; j++)
    cout << balance[i];
  printf("\n");
  // printf("%ls  ", balance[i]);
  fclose(fp);
  getchar();
}
