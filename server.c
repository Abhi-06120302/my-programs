/*#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    if (x > y) {
        printf("The larger number is: %d\n", x);
    } else if (x < y) {
        printf("The larger number is: %d\n", y);
    } else {
        printf("Both numbers are equal: %d\n", x);
    }
    return 0;
}*/


/*#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    printf("Enter a integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    printf("Enter third integer: ");
    scanf("%d", &c);

    int sum = a + b + c;
    int product = a * b * c;
    int average = sum / 3;
    int subtraction = a - b - c;
    int division = a / b / c;
    int modulo = a % b % c;
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    int min = a;
    if (b < min) {
        min = b;
    }

    if (c < min) {
        min = c;
    }
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Average: %d\n", average);
    printf("Subtraction: %d\n", subtraction);
    printf("Division: %d\n", division);
    printf("Modulo: %d\n", modulo);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    return 0;
}*/

/*#include <stdio.h>

int add(int a, int b) {return a + b; }
int sub(int a, int b) {return a - b; }

int main() {
    int (*ops [2])(int, int) = {add, sub};

    printf("Add: %d\n", ops[0](5, 3));
    printf("Subtract: %d\n", ops[1](5, 3));
    return 0;
}*/


/*#include <stdio.h>
int main() {
    int x = 1;
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int i = a;
    while (i > 1) {
        x = x*i;
        i--;
    }
    printf("Factorial of %d is %d\n", a, x);
    return 0;
}*/


/*#include <stdio.h>

int main() {
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    int b = a;
    while (b>1) {
        printf("%d ", b);
        b--;
    }
    return 0;
}*/

// use of while loop is understood completely takes place tommorow


/*#include <stdio.h>

int main() {
    float radius, area, circumference;
    const float PI = 3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI*radius*radius;
    circumference = 2*PI*radius;
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);
    return 0;
}*/


/*#include <stdio.h>

int add(int a, int b) {
    int c;
    c = a + b;
    return c;
}
int main(){
    int x, y, result;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    result = add(x, y);
    printf("The sum of %d and %d is: %d\n", x, y, result);
    return 0;
}
*/

/*#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);
    printf("Fibonacci sequence:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
*/
/*#include <stdio.h>
double mypow(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
int main() {
    double base;
    int exponent;
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    double result = mypow(base, exponent);
    printf("%.2lf raised to the power of %d is %.2lf\n", base, exponent, result);
    return 0;
}*/


/*#include <stdio.h>

int main() {
    int b;
    int c = 0;
    int original;
    printf("Enter a integers: ");
    scanf("%d", &b);
    original = b;

    while (b > 0) {
        int digit = b % 10;
        c = c * 10 + digit;
        b /= 10;
    }
    {
        if (original == c) {
            printf("%d is a palindrome\n", original);
        } else {
            printf("%d is not a palindrome\n", original);
        }
    }
    
}*/


/*#include <stdio.h>
int main(){
    int x = 49;
    int *p = &x; // Pointer to x
    int **q = &p; // Pointer to pointer p
    printf("Value of x: %d\n", x);
    printf("Value of x using pointer p: %d\n", *p);
    printf("Value of x using pointer to pointer q: %d\n", **q);
    printf("Address of x: %p\n", (void*)&x);
    printf("Address stored in pointer p: %p\n", (void*)p);
    printf("Address stored in pointer to pointer q: %p\n", (void*)q);
    printf("Address of pointer p: %p\n", (void*)&p);
    printf("Address of pointer to pointer q: %p\n", (void*)&q);
    return 0;


}*/

/*#include <stdio.h>
signed int reg_var = 10; // Register variable
static int static_var = 20; // Static variable
int main() {
    int local_var = 30; // Local variable
    printf("Register variable: %d\n", reg_var);
    printf("Static variable: %d\n", static_var);
    printf("Local variable: %d\n", local_var);
    
    // Modifying variables
    reg_var += 5;
    static_var += 10;
    local_var += 15;

    printf("Modified Register variable: %d\n", reg_var);
    printf("Modified Static variable: %d\n", static_var);
    printf("Modified Local variable: %d\n", local_var);

    return 0;
}*/

/*#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    static int result[2];  // Static so it persists after function returns
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;  // No solution found
    return NULL;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 65;
    int returnSize;
    int* indices = twoSum(nums, 4, target, &returnSize);

    if (indices != NULL) {
        printf("Indices: [%d, %d]\n", indices[0], indices[1]);
    } else {
        printf("No two sum solution found.\n");
    }

    return 0;
}*/

/*#include <stdio.h>
int search(int* arr, int numsize, int target){
    int beg = 0;
    int mid = beg + 1;
    int end = numsize - 1;
    while (beg <= end) {
        mid = (beg + end) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            beg = mid + 1;
        } else {
            end = mid - 1;
        }
        return -1; // Target not found
    }
}
int main() {
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int target;
        printf("Enter the target element to search: ");
        printf("Enter the target element to search: ");
        scanf("%d", &target);
        int result = search(arr, 9, target);
        if (result != -1) {
            printf("Element found at index: %d\n", result);
        } else {
            printf("Element not found in the array.\n");
        }
        return 0;
}
*/


/*#include <stdio.h>
void checkprimenumber();
int main() {
    checkprimenumber();
    return 0;
}
void checkprimenumber(){
    int n,i,flag=0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
        flag = 1; // 0 and 1 are not prime numbers
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 1; // n is not a prime number
            break;
        }
    }

    if (flag == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
}*/

/*#include <stdio.h>
int getinteger();
int main(){
    int n, i, flag = 0;
    n = getinteger();
    if (n == 0 || n == 1)
        flag = 1; // 0 and 1 are not prime numbers
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 1; // n is not a prime number
            break;
        }
    }
    if (flag == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
}
int getinteger(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    return n;
}*/

/*#include <stdio.h>
int factorial(int num);
int main(){
    int number, result;
    printf("Enter a positive number: ");
    scanf("%d",&number);
    result = factorial(number);
    printf("Factorial = %d",result);
    return 0;
}
int factorial(int num){
    if (num != 0)
        return num*factorial(num -1);
    else
        return num;
}*/


/*#include <stdio.h>
int main() {
   int x[4];
   int i;

   for(i = 0; i < 4; ++i) {
      printf("&x[%d] = %p\n", i, &x[i]);
   }

   printf("Address of array x: %p", x);

   return 0;
}*/

/*#include <stdio.h>
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element of the array

    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    return 0;
}*/

/*#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    register int a = 5;
    printf("Register variable a: %d\n", a);
    return 0;
}*/

/*#include <stdio.h>
int main(void)
{
    double pi = 3.14159;
    double scientific = 1.23e4;
    printf("Value of pi: %lf\n", pi);
    printf("Scientific notation: %.15lf\n", scientific);
    printf("precise pi = %.10f\n", pi);
    return 0;
}*/

/*#include <stdio.h>
#include <stdbool.h>
void even(int n);
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    even(n);
    return 0;
}
void even(int n){
    if ((n & 1) == 0){
        printf("even\n");
    }else{
        printf("Odd\n");
    }
}*/

/*#include <stdio.h>
void main(){
    int a, b;
    printf("Enter two integers:");
    scanf("%d %d",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("values of a and b after swaping is: %d %d \n",a,b);
    getc;
}*/


/*#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("%d is even\n", n);
    } else {
        printf("%d is odd\n", n);
    }
}*/



/*#include <stdio.h>
int main() {
    int n;
    int sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = 1; i<= n; i--){
        sum = i + (i - 1);
    printf("%d",sum);
    }
    return 0;
}*/

/*#include <stdio.h>
#include <stdbool.h>
int year(int n);
int main(){
    int y;
    printf("Enter a year: ");
    scanf("%d",&y);
    if (year(y)){
        printf("%d is a leap year\n", y);
    }else{
        printf("%d is not a leap year\n", y);
    }
    return 0;
}
int year(int n){
    if (n % 400 == 0){
        return true;
    }else if (n % 100 == 0) {
        return false;
    }else if (n % 4 == 0){
        return true;
    }else{
        return false;
    }
}*/

/*#include <stdio.h>
int main(){
    int a = 5;  // 101
    for (int i = 1; i <= a; i++){
        int bit = (a >> 1);
        printf("The 1st bit of %d is: %d\n", a, bit);
        printf("%d\n",~bit);
    }
    return 0;

}

#include <stdio.h>
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int count = 0;
    while (num > 0){
        num = num & (num - 1);
        count++;
    if ((num & num - 1) == count){
        printf("The number is a power of 2\n");    
    }
}
    printf("Number of set bits: %d\n", count);
    
    getc;
}*/

