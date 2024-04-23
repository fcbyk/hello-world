@REM 设置用户签名
set name=John
set email=123456@qq.com

@echo off
chcp 65001 >nul

echo 当前git的版本
git -v
echo.

echo 请确认用户签名,如不正确请以记事本形式打开脚本更改变量
echo name=%name%
echo email=%email%
echo 按任意键继续
pause >nul

echo.
git config --global user.name %name%
git config --global user.email %email%
echo 设置成功，当前用户签名为
cat ~/.gitconfig
echo 按任意键继续
pause >nul