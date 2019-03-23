#include <stdio.h>
#include <math.h>

unsigned int primes[] = {
     2,   3,   5,   7,  11,  13,  17,  19,  23,  29, 
    31,  37,  41,  43,  47,  53,  59,  61,  67,  71, 
    73,  79,  83,  89,  97, 101, 103, 107, 109, 113, 
   127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 
   179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 
   233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 
   283, 293, 307, 311
};

int main(int argc, char *argv[]){
  
  double cuberoot;
  double fraction;
  double multiply;

  for(int i =0; i < 64; i++){
    cuberoot = cbrt((double) primes[i]);
    fraction = cuberoot - floor(cuberoot);
    multiply = fraction * 0x100000000;
    multiply = floor(multiply);
    printf("%3d -> %f -> %f -> %x\n", primes[i], cuberoot, fraction,(int) multiply);	  
  }
  return 0;
} 
