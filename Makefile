all: clear olamundo

olamundo:
	@echo -e "Construindo programa olamundo!"
	gcc OlaMundo.c -o olamundo
	chmod +x olamundo

clear:
	@echo -e "Removendo arquivos compilados (programas)!"
	rm -f olamundo
