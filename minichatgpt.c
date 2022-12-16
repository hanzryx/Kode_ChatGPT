#include <stdio.h>
#include <string.h>

char* generate_response(char* input_text) {
  /*
  Generates a response based on the input text.

  Parameters:
  input_text (char*): The input text to generate a response for.

  Returns:
  char*: The generated response.
  */
  static char response[100];
  if (strcmp(input_text, "Hello") == 0) {
    strcpy(response, "Hi there!");
  } else if (strcmp(input_text, "Goodbye") == 0) {
    strcpy(response, "See you later!");
  } else {
    sprintf(response, "You said: '%s'", input_text);
  }
  return response;
}

int main() {
  /*
  Repeatedly prompts the user for input and generates a response.
  */
  while (1) {
    char user_input[100];
    printf("Enter some text: ");
    scanf("%s", user_input);
    char* response = generate_response(user_input);
    printf("%s\n", response);
  }
  return 0;
}
