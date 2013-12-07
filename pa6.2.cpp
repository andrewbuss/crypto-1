#include <stdio.h>
#include <gmp.h> 

int main(){
  mpz_t N, A, W, X, p, q;
  mpz_init_set_str(N, "648455842808071669662824265346772278726343720706976263060439070378797308618081116462714015276061417569195587321840254520655424906719892428844841839353281972988531310511738648965962582821502504990264452100885281673303711142296421027840289307657458645233683357077834689715838646088239640236866252211790085787877",10);
  mpz_init(A);
  mpz_init(W);
  mpz_init(X);
  mpz_init(p);
  mpz_init(q);
  mpz_sub_ui(W, N, 1);
  mpz_sqrt(A, W);
  mpz_add_ui(A, A, 1);
  while(1){
    /*printf("A:");
    mpz_out_str(stdout, 10, A);
    printf("\n");*/
    
    mpz_mul(W, A, A);
    mpz_sub(W, W, N);
    mpz_sub_ui(W, W, 1);
    mpz_sqrt(X, W);
    mpz_add_ui(X, X, 1);
    
    /*printf("X:");
    mpz_out_str(stdout, 10, X);
    printf("\n");*/

    mpz_sub(p, A, X);
    mpz_add(q, A, X);

    /*printf("p:");
    mpz_out_str(stdout, 10, p);
    printf("\n");

    printf("q:");
    mpz_out_str(stdout, 10, q);
    printf("\n");*/

    mpz_mul(W, p, q);
    mpz_sub(W, N, W);

    if(not mpz_cmp_ui(W, 0)) break;
    mpz_add_ui(A, A, 1);
  }
  mpz_out_str(stdout, 10, A);
  printf("\n");
  
  return 0;
}
