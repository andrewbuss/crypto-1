#include <stdio.h>
#include <gmp.h> 

int main(){
  mpz_t N, A, W, X, p, q;
  mpz_init_set_str(N, "720062263747350425279564435525583738338084451473999841826653057981916355690188337790423408664187663938485175264994017897083524079135686877441155132015188279331812309091996246361896836573643119174094961348524639707885238799396839230364676670221627018353299443241192173812729276147530748597302192751375739387929",10);
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
