#include<stdio.h>
#include<math.h>

int main() {
    int n, count=0, loop=0;
    printf("Enter an Integer number: ");
    scanf("%d", &n);
    
    for(int i=2; i<=sqrt(n); i++) {
        loop++;
        printf("Iterating %d times\n", loop);
        if(n%i==0) {
            count=1;
            break;
        }
    }
    
    if(count) printf("%d is not a Prime\n", n);
    else printf("%d is a Prime\n", n);
}

/*
  suppose for 100
    100 = 2 x 50
          4 x 25
          5 x 20
          10 x 10
  so, 100 er divisor gulo holo 2, 4, 5, 10, 20, 25, 50, 100
  amra jodi 1 theke 10 porjonto check kori taholei bujhe jabo 20, 25, 50, and 100 diye vag jacche kina
  10 er por theke oi number porjonto check korar dorkar hocckena. mane kono number er square root porjonto 
  check korlei hocche.


*/
