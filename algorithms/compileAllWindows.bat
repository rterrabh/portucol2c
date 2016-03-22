@echo off
del log.txt
del resulted_c_files\*.* /Q
for %%f in (*.pc) do (
	"..\portucol2c" %%f "resulted_c_files\%%~nf.c" >> log.txt 2>&1
	echo "%%~nf" "... Portucol (OK)"
	astyle --style=java --suffix=none "resulted_c_files\%%~nf.c" >> log.txt
	echo "%%~nf.c" "... Indentation (OK)"
	gcc -o "resulted_c_files\%%~nf.exe" -std=c99 -ansi "resulted_c_files\%%~nf.c" >> log.txt 2>&1
	echo "%%~nf.c" "... GCC (OK)"
)
