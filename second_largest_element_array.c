///Kono array er element gulo theke second largest element ber kora
/**Test Cases:
* 10 10 10 10 10
* 10 10 10 10 9
* 5 5 5 5 6
*/

#include<stdio.h>
#include<limits.h>
#define n 5
int main() {
    int arr[n], lrg, lrg2;
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    lrg = lrg2 = INT_MIN;
    for(int i=0; i<n; i++) {
        if(arr[i]>lrg) {
            lrg2=lrg;
            lrg = arr[i];
        }
        else if(arr[i]<lrg && arr[i]>lrg2)
            lrg2 = arr[i];
    }
    printf("Largest: %d\n", lrg);
    if(lrg2==INT_MIN)
        printf("There is no second Largest element\n");
    else
        printf("Second Largest: %d\n", lrg2);
}
