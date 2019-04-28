#include "develop.h"
#include "table.h"
#include <stdio.h>
#include <termios.h>
//#include <curses.h>
//#include <conio.h>
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <string.h>
//#include <structures.h>
#include <fstream>
#include <locale.h>
#include <strings.h>
//#include <units.h>
//#include <ivlib.h>

using namespace std;

int main() {
  // system("CLS");
  char c;
  // FILE *tf;
  while (1) {
    printf("----------------------------");
    printf("\n");
    printf("|  1 - Verb table          |");
    printf("\n");
    printf("----------------------------");
    printf("\n");
    printf("|  2 - Guess the forms     |");
    printf("\n");
    printf("----------------------------");
    printf("\n");
    printf("|  3 - Write a translation |");
    printf("\n");
    printf("----------------------------");
    printf("\n");
    printf("|  4 - Developers          |");
    printf("\n");
    printf("----------------------------");
    printf("\n");
    printf("|  0 - Exit                |");
    printf("\n");
    printf("----------------------------");
    printf("\n");
    printf("Выберите пункт из меню");
    printf("\n");
    c = getchar();
    switch (c) {
    case '1':
    table();
      break;
    // case '2':print(tf);break;
    // case '3':app(tf);break;
    case '4':
      dev();
      break;
    // case '0':return 0;
    default:
      puts(" íåâåðíûé ðåæèì");
    }
    return 0;
  }
}
