#include <cryptopp/sha.h>
#include <stdio.h>
#include <map>

typedef unsigned char byte;

int main(){
  CryptoPP::SHA256 hash;
  byte* output = (byte*) malloc(32);
  unsigned int i, ti;
  unsigned long long int* outv;
  outv = reinterpret_cast<unsigned long long int*>(output+25);
  std::map<unsigned long long int, int> hashes;
  byte* input = reinterpret_cast<byte*>(&i);
  byte* tinput = reinterpret_cast<byte*>(&ti);
  for(i = 0; i<0x2000000; i++){
    hash.Update(input,4);
    hash.Final(output);
    output[25]&=0b00000011;
    //printf("I: %08X LS50b: %02X%02X%02X%02X%02X%02X%02X\n",i,output[25],output[26],output[27],output[28],output[29],output[30],output[31]);
    hashes[*outv] = i;
  }
  printf("Created initial hashtable\n");
  i=0x2000000;
  while(1){
    hash.Update(input,4);
    hash.Final(output);
    output[25]&=0b00000011;
    if(hashes.count(*outv)){
      printf("%02X%02X%02X%02X",input[0],input[1],input[2],input[3]);
      ti = hashes[*outv];
      hash.Update(tinput,4);
      hash.Final(output);
      output[25]&=0b00000011;
      printf(" %02X%02X%02X%02X",tinput[0],tinput[1],tinput[2],tinput[3]);
      printf(" %02X%02X%02X%02X%02X%02X%02X\n",output[25],output[26],output[27],output[28],output[29],output[30],output[31]);  
    }
    i++;
  }
  return 0;
}
