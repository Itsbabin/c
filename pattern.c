#include<stdio.h>
  int main(){
    int n;
    printf("enter yhe vallue of n :");
    scanf("%d",&n);
for(int r=-(n-1);r<=n-1;r++){
    for(int c=-(n-1);c<=n-1;c++){
        if(r<=0){
         if(r==c){
             int mv=n+r-1;
             int pv=n-mv;
             printf("%d ",pv);
         }
     
         if(r>c){
             int _mv=n+c-1;
             int _pv=n-_mv;
             printf("%d ",_pv);
         }
         if(r<c){
            int x=c<0?-c:c;
            int y=r<0?-r:r;
            if(x==y || x>y){
                int mv=n-x-1;
                int pv=n-mv;;
                printf("%d ",pv);
            }
             if(x<y){
                int mv=n-y-1;
                int pv=n-mv;;
                printf("%d ",pv);
            }
         }
         }
        
        if(r>0){
            int x=c<0?-c:c;
            if(r==x || r>x){
              int mv=n-r-1;
              int pv=n-mv;
              printf("%d ",pv); 
            }
               if(r<x){
              int mv=n-x-1;
              int pv=n-mv;
              printf("%d ",pv); 
            }

       }

    }
     printf("\n");
}
    return 0;
  }