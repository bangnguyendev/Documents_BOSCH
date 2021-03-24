@ECHO OFF
SET PULSESECUREPATH="C:\Program Files (x86)\Common Files\Pulse Secure\Integration"

SET USERNAME=a5124171
SET PATTERN=e1e2e3e4f4g4h4i4

smxlogin -v --password -u %USERNAME% -p %PATTERN% https://b2b-gateway.renesas.com/login/ssl > Output

SET /p PASSWORD=<Output

%PULSESECUREPATH%\pulselauncher.exe -url b2b-portal.renesas.com -u %USERNAME% -p %PASSWORD% -r Users
del /f Output