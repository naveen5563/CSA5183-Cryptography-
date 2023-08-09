#include<stdio.h>
#include<math.h>
int main(){
     int n,p,q,d,e,dn,m;
     printf("enter the value of p:");
     scanf("%d",&p);
     printf("enter the value of q:");
     scanf("%d",&q);
     printf("enter the value of e:");
     scanf("%d",&e);
     printf("enter the value of m:");
     scanf("%d",&m);
     n=p*q;
     dn=(p-1)*(q-1);
     for(int i=1;i<dn;i++){
     	if((e%dn)*(i%dn)%dn==1){
     		d=i;
     		break;
		 }
	 }
     int x=pow(m,e);
     int c=x%n;
     printf("encryption=%d\n",e);
     int de=pow(c,d);
     printf("\decryption=%d",de%n);
 }
