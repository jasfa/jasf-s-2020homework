@echo off
title ����ű�
echo �������ļ�����·��
set /p a=
cd "%a%"
echo �������ļ���
set /p b=
echo ��ʼ����
gcc "%b%" -o qianbao.exe
if exist "qianbao.exe" echo ����ɹ�
if not exist "qianbao.exe" echo ����ʧ��
pause
