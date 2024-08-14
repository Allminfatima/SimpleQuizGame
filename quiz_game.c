#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void askQuestion(const char *question, const char *options[], char correctAnswer);

int main() {
    // Array of questions and answers
    const char *question1 = "What is the capital of France?";
    const char *options1[] = {"a) Berlin", "b) Madrid", "c) Paris", "d) Rome"};
    char correctAnswer1 = 'c';

    const char *question2 = "Which planet is known as the Red Planet?";
    const char *options2[] = {"a) Earth", "b) Mars", "c) Jupiter", "d) Venus"};
    char correctAnswer2 = 'b';

    const char *question3 = "What is the largest ocean on Earth?";
    const char *options3[] = {"a) Atlantic Ocean", "b) Indian Ocean", "c) Arctic Ocean", "d) Pacific Ocean"};
    char correctAnswer3 = 'd';

    // Ask questions
    printf("Welcome to the Quiz Game!\n\n");
    
    askQuestion(question1, options1, correctAnswer1);
    askQuestion(question2, options2, correctAnswer2);
    askQuestion(question3, options3, correctAnswer3);

    printf("\nThank you for playing!\n");

    return 0;
}

// Function to ask a question and check the answer
void askQuestion(const char *question, const char *options[], char correctAnswer) {
    char userAnswer;

    // Display the question and options
    printf("%s\n", question);
    for (int i = 0; i < 4; i++) {
        printf("%s\n", options[i]);
    }
    
    // Get user input
    printf("Your answer (a/b/c/d): ");
    scanf(" %c", &userAnswer);

    // Check the answer
    if (userAnswer == correctAnswer) {
        printf("Correct!\n\n");
    } else {
        printf("Wrong! The correct answer was %c.\n\n", correctAnswer);
    }
}