/*#include <stdio.h>
int main() {
    int a, b;
    printf("Enter valuee of a integers: ");
    scanf("%d", &a);
    printf("Enter valuee of b integers: ");
    scanf("%d", &b);
    int n = a > b ? a : b;
    while (1) {
        if (n % a == 0 && n % b == 0) {
            printf("The LCM of %d and %d is: %d\n", a, b, n);
            break;
        }
        n++;
    }
    return 0;
}*/


/*#include <stdio.h>
int main() {
    char var;
    printf("Choose a operator (+, -, *, /): ");
    scanf("%c", &var); 
    int a,b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    switch (var)
    {
    case '+':
        printf("The sum of %d and %d is: %d\n", a, b, a + b);
        break;
    case '-':
        printf("The difference of %d and %d is: %d\n", a, b, a - b);
        break;
    case '*':
        printf("The product of %d and %d is: %d\n", a, b, a * b);
        break;
    case '/':
        if (b != 0) {
            printf("The quotient of %d and %d is: %d\n", a, b, a / b);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    default:
        printf("Invalid operator. Please use +, -, *, or /.\n");
        break;
    }
}*/


/*#include <stdio.h>
int main() {
    int a;
    printf("Enter value of a: ");
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("%d is even\n", a);
    } else {
        printf("%d is odd\n", a);
    }
    return 0;
}*/


/*#include <stdio.h>
int main() {
    int a;
    printf("Enter value of a: ");
    scanf("%d", &a);
    if (a > 0) {
        printf("%d is positive\n", a);
    } else if (a < 0) {
        printf("%d is negative\n", a);
    } else {
        printf("The number is zero\n");
    }
    return 0;
}*/

// Largest between three numbers

/*#include <stdio.h>
int main() {
    
    int a,b,c;
    
    printf("Enter value of a: ");
    scanf("%d", &a);
    
    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter value of c: ");
    scanf("%d", &c);
    
    if (a > b && a > c) {
        printf("%d is the greatest number\n", a);
    } else if (b > a && b > c) {
        printf("%d is the greatest number\n", b);
    } else {
        printf("%d is the greatest number\n", c);
    }
    return 0;
}*/

//   Program to display day of week using number (1–7)

/*#include <stdio.h>
int main() {
    int day;
    printf("Enter a number (1-7) to get the corresponding day of the week: ");
    scanf("%d", &day);
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 7.\n");
    }
    return 0;
}*/
// Program to display month name using number (1–12). 
/*#include <stdio.h>
int main() {
    int month;
    printf("Enter a number (1-12) to get the corresponding month name: ");
    scanf("%d", &month);
    switch (month) {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 12.\n");
    }
    return 0;
}*/

//SIMPLE CALCULATOR

/*#include <stdio.h>
int main() {
    int a, b;
    char operator;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    switch (operator) {
        case '+':
            printf("The sum of %d and %d is: %d\n", a, b, a + b);
            break;
        case '-':
            printf("The difference of %d and %d is: %d\n", a, b, a - b);
            break;
        case '*':
            printf("The product of %d and %d is: %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0) {
                printf("The quotient of %d and %d is: %d\n", a, b, a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator. Please use +, -, *, or /.\n");
            break;
    }
}*/


/*#include <stdio.h>
int main() {
    int n,i,Table;
    printf("Enter the number that Table you want.");
    scanf("%d",&n);
    printf("Table of %d is given below:\n",n);
    i = 1;
    while (i <= 10)
    {
        Table = n * i;
        printf("%d x %d = %d\n",n,i,Table);
        i++;
    }
    
    return 0;
}*/


/*#include <stdio.h>

int main(){
    int n,i,c,r,s=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    c = r;
    for (i = n; i > 0; i = i/10){
        r = i % 10;
        c = c * r;
        s = s + c;
    }
    if (s == n){
        printf("%d is an armstrong number\n", n);
    }else{
        printf("%d is not an armstrong number\n", n);
    }
    return 0;
}*/


