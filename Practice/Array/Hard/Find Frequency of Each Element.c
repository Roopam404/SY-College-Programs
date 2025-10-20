#include <stdio.h>
int main(){
    int a[5], i,j, freq;
    for(i=0;i<5;i++) scanf("%d",&a[i]);
    for(i=0;i<5;i++){
        freq=1;
        for(j=0;j<i;j++)
            if(a[i]==a[j]) freq=0;
        if(freq){
            int count=1;
            for(j=i+1;j<5;j++)
                if(a[i]==a[j]) count++;
            printf("%d occurs %d times\n",a[i],count);
        }
    }
    return 0;
}
