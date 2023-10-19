#include<stdio.h>
#include<conio.h>
#include<string.h>
// int main(){
// int T,i,a,d,n;
// printf("Enter the first term,the common difference, the no. of terms:");
// scanf("%d %d %d",&a,&d,&n);
// printf("AP series:\n");
// for(i=0;i<=n;i++){
//     T=a+i*d;
//     printf(" %d ",T);
// }
// getch();
// return 0;
// }
// int main(){
//     int n,a=0,b=1,c,i;
//     printf("Enter the no. of terms:");
//     scanf("%d",&n);
//     printf("Fibonacci series:\n");
//     for(i=1;i<=n;i++){
//         printf(" %d ",a);
//         c=a+b;
//         a=b;
//         b=c;
        
//     }
//     getch();
//     return 0;
// }


// int main() {
//     int n, i, count = 0;
//     printf("Enter the number: ");
//     scanf("%d", &n);
    
//     for (i = 1; i <= n; i++) {
//         if (n % i == 0) {
//             count++;
//         }
//     }
    
//     if (count == 2) {
//         printf("%d is a prime number.\n", n);
//     } else {
//         printf("%d is not a prime number.\n", n);
//     }
//     getch();
//     return 0;
// }

// int main() {
//    int s1,s2,i,j,n;
//    printf("Enter the range:");
//    scanf("%d",&n);
//    for(i=1;i<=n;i++){
//     s1=0;
//     for(j=1;j<i;j++){
//         if(i%j==0){
//             s1+=j;
//         }
//     }
//     s2=0;
//     for(j=1;j<s1;j++){
//         if(s1%j==0){
//             s2+=j;
//         }
//     }
//     if(i==s2 && i!=s1){
//         printf(" %d %d\n",i,s1);
//     }
//    }
//     getch();
//     return 0;
// }


// int main(){
//     int n,i,r,x,s=0;
//     printf("Enter the no.");
//     scanf("%d",&n);
//     x=n;
//     while(n!=0){
//         r=n%10;
//         s=s*10+r;
//         n/=10;
//     }
//     if(s==x){
//         printf("%d is palindrome",x);
//     }
//     else
//     printf(" %d is not palindrome",x);
//     getch();
//     return 0;

// }

// int main(){
//     int n,i,j;
//     printf("Enter the no. of rows:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     getch();
//     return 0;
// }


// int main(){
//     int n,i,j,a;
//     printf("Enter the no. of rows:");
//     scanf("%d",&n);
//     a=1;
//     for(i=1;i<=n;i++){
//      for(j=1;j<=i;j++){
//         printf("%d",a);
//         a++;
//      }
//      printf("\n");
//     }
//     getch();
//     return 0;
// }

// int main(){
//     int n,i,j;
//     printf("Enter the no. of rows: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(j=1;j<=2*i-1;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     getch();
// }

// int main(){
//     int n,a=0,b=1,c,i,j;
//     printf("Enter the no. of terms:");
//     scanf("%d",&n);
    
// printf("Nonfibonacci Series:\n");
//     for(i=1;i<=n;i++){
//         c=a+b;
//         a=b;
//         b=c;
//         for(j=a+1;j<c;j++){
//             if(n>=j){
//             printf(" %d ",j);
//             }
//             else 
//             break;
//         }

//     }
//  getch();
//  return 0;
// }
// int main(){
//     int i,n;
//     float s=0;
//     printf("Enter the range:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         s+=(2.0*i)/((2*i-1)*(2*i+1));
//     }
//    printf("Sum of series 2/1.3+4/3.5+.....=%.2f",s);
//    getch();
// }

// int main(){
//     int n,i,j,count;
//     printf("Enter the range:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         count=0;
//         for(j=1;j<=i;j++){
//             if(i%j==0){
//                 count++;
//             }
//         }
//         if(count==2){
//             printf(" %d ",i);
//         }
//     }
//   getch();
// }

// int main(){
//     int n,i,j,r,s,x;
//     printf("Enter the range:");
//     scanf("%d",&n);
//     for(i=100;i<=n;i++){
//         x=i;
//         s=0;
//         while(x>0){
//             r=x%10;
//             s+=r*r*r;
//             x/=10;
//         }
//         if(s==i){
//             printf(" %d ",i);
//         }
//       }
//       getch();
// }


