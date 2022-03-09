Algoritmo variablesYEstructuraDeSecuenciaYDecision 
	name <- "Kevin"; //Tipo de datos en cadenada de caracteres, un caracteres es: "A", "B", "C", "%" ,"$"
	lastname <- "Luciano"; //Tipo de datos en cadenada de caracteres
	age <- 27; // Tipo de dato entero
	temperature <- -15; // Tipo de real
	isTeacher <- Falso;
	
	Escribir "Mi nombre es " name ", y mi apellido es " lastname ", y tengo " age " años, soy de Acapulco, y la temperatura en estos momentos es de " temperature;
	
	SI(isTeacher = Verdadero)
		Escribir "Soy tu maestro";
	SiNo
		Escribir "No soy maestro, soy alumno >.<";
	FinSi
	
	Escribir "*************************";
	Escribir "Concurso para la rifa de un auto último modelo, las bases para participar es ser mayor de 18 años";
	
	SI(age<18)
		Escribir "No puedes participar por el auto último módelo";
	SiNo
		Escribir "Felicidades " name ", puedes participar en el concurso";
	FinSi
	
	SI(temperature>30)
		Escribir "Vives en una ciudad muy calurosa";
		Si(temperature<29 & temperature>15)
			Escribir "Vives en una ciudad fresca";
		FinSi
	SiNo
		Escribir "Vives en una ciudad fresca";
	FinSi
	
FinAlgoritmo
