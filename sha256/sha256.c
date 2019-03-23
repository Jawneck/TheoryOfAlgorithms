//Danielis Joniskis, 2019
//The Secure Hash Algorithm, 256 bit version
//https://ws680.nist.gov/publication/get_pdf.cfm?pub_id=919060

//The usual input/output header file
#include <stdio.h>
//For using fixed-bit length integers.
#include <stdint.h>

void sha256();

//See Sections 4.1.2 and 4.2.2 for definitions.
uint32_t sig0(uint32_t x);
uint32_t sig1(uint32_t x);


int main(int argc, char *argv[]){
  
  sha256();
  
  return 0;
}

void sha256(){
  
  //Message schedule (Section 6.2).
  uint32_t W[64];
  //Working variables (Section 6.2).
  uint32_t a, b, c, d, e, f, g, h;
  //Two temporary variables (Section 6.2).
  uint32_t T1, T2;

  //The Hash value (Section 6.2)
  //The values come from Section 5.3.3.
  uint32_t H[8] = {
    0x6a09e667,
    0xbb67ae85,
    0x3c6ef372,
    0xa54ff53a,
    0x510e527f,
    0x9b05688c,
    0x1f83d9ab,
    0x5be0cd19
  };

  //The current message block.
  uint32_t M[16];
  
  //For looping.
  int t;
  
  //From page 22, W[t] = M[t] for 0 <= t <=15.
  for (t = 0; t < 16; t++)
    W[t] = M[t];
  
  //From page 22, W[t] = ...
  for(t = 16; t < 64; t++)
    sig_1(W[t-2]) + W[t-7] + sig_0(W[t-15] + W[t-16];
}

uint32_t sig0(uint32_t x){

}

uint32_t sig1(uint32_t x){

}







