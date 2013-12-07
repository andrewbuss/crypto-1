#include <stdio.h>

#define z1 210205973
#define z2 22795300
#define z3 58776750
#define z4 121262470
#define z5 264731963
#define z6 140842553
#define z7 242590528
#define z8 195244728
#define z9 86752752

#define P 295075153

int main(){
  int x, y, x1, y1;
  for(x1=0;x1<P;x1++){
    y1 = (x1^z1);
    if(x1%10000000 == 0) printf("X1 %i\n",x1);
    //printf("%i: X = %i, Y = %i, Z = %i\n",1,x1,y1,x1^y1);
    x = (2*x1+5)%P;
    y = (3*y1+7)%P;
    if((x^y) != z2) continue;
    printf("%i: X = %i, Y = %i, Z = %i\n",2,x,y,x^y);
    x = (2*x+5)%P;
    y = (3*y+7)%P;
    if((x^y) != z3) continue;
    printf("%i: X = %i, Y = %i, Z = %i\n",3,x,y,x^y);
    x = (2*x+5)%P;
    y = (3*y+7)%P;
    if((x^y) != z4) continue;
    printf("%i: X = %i, Y = %i, Z = %i\n",4,x,y,x^y);
    x = (2*x+5)%P;
    y = (3*y+7)%P;
    if((x^y) != z5) continue;
    printf("%i: X = %i, Y = %i, Z = %i\n",5,x,y,x^y);
    x = (2*x+5)%P;
    y = (3*y+7)%P;
    if((x^y) != z6) continue;
    printf("%i: X = %i, Y = %i, Z = %i\n",6,x,y,x^y);
    x = (2*x+5)%P;
    y = (3*y+7)%P;
    if((x^y) != z7) continue;
    printf("%i: X = %i, Y = %i, Z = %i\n",7,x,y,x^y);
    x = (2*x+5)%P;
    y = (3*y+7)%P;
    if((x^y) != z8) continue;
    printf("%i: X = %i, Y = %i, Z = %i\n",8,x,y,x^y);
    x = (2*x+5)%P;
    y = (3*y+7)%P;
    if((x^y) != z9) continue;
    printf("%i: X = %i, Y = %i, Z = %i\n",9,x,y,x^y);
    printf("X1: %i, Y1: %i, Z1: %i\n",x1,y1,x1^y1);
    x = (2*x+5)%P;
    y = (3*y+7)%P;
    printf("%i: X = %i, Y = %i, Z = %i\n",10,x,y,x^y);
    break;
  }
}
