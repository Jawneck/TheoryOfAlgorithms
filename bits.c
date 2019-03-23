#include <stdio.h>
#include <stdint.h>

void binprint(uint32_t x){
  int i;
  uint32_t one = 1;

  for(i = 0; i < 32; i++)
    if((one << (31 - i)) & x)
     printf("1");
    else
     printf("0");
}

int main(int argc, char *argv[]){

  uint32_t a = 1;
  uint32_t b = 2;
 
//printf(" a: %08x\n", a);
  printf("   a: "); binprint(a);    printf("\n");
//printf(" b: %08x\n", b);
  printf("   b: "); binprint(b);    printf("\n");

//printf(" &: %08x\n", (a&b));
  printf(" a&b: "); binprint(a&b);  printf("\n");
//printf(" |: %08x\n", (a|b));
  printf(" a|b: "); binprint(a|b);  printf("\n");
//printf(" ^: %08x\n", (a^b));
  printf(" a^b: "); binprint(a^b);  printf("\n");
//printf(" ~: %08x\n", (~a));
  printf("  ~a: "); binprint(~a);   printf("\n");
//printf("<<: %08x\n", (a<<1));
  printf("a<<1: "); binprint(a<<1); printf("\n");
//printf(">>: %08x\n", (a>>1));
  printf("a>>1: "); binprint(a<<1); printf("\n");

  return 0;
}