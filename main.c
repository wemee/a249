#include <stdio.h>
#include <math.h>

void dropping(){
    int d, i, leaf_count, first_leaf;
    
    scanf("%d%d", &d, &i);
    leaf_count = pow(2, (d-1));
    first_leaf = leaf_count;
    i %= leaf_count;
    if (!i) i=leaf_count;
    while (i>1) {
        leaf_count /= 2;
        if (i%2) {
            i -= (i/2);
        } else {
            first_leaf += leaf_count;
            i/=2;
        }
    }
    printf("%d\n", first_leaf);
}

int main() {
    int n, i;
    scanf("%d", &n);
    for (i=0; i<n; i++)
        dropping();
    return 0;
}
