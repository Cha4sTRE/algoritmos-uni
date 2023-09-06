Algoritmo sin_titulo
	Definir  temperatura como real
	definir unidad Como Caracter
	definir c,f,k Como Real
	Escribir "unidad de temperatura -> c,f,k"
	leer unidad
	Escribir "temperatura: "
	leer temperatura
	
	
	si unidad="c" Entonces
		f<- (temperatura-32)*(9/5)
		Escribir temperatura," a fahrenheir es ", f
	sino si unidad="f" Entonces
			c<- ((temperatura* (9/5) +32))
			Escribir temperatura," a celsius es ", c
		FinSi
	FinSi
FinAlgoritmo