/*#include <stdio.h>

int main() {
    int n,a;
    printf("Enter a number: ");
    scanf("%d", &n);
    a = n;
    if (n % 1 == 0 && n % a == 0){
        printf("%d is a prime number.",n);
    }
    else{
        printf("%d is not a prime number.",n);
    }
    return 0;
}*/


/*#include <stdio.h>
int main() {
    int a[50], n, i, j, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // Bubble sort
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                // Swap a[j] and a[j+1]
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}*/

/*#include <stdio.h>
int main(){
    int a[3][3],i,j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The 3x3 matrix is:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

/*#include <stdio.h>
#include <stdbool.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    int count = 0;
    int wr = 0;
    if (n < 0){
        return false;
    }
    while (n % 2 == 0)
    {
        n = n / 10;
        sum = sum + n % 10;
    }
    printf("The sum of digits is: %d\n",sum);
    count = sum % 10;
    while (sum > 0)
    {
        sum = sum / 10;
        count = count + sum % 10;
    }
    printf("The sum of digits is: %d\n",count);
    wr = count % 10;
    while (count > 0)
    {
        count = count / 10;
        wr = wr + count % 10;
    }
    printf("The sum of digits is: %d\n",wr);

    return 0;
}*/

/*#include <stdio.h>
int main(){
    int a,b,c = 0;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    if (a > 0 && b > 0){
        while (a >= b)
        {
            a = a - b;
            c++;
        }        
        printf("The quotient is: %d\n",c);
    }
        else if (a < 0 && b < 0){
        a = -a;
        b = -b;
        while (a >= b)
        {
            a = a - b;
            c++;
        }  
        printf("The quotient is: %d\n",c);
    }
    else if(a < 0){
        a = -a;
        while (a >= b)
        {
            a = a - b;
            c++;
        }  
        printf("The quotient is: %d\n",-c);
    }
    else if (b < 0){
        b = -b;
        while (a >= b)
        {
            a = a - b;
            c++;
        }  
        printf("The quotient is: %d\n",-c);
    }
    return 0;
}*/

/*#include <stdio.h>

int main() {
    long long a, b;
    long long c = 0;
    int sign = 1;

    printf("a = ");
    scanf("%lld", &a);
    printf("b = ");
    scanf("%lld", &b);

    if (b == 0) {
        printf("Division by zero not allowed\n");
        return 0;
    }

    if (a < 0) {
        a = -a;
        sign = -sign;
    }
    if (b < 0) {
        b = -b;
        sign = -sign;
    }

    while (a >= b) {
        a -= b;
        c++;
    }

    printf("The quotient is: %lld\n", sign * c);

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    struct student
    {
        int Rollno;
        char name[50];
        float marks;
    };
    struct student s;
    printf("Enter a details of student:");
    scanf("%d %s %f",&s.Rollno,s.name,&s.marks);
    printf("%d %s %f",s.Rollno,s.name,s.marks);
    return 0; 
}*/

/*#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum;
    int a = 1, b = 2;
    if (n < 2){
        printf("The %dth Fibonacci number is: %d\n", n, n);
        return 0;
    }
    for (int i = 3; i <= n - 1; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("The %dth Fibonacci number is: %d\n", n, sum);
    return 0;
}*/


/*#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int c;
    c*c = num;
    printf("The square root of %d is: %d\n", num, c);
    return 0;
}*/




/*#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int c,m = 0,i;
    while (n != 1 && n != 4)
    {
        while (n > 0)
        {
            i = n % 10;
            c = i*i;
            m = m + c;
            n = n / 10;
            printf("The sum of squares of digits is: %d\n", m);
        }
        n = m;
    }

    if (n == 1){
        printf("The number is a happy number\n");
    }else{
        printf("The number is not a happy number\n");
    }
    return 0;
}*/


/*#include <stdio.h>
int main() {
    int n,cube,r, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = n; i > 0; i = i / 10)
    {
        r = i % 10;
        cube = r * r * r;
        sum = sum + cube;
    }
    if (sum == n){
        printf("%d is an armstrong number\n", n);
    }else{
        printf("%d is not an armstrong number\n", n);
    }
    return 0;
}*/



/*#include <stdio.h>
int main(){
    int a[50],n,pro = 1;
    printf("The no. of element in the array is :");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        pro = pro * a[i];
    }
    printf("The product of elements in the array is: %d\n", pro);
    return 0;

}*/

