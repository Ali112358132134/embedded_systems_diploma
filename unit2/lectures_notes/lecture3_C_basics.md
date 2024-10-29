**Integer and float implicit conversion**
* An arithmetic operation between an integer and an integer always yields an integer
* An arithmetic operation between real and real always yields a real result
* An operation between an integer and real always yield a real result
    * 5/2 -> 2
    * 5.0/2 -> 2.5
**Implicit type conversion in assignment**
```c
    int i;
    float j;
    i = 3.5; //Implicitly will be converted into 3
    j = 30; //Implicitly will be converted into 30.0000
```
**Quiz on implicit type conversion**
```c
//k is an integer varaible and a is a real variable
k = 2/9; //Integer, 0
k = 2/9.0; //Integer, 0
k = 2.0/9; // , 0
k = 2.0/9.0; // , 0
k = 9/2; // 4
k = 9/2.0; // 4
k = 9.0/2; // 4
k = 9.0/2.0; // 4


a = 2/9; // 0.000, integer by integer gives zero 
a = 2/9.0; //0.2222
a = 2.0/9; //0.2222
a = 2.0/9.0; //0.2222
a = 9/2; //4
a = 9/2.0; //4.5
a = 9.0/2; //4.5
a = 9.0/2.0; //4.5
```
**Implicit type conversion**
* All the data types of the variables are upgraded to the data type of the variable with the largest data type
* ![Conversion hierarchy](image.png)
**Explicit type conversion**
* The user can type cast the result to make it of a particular data type
* The synstax: 
    ```c 
    (type) expression
    ```