// int main(){
//     int a[50],i,j,n,t;
//     printf("Enter the no. of terms:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("Enter the element at %d position:",i+1);
//         scanf("%d",&a[i]);
//     }
//     for(i=1;i<n;i++){
//         int f=0;
//         for(j=0;j<n-i;j++){
//             if(a[j]>a[j+1]){
//                 t=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=t;
//                 f=1;
//             }
//         }
//         if(f==0){
//             break;
//         }
//     }
//     for(i=0;i<n;i++){
//         printf(" %d ",a[i]);
//     }
//   getch();
// }

// int main(){
//     int a[50],i,j,min,n;
//     printf("Enter the no. of terms:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("Enter the no. at %d position:",i+1);
//         scanf("%d",&a[i]);
//     }
//     for(i=1;i<n;i++){
//         min=a[i];
//         j=i-1;
//        while(j>=0 && a[j]>min){
//         a[j+1]=a[j];
//         j--;
//        }
//        a[j+1]=min;
//     }
//     for(i=0;i<n;i++){
//         printf(" %d ",a[i]);
//     }
//     getch();
// }

// int main(){
//     int a[50],i,j,n,min,t;
//     printf("Enter the no. of terms:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("Enter the element at %d position:",i+1);
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n-1;i++){
//         min=i;
//         for(j=i+1;j<n;j++){
//             if(a[min]>a[j]){
//                 min=j;
//             }
//         }
//         if(i!=min){
//             t=a[i];
//             a[i]=a[i+1];
//             a[i+1]=t;
//         }
//     }
//     for(i=0;i<n;i++){
//         printf(" %d ",a[i]);
//     }
//     getch();
// }


// int main(){
//     int a[50],i,x,n;
//     printf("Enter the no. of terms:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the item:");
//     scanf("%d",&x);
//     for(i=0;i<n;i++){
//         if(a[i]==x){
//             printf(" %d is found at %d position.",x,i);
//         }
//     }
//     getch();
// }

// int main(){
//     int a[50],i,x,n,beg,end,mid;
//     printf("Enter the no. of terms:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the item:");
//     scanf("%d",&x);
//     beg=0,end=n-1;
//     while(beg<=end){
//      mid=(beg+end)/2;
//      if(a[mid]==x){
//         printf(" %d is found at %d position",x,mid);
//         break;
//      }
//      else if(a[mid]>x){
//         end=mid-1;
//      }
//      else {
//         beg=mid+1;
//      }
//     }
//     getch();
// }

// int main(){
//     int a[50],i,j,x,n;
//     printf("Enter the no. of terms:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the item:");
//     scanf("%d",&x);
//     printf("Enter the position:");
//     scanf("%d",&j);
//     for(i=n;i>j;i--){
//         a[i+1]=a[i];
//         a[j]=x;
//     }
//     for(i=0;i<n;i++){
//         printf(" %d ",a[i]);
//     }
//     getch();
// }

// int main(){
//     char a[50],b[50];
//     int i,f;
//     printf("Enter the 1st string:");
//     gets(a);
//     printf("Enter the 2nd string:");
//     gets(b);
//     for(i=0;a[i]!='\0',b[i]!='\0';i++){
//         if(a[i]!=b[i]){
//             f=1;
//         }
//     }
//     if(f==0 && a[i]=='\0' && b[i]=='\0'){
//         printf("Two strings are equal");
//     }
//     else
//     printf("Two strings are not equal");
//     getch();
// }

// int main(){
//     char a[100];
//     gets(a);
//     int i=0,f;
//     while(a[i]!='\0'){
//         i++;
//         f=i;
//     }
//     printf("Length of the string %s is %d",a,f);
//     getch();
// }

int main(){
    char a[100],b[100],c[100];
    int i=0,j=0;
    printf("Enter two stings:");
    gets(a);
    gets(b);
    for(i=0;a[i]!='\0';i++);
        for(j=0;b[j]!='\0';j++,i++){
            a[i]=b[j];
        }
    
    a[i]='\0';
    printf(" %s ",a);
    getch();
}