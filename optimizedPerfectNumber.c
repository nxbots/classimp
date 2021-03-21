#include<stdio.h>
#include<math.h>
int main() {
    int n, sum=1;
    scanf("%d", &n);
    for(int i=2; i<=sqrt(n); i++) { //sqrt 28= 5
        if(n%i==0) {	//i=2 		//i=4
            sum+=i;     //sum+=2	//sum+=4
            sum+=n/i;   //sum+=14	//sum+=7
        }
    }
    if(sum==n) printf("Perfect Number\n");
    else printf("Not Perfect\n");
    return 0;
}

/* ekhaneo <=sqrt(n) porjonto kora jay.
sum=1 rakhte hobe. i=2 theke suru korte hobe.
*/
