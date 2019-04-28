#include "table.h"

void table() {
  register int i;
  FILE *fp;
  char balance[32];


  if ((fp = fopen("text", "wb")) == NULL) {
    printf("Cannot open file.");
    getchar();
  }
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


  for (i = 0; i < 32; i++)
    cout << " " << balance[i] << endl;
    //printf("%ls  ", balance[i]);
  fclose(fp);
  getchar();
}
