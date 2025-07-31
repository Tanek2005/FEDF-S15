#include <stdio.h>

int check(int a){
    if(a%2==0 ){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
	int t,n;
	scanf("%d",&t);
	
	while(t--){
	    scanf("%d",&n);
	    int arr[n];
	    int sum=0;
	    int even=0,odd=0;
	    for(int i=0;i<n;i++){
	        scanf("%d",&arr[i]);
	        sum=sum+arr[i];
	        if(check(arr[i])){
	            even++;
	        }
	        else{
	            odd++;
	        }
	    }
	    if(check(even) && !check(odd) && odd>=1 && !check(sum)){
	        printf("Yes\n");
	    }
	    else if(!check(even) && check(odd) && !check(sum)){
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	}
}