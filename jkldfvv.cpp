#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a,b;
	scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d",&a,&b);
    
	if(a<b){
	    printf("FIRST\n");
	}
	if(b<a){
	    printf("SECOND\n");
	}
	if(a==b){
	    printf("ANY\n");
	}
    }
	return 0;
}