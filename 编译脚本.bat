@echo off
title 编译脚本
echo 请输入文件所在路径
set /p a=
cd "%a%"
echo 请输入文件名
set /p b=
echo 开始编译
gcc "%b%" -o qianbao.exe
if exist "qianbao.exe" echo 编译成功
if not exist "qianbao.exe" echo 编译失败
pause
