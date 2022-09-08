all: clear olamundo variaveis exercicioscap1 exercicioscap2 exercicioscap3 exercicioscap4

olamundo:
	@echo
	@echo "============================="
	@echo "|    PROGRAMA OLA MUNDO     |"
	@echo "============================="
	@echo "--- Construindo o programa ---"
	gcc OlaMundo.c -o olamundo
	@echo "--- Habilitando olamundo para execução ---"
	chmod +x olamundo

variaveis:
	@echo
	@echo "============================="
	@echo "|    PROGRAMA VARIAVEIS     |"
	@echo "============================="
	@echo "--- Construindo o programa ---"
	gcc Variaveis.c -o variaveis
	@echo "--- Habilitando variaveis para execução ---"
	chmod +x variaveis

exercicioscap1:
	@echo
	@echo "============================="
	@echo "|    EXERCICIOS CAP 01      |"
	@echo "============================="
	@echo "--- Construindo o programa ---"
	gcc ExerciciosCap1.c -lm -o exercicioscap1
	@echo "--- Habilitando variaveis para execução ---"
	chmod +x exercicioscap1

exercicioscap2:
	@echo
	@echo "============================="
	@echo "|    EXERCICIOS CAP 02      |"
	@echo "============================="
	@echo "--- Construindo o programa ---"
	gcc ExerciciosCap2.c -lm -o exercicioscap2
	@echo "--- Habilitando variaveis para execução ---"
	chmod +x exercicioscap2

exercicioscap3:
	@echo
	@echo "============================="
	@echo "|    EXERCICIOS CAP 03      |"
	@echo "============================="
	@echo "--- Construindo o programa ---"
	gcc ExerciciosCap3.c -lm -o exercicioscap3
	@echo "--- Habilitando variaveis para execução ---"
	chmod +x exercicioscap3

exercicioscap4:
	@echo
	@echo "============================="
	@echo "|    EXERCICIOS CAP 04      |"
	@echo "============================="
	@echo "--- Construindo o programa ---"
	gcc ExerciciosCap4.c -lm -o exercicioscap4
	@echo "--- Habilitando variaveis para execução ---"
	chmod +x exercicioscap4
clear:
	@echo
	@echo "============================="
	@echo "|APAGANDO TODOS OS PROGRAMAS|"
	@echo "============================="
	rm -f olamundo variaveis exercicioscap1 exercicioscap2 exercicioscap3 exercicioscap4
