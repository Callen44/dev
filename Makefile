all: commands docker

docker: Dockerfile
	docker build . -t mybb

commands: helloCommand pwdCommand

pwdCommand: src/pwd.c
	gcc src/pwd.c -o build/pwd
	cp build/pwd bin

helloCommand: src/hello.c
	gcc src/hello.c -o build/hello
	cp build/hello bin