#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

void handle_client(int client_sock) {
    char buffer[1024];
    read(client_sock, buffer, sizeof(buffer) - 1);
    printf("Received request:\n%s\n", buffer);
    char response[] = "HTTP/1.1 200 OK\r\n"
                      "Content-Type: text/html\r\n\r\n"
                      "<html><body><h1>Hello, World!</h1></body></html>";
    write(client_sock, response, sizeof(response) - 1);
    close(client_sock);
}

int main() {
    int server_sock, client_sock;
    struct sockaddr_in server_addr, client_addr;
    socklen_t client_len;

    server_sock = socket(AF_INET, SOCK_STREAM, 0);
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(8080);
    server_addr.sin_addr.s_addr = INADDR_ANY;

    bind(server_sock, (struct sockaddr *) &server_addr, sizeof(server_addr));
    listen(server_sock, 5);

    printf("Server listening on port 8080\n");

    while ((client_sock = accept(server_sock, (struct sockaddr *) &client_addr, &client_len)) > 0) {
        handle_client(client_sock);
    }

    close(server_sock);
    return 0;
}
