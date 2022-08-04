all: clear olamundo

olamundo:
	@echo
	@echo "============================="
	@echo "|    PROGRAMA OLA MUNDO     |"
	@echo "============================="
	@echo "--- Construindo o programa ---"
	gcc OlaMundo.c -o olamundo
	@echo "--- Habilitando olamundo para execução ---"
	chmod +x olamundo

clear:
	@echo
	@echo "============================="
	@echo "|APAGANDO TODOS OS PROGRAMAS|"
	@echo "============================="
	rm -f olamundo
