# gets的替代品

1. fgets的第二个参数制定了读入字符的最大数量，如果参数是n，那么fgets将读入n-1个字符，或者读到遇到的第一个换行符为止
2. 如果fgets读到一个换行符，会把他存储在字符串中，这点与gets不同，gets会将换行符丢弃
3. fgets函数的第三个参数指明要读入的文件。如果读入从键盘输入的数据，则以stdin(标准输入)作为参数，该表示定义在stdio.h中
4. 如果读入的超过了n，fgets会截取n-1个字符并且添加\0字符
5. fgets返回一个指向char的指针

   ```C
   //返回值​​：指向存储输入数据的缓冲区（即传入的第一个参数 char *str）。
    char buffer[100];
    char *result = fgets(buffer, 100, stdin);
    //如果成功读取输入，result 和 buffer 指向同一内存地址。
    ```
