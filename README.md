# Learning-C-CPP  学习 C 和 C++

## 生词
- **clang [klæŋ] --n.叮当[铿锵]声 --v.铛，叮当地响**


### macOS 中神秘的 GCC
- GCC: GUN Compiler Collection (GUN 编译器集合)，他可以编译 C、C++、JAVA、Fortran、
  Pascal、Object-C、Ada、等语言。
- `gcc` 是 GCC 中的 GUN C Compiler， C 编译器。
- `g++` 是 GCC 中的 GUN C++ Compiler， C++ 编译器
- 就本质而言，`gcc` 和 `g++` 并不是编译器，也不是编译器的集合，它们只是一种驱动器，根据参数
  中要编译的文件的类型，调用对应的 GUN 编译器而已。
  
### Clang 是什么？
- Clang 是一个 C、C++、Objective-C 和 Objective-C++ 程式語言的编译器前端

### Mac 下配置 VSCode 编写 C/C++ 运行环境 (Note: 配置一大堆, 还是不如 Clion 好用)
> [参考文章](https://blog.csdn.net/mahfaeraak/article/details/82111226)
- 首先检查机器上是否安装了 C++ 编辑器， 主要是 g++/clang，如果没安装自行安装，控制台查看
  安装与否的代码:
    + `g++ --version`
    + `clang++ --version`
- 然后在 VSCode 中安装 2 款插件
    + `C/C++`    
    + `C/C++ Clang Command Adapter`
    + Tip: 还需要直接运行文件的插件 `Code Runner`
- 准备工作完毕进入具体的配置阶段。首先新建一个文件夹作为工程目录，然后在 VSCode 中打开该
  文件夹。在里面新建一个 cpp 文件命名为 main.cpp。随意写点程序在里面。例如:
  ```cpp
    #include <iostream>
    int main() {
        std::cout << "Hello~" << std::endl;
        return 0;
    }
  ```
- 点击侧边栏的 debug 按钮,然后点击设置图标，提示你选择环境， 选择 C++ 选项。此时 VSCode 
  会在工程目录下自动生成一个 .vscode 的文件夹，并新建了一个 launch.json 的文件，这里需要
  对生成的文件进行一些小改动。本人配置如下:
  ```json
    {
        "version": "0.2.0",
        "configurations": [
            {
                "name": "(lldb) Launch",
                "type": "cppdbg",
                "request": "launch",
                "program": "${workspaceFolder}/app.out",
                "args": [],
                "stopAtEntry": false,
                "cwd": "${workspaceFolder}",
                "environment": [],
                "externalConsole": false,
                "MIMode": "lldb",
                "preLaunchTask": "clang++ build active file"
            }
        ]
    }
  ```
- 保存后按快捷键 Shift + Command + B 编译，此时会出现提示 "没有找到要运行的生成任务。
  配置生成任务......" 所以接下来将进行生成任务的配置工作，VSCode 提供了一些模版，有需要的
  可以自行选择，这里就选则 Others。
- 此时 .vscode 目录下会出现一个 task.json 文件，对它进行改写。本人配置如下:
  ```json
    {
        "version": "2.0.0",
        "tasks": [
            {
                "label": "hello world",
                "type": "shell",
                "command": "clang++",
                "args": [
                    "main.cpp",
                    "-o app.out"
                ],
                "group": {
                    "kind": "build",
                    "isDefault": true
                }
            }
        ]
    }
  ```
- 最后点击右键使用 Code Runner 插件运行当前 main.cpp 文件即可。
- Tip:
    + launch.json 中的 "program"属性 和 task.json 中的 "args" 对
    + 每次编译完成后，我们发现目录下多了一个 app.out 文件，这个文件是 Linux/Unix 环境下，
      编译器编译源代码并连接产生的可执行文件，未指定的情况下为 a.out，因为上面我们在 
      task.json 中配置了 `o app.out` 所以生成的文件我 app.out
    + task.json 中的 command 和 args 两个属性相当于在命令行中执行了 `clang++ -o 
        yourfilename.out main.cpp`