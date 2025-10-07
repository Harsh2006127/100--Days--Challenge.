#include <stdio.h>
int main() {
    double cp=1000, sp=1200, percent;
    if(sp>cp){
        percent=((sp-cp)/cp)*100;
        printf("Profit %.0lf%%\n", percent);
    } else if(sp<cp){
        percent=((cp-sp)/cp)*100;
        printf("Loss %.0lf%%\n", percent);
    } else printf("No Profit No Loss\n");
    return 0;
}
