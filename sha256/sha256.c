//Danielis Joniskis, 2019
//The Secure Hash Algorithm, 256 bit version
//https://ws680.nist.gov/publication/get_pdf.cfm?pub_id=919060

//The usual input/output header file
#include <stdio.h>
//For using fixed-bit length integers.
#include <stdint.h>

void sha256();


int main(int argc, char *argv[]){
  
  sha256();
  
  return 0;
}

void sha256(){
  
  //Message schedule (Section 6.2).
  uint32_t W[64];
  
  //Working variables (Section 6.2).
  uint32_t a, b, c, d, e, f, g, h;
}
