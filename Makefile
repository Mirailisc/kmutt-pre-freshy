run:
	echo "Compiling playground.c ..."
	gcc -o run playground.c && ./run

clean:
	echo "Cleaning up ..."
	rm -rf run