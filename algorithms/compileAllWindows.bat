rm -f log.txt
rm -f resulted_c_files/*
for file in *.pc; do
	filename="${file%.*}"
	.././portucol2c "${filename}.pc" "resulted_c_files/${filename}.c" >> log.txt 2>&1
	echo "${filename}" "... Portucol (OK)"
	astyle --style=java --suffix=none "resulted_c_files/${filename}.c" >> log.txt 2>&1
	echo "$file" "... Indentation (OK)"
	gcc -std=c99 -ansi "resulted_c_files/${filename}.c" >> log.txt 2>&1
	echo "$file" "... GCC (OK)"
done
rm -f *.out