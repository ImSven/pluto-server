@echo off&title ��������
set PATH_CLIENT="./config_client"
set PATH_SERVER="./config"
set PATH_CFG="%~1"
if %PATH_CFG%=="" (echo tips������������������ļ���������ͼ��������
					echo �������ļ���
					set /p PATH_CFG=
					rem set PATH_CFG="%f%"
					)
echo %PATH_CFG%	
echo %PATH_CFG%
python _export.py  %PATH_CFG% %PATH_CLIENT% %PATH_SERVER%

pause