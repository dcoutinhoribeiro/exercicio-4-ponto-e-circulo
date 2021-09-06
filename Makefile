all: ponto.o circulo.o main.o 
	gcc ponto.o circulo.o main.o   -o   exercicio-4-ponto-e-circulo	-std=c99	-pedantic-errors	-Wall	-lm
	
ponto.o:	
	gcc -c ./ponto/ponto.c  -o ponto.o

circulo.o:	
	gcc	-c ./circulo/circulo.c  -o circulo.o 

main.o:	
	gcc -c	main.c 

clean:	
	rm	**.o	

run:
	./exercicio-4-ponto-e-circulo 

