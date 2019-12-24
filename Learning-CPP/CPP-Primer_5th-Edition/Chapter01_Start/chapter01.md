# 第一章 —— 开始

## 生词
- **curly ['kɜːlɪ] --adj.卷曲的**
- 

---------

## 1.1 编写一个简单的 C++ 程序 (Writing a Simple C++ Program)
- 每个 C++ 程序都包含一个或多个函数(function)，其中一个必须命名为 main, 操作系统通过
  调用 main 来运行 C++ 程序。(Tip: Java、Dart 也是如此) 下面是一个非常简单的 main 
  函数，它什么也不干，只是返回给操作系统一个值:
  ```cpp
    int main() {
        return 0;
    }
  ```
- 一个函数的定义包含 4 个部分:
    + 返回类型 (return type): 对应上面的 `int` 类型, 即希望函数返回值的类型必须为 
      `int`，即整数类型。 `int` 类型是一种 **内置类型 (built-in type)**，即语言
      自身定义的类型。
    + 函数名 (function name): 对应上面为 `main` 
    + 一个括号包围的形参列表 (parameter list，允许为空): 对应上面的 `()`
    + 函数体 (function body): 对应上面的 `{return 0;}` 它是一个以 
      **左花括号(curly brace)**开始，以右花括号结束的**语句块 (block of statements)**
      , 语句块中唯一的一条语句是 return, 它结束函数的执行。return 语句的返回值类型必须
      于函数的返回类型相容。(Tip: 在 C++ 中，大多数 C++ 语句以分号表示结束。它们很容易
      被忽略，但如果忘记了写分号，就会导致莫名奇妙的编译错误。)
 - 重要概念 —— 类型:
    + 类型是程序设计最基本的概念之一，一种类型不仅定义了数据元素的内容，还定义了这类数据
      上可以进行的运算。
    + 程序所处理的数据都保存在变量中，而每个变量都有自己的类型。如果一个名为 v 的变量类型
      为 T，我们通常说 "v 具有类型 T"，或等价的，"v 是一个 T 类型变量"。

## 1.2 初始输入输出 (A First Look at Input/Output)
- C++ 语言并未定义任何 输入输出(I/O) 语句，而是包含了一个全面的**标准库(standard library)**
  来提供 IO 机制 (以及很多其他设施)。
- 本书很多实例都是用了 **iostream** 库。 iostream 库是包含了 2 个基础类型
    + **输入流 istream**
    + **输出流 ostream**
- 一个流就是一个字符序列，是从 IO 设备读出或写入 IO 设备的。 术语 "流" (stream) 想要表达
  的是，随着时间的推移，字符是顺序生成或消耗的。        

> **标准输入输出对象:**
- 标准库定义了 4 个 IO 对象。
    + 为了处理输入，我们使用一个名为 **cin** (发音为: see-in) 的 istream 类型的对象，
      这个对象也被称为 **标准输入(standard input)**。
    + 对于输出，我们使用一个名为 **cout** (发音为: see-out) 的 ostream 类型的对象，
      这个对象也称为 **标准输出(standard output)**。
    + 标准库还定义了其他两个 ostream 对象，名为 **cerr** 和 **clog** (发音分别为: 
      see-error 和 see-log)。 我们通常用 cerr 来输出警告和错误消息，因此它也被称为 
      **标准错误(standard error)**。 而 clog 用来输出程序运行时一般性信息。   
> **一个使用 IO 库的程序**
- ```cpp
    #include <iostream>
    int main() {
        // - 提示用户输入 2 个数
        std::cout << "Enter two numbers:" << std::endl;
        // - 保存我们读入的输入数据的变量
        int v1 = 0, v2 = 0;
        // - 读取输入数据
        std::cin >> v1 >> v2;
        std::cout << "The sum of " << v1 << " and " << v2 << " is "
            << v1 + v2 << std::endl;
        return 0;
    }
  ```
- `#include <iostream>` 告诉编辑器我们想要使用 iostream 库。尖括号中的名字指出了一个
  **头文件 (header)**。 每个使用标准库设施的程序都必须包含相关的头文件。
-  main 的第一条语句 (`std::cout << "Enter two numbers:" << std::endl;`) 执行了
  一个 **表达式 (expression)**。在 C++ 中，一个表达式产生一个计算结果，它由一个或多个
  运算对象和 (通常是) 一个运算符组成。这条语句中的表达式使用了 **输出运算符 (`<<`)**
- `"Enter two numbers: "`这个消息是一个 **字符串字面值常量 (string literal)**  
  是用一对引号包围的字符序列。
- `endl`: 是一个被称为 **操纵符 (manipulator)** 的特殊值。
- `::` : 是 **作用域运算符**
- `>>`: 是 **输入运算符**


## 1.3 注释简介 (A World about Comments)
- 单行注释: `//`
- 多行注释: `/* */`

## 1.4 控制流 (Flow of control)

## 1.5 类简介 (Introducing Classes)

## 1.6 书店程序 (The Bookstore Program)

## 小结 (Chapter Summary)

## 术语表 (Defined Terms)