/*#include <stdio.h>
int main() {
    int n,r,s = 0;
    printf("enter n :");
    scanf("%d",&n);
    for (int i = 1; i <= n; i = i/10)
    {
        r = i % 10;
        s += r*10;
    }
    printf("%d",s);
    return 0;
}*/

/*#include <stdio.h>
int main() {
    int a,b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    int c = a > b ? a : b;
    printf("The larger number is: %d\n", c);
    return 0;
}*/
/*#include <stdio.h>
int main() {
    int arr[50], n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The elements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    if (n > 0) {
        int max = arr[0];
        for (i = 1; i < n; i++) {
            if (arr[i + 1] > max) {
                max = arr[i + 1];
            }
        }
        printf("The largest number in the array is: %d\n", max);
    } else {
        printf("The array is empty.\n");
    }
    return 0;
}*/

/*#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a = 0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            a++;
        }
    }
    if (a == 2){
        printf("%d is a prime number\n", n);
    }
    else{
        printf("%d is not a prime number\n", n);
    }
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// 1. Pre-Order Traversal: Root -> Left -> Right
void preOrder(struct Node* root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

// 2. In-Order Traversal: Left -> Root -> Right
void inOrder(struct Node* root) {
    if (root == NULL) return;
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}

// 3. Post-Order Traversal: Left -> Right -> Root
void postOrder(struct Node* root) {
    if (root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}

int main() {
    /* 
       Build the tree:
             1
           /   \
          2     3
    */
    /*struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    printf("Pre-order traversal:  ");
    preOrder(root);
    printf("\n");

    printf("In-order traversal:   ");
    inOrder(root);
    printf("\n");

    printf("Post-order traversal: ");
    postOrder(root);
    printf("\n");

    // Free memory
    free(root->left);
    free(root->right);
    free(root);

    return 0;
}*/




/*#include <stdio.h>
int main() {
    int n, i, min;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {   
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("The smallest number in the array is: %d\n", min);
    return 0;
}*/

/*#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter a no of element of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int c = arr[0]*arr[1]*arr[2];
    for (i = 0; i < n - 2; i++) {
        for (j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] * arr[j] * arr[k] > c) {
                    c = arr[i] * arr[j] * arr[k];
                }
            }
        }
    }
    printf("The maximum product of three numbers in the array is: %d\n", c);
    return 0;
}*/

/*#include <stdio.h>
int main(){
    int n, i;
    printf("Enter a number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }
    arr[n - 1] = arr[n - 1] + 1;
    printf("The sum of the last element and 1 is: %d\n", arr[n - 1]);
    for (i = 0; i < n; i++) {
        printf("element after adding 1 to the last element: %d\n", arr[i]);
    }
    return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *insertatfirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third; 
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 66;
    third->next = NULL;
    printf("Linked list before insertion\n");
    linkedlisttraversal(head);
    head = insertatfirst(head, 56);
    printf("Linked list after insertion\n");
    linkedlisttraversal(head);
    return 0;
}*/

/*#include <stdio.h>
int main(){
    int a[50],n,i,temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("The second largest element in the array is: %d\n", a[n - 2]);
    printf("\n");
    return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

int main() {    
    struct Node* head;
    struct Node* second;
    struct Node* third;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    head->data = 618;
    head->next = second;
    second->data = 911;
    second->next = third;
    third->data = 666;
    third->next = NULL;
    printf("Elements in the linked list before insertion: ");
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;

    }
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 999;
    newNode->next = ptr;
    ptr->data = 777;
    ptr->next = temp;
    temp->data = 888;
    temp->next = head;
    head = newNode;
    printf("\nElements in the linked list after insertion: ");
    current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
    return 0;
}*/


