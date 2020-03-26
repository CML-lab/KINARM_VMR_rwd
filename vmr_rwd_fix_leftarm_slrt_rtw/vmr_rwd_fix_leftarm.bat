call "C:\Program Files\Microsoft SDKs\Windows\v7.1\bin\SetEnv" /x86 /release /xp 2>devnull.2 1>devnull.1

cd .
nmake -f vmr_rwd_fix_leftarm.mk  EXT_MODE=1 ISPROTECTINGMODEL=NOTPROTECTING
@if errorlevel 1 goto error_exit
exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make
