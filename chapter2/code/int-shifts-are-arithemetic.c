#include <stdio.h>

int int_shifts_are_arithemetic() {
  int num = -1;
  return !(num ^ (num >> 1));
}

int main(int argc, char* argv[]) {
  if (int_shifts_are_arithemetic()) {
    printf("int shifts are arithemetic\n");
  }
  return 0;
}