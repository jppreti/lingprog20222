all: clear olamundo variaveis

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

clear:
	@echo
	@echo "============================="
	@echo "|APAGANDO TODOS OS PROGRAMAS|"
	@echo "============================="
	rm -f olamundo variaveis