/*#include <stdio.h>
int main(){
    int a;
    int *p;
    p = &a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The value of a is: %d\n", a);
    printf("The address of a is: %p\n", (void*)&a);
    printf("The value of p (address of a) is: %p\n", (void*)p);
    printf("The value pointed to by p is: %d\n", *p);
    return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void linkedlisttraversal(struct Node* ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main() {
    struct Node* head;
    struct Node* second;
    struct Node* third;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 66;
    third->next = NULL;
    printf("Linked list elements:\n");
    linkedlisttraversal(head);
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
struct student {
    int rollno;
    char name[50];
    float marks;
};
int main(){
    struct student s1;
    struct student s2;
    struct student s3;
    printf("Enter details for student 1:\n");
    printf("Roll number: ");
    scanf("%d", &s1.rollno);
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Marks: ");
    scanf("%f", &s1.marks);
    printf("Enter details for student 2:\n");
    printf("Roll number: ");
    scanf("%d", &s2.rollno);
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Marks: ");
    scanf("%f", &s2.marks);
    printf("Enter details for student 3:\n");
    printf("Roll number: ");
    scanf("%d", &s3.rollno);
    printf("Name: ");
    scanf("%s", s3.name);
    printf("Marks: ");
    scanf("%f", &s3.marks);
    printf("\nStudent Details:\n");
    printf("Student 1: Roll No: %d, Name: %s, Marks: %.2f\n", s1.rollno, s1.name, s1.marks);
    printf("Student 2: Roll No: %d, Name: %s, Marks: %.2f\n", s2.rollno, s2.name, s2.marks);
    printf("Student 3: Roll No: %d, Name: %s, Marks: %.2f\n", s3.rollno, s3.name, s3.marks);  
}*/

/*#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};

int main()
{
    struct node* head = (struct node*)malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node* third = (struct node*)malloc(sizeof(struct node));
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    struct node* current = head;
    printf("Linked list elements before insertion:\n");
    while (current != NULL)
    {
        printf("Element: %d\n", current->data);
        current = current->next;
    }
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = 4;
    newNode->next = third;
    second->next = newNode;
    current = head;
    printf("Linked list elements after insertion:\n");
    while (current != NULL)
    {
        printf("Element: %d\n", current->data);
        current = current->next;
    }
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void linkedlisttraversal(struct Node* ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node* insertatend(struct Node* head, int data) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = NULL;
    ptr->data = data;
    if (head == NULL) {
        return ptr;
    }
    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = ptr;
    return head;
}
int main() {
    struct Node* head;
    struct Node* second;
    struct Node* third;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 66;
    third->next = NULL;
    printf("Linked list before insertion\n");
    linkedlisttraversal(head);
    head = insertatend(head, 56);
    printf("Linked list after insertion\n");
    linkedlisttraversal(head);
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void linkedlisttraversal(struct Node* ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main() {
    struct Node* head;
    struct Node* second;
    struct Node* third;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 15;
    third->next = NULL;
    printf("Linked list elements:\n");
    linkedlisttraversal(head);
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 19;
    newNode->next = NULL;
    third->next = newNode;
    printf("Linked list elements after insertion:\n");
    linkedlisttraversal(head);
    return 0;
}*/



/*#include <stdio.h>
#include <stdlib.h>

int calc(int a, int b, char op) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0) {
                return a / b;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                exit(1);
            }
        default:
            printf("Invalid operator. Please use +, -, *, or /.\n");
            exit(1);
    }
}

int main() {
    int a, b;
    char op;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    int result = calc(a, b, op);
    printf("The result of %d %c %d is: %d\n", a, op, b, result);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int arr[50],n,temp;
    printf("Enter number of element of array: ");
    scanf("%d",&n);
    printf("Enter element of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int a[50],n,temp[50];

    printf("Enter number of element in the array: ");
    scanf("%d",&n);

    printf("Enter element of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            temp[i] = a[i];
            printf("%d",temp[i]);
        }
    }
    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    if ((n % 2 == 0 && n % 3 == 0)||(n % 2 == 0 && n % 5 == 0)||(n % 3 == 0 && n % 5 == 0)||(n % 2 == 0 && n % 3 == 0 && n % 5 == 0))
    {
        printf("The Number is Ugly Number.");
    }
    else
    {
        printf("The Number is not Ugly. ");
    }
    return 0;
}*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        if ((i % 2 == 0 && i % 3 == 0)||(i % 2 == 0 && i % 5 == 0)||(i % 3 == 0 && i % 5 == 0)||(i % 2 == 0 && i % 3 == 0 && i % 5 == 0)||(i % 2 == 0 && i % 2 == 0)||(i % 3 == 0 && i % 3 == 0)||(i % 5 == 0 && i % 5 == 0))
        {
            printf("%d\n",i);
        }
    }
    return 0;
}