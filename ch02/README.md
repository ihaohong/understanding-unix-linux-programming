# 用户、文件操作与联机帮助：编写who命令

## Who命令能做些什么？
想要知道都有谁正在使用系统，可以输入who命令，输出如下：
```shell
$ who
haohong  console  Mar 31 11:34
haohong  ttys000  Apr 15 10:33
haohong  ttys002  Apr  5 10:27
haohong  ttys003  Apr 15 10:33
```

每一行代表一个已经登录的用户，第一列是用户名，第二列是终端名，第三列是登录时间，第四列是用户的登录地址，某些版本的who命令在默认状态下不给出第四列内容。

## who命令是如何工作的？


## 如何编写who？