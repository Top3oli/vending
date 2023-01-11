run: main
	./main
main: tproduto.o produto.o main.c
	gcc -o main tproduto.o produto.o main.c
tproduto.o: tproduto.c
	gcc -o tproduto.o tproduto.c -c 
produto.o: produto.c
	gcc -o produto.o produto.c -c 
clean: 
del tproduto.o main