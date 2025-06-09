# compilador
CC = g++

# configurações de compilação
CFLAGS = -Wall -pedantic -ansi -g -O0

# nome do executável
TARGET = sistema

# arquivos fonte
SRCS = main.cpp Funcionario.cpp Desenvolvedor.cpp Gerente.cpp Estagiario.cpp

# regra principal
all:
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

# limpar os arquivos gerados
clean:
	rm -f $(TARGET)
