calculator: main.o sum.o difference.o product.o

main.o: main.c sum.h difference.h product.h
sum.o: sum.c sum.h
difference.o: difference.c difference.h
product.o: product.c product.h

clean:
	rm main.o sum.o difference.o product.o
