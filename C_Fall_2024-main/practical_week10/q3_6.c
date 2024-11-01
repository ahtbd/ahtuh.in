#include <stdio.h>

int main() {
    int card1, card2, card3;
    int totalValue;

    // Prompt the user to enter the values of the three cards
    printf("Enter the value of the first card (1 for Ace, 2-10 for numbered cards, 11 for Jack, 12 for Queen, 13 for King): ");
    scanf("%d", &card1);

    printf("Enter the value of the second card (1 for Ace, 2-10 for numbered cards, 11 for Jack, 12 for Queen, 13 for King): ");
    scanf("%d", &card2);

    printf("Enter the value of the third card (1 for Ace, 2-10 for numbered cards, 11 for Jack, 12 for Queen, 13 for King): ");
    scanf("%d", &card3);

    // Convert face cards (11, 12, 13) to a value of 10
    if (card1 >= 11 && card1 <= 13) card1 = 10;
    if (card2 >= 11 && card2 <= 13) card2 = 10;
    if (card3 >= 11 && card3 <= 13) card3 = 10;

    // Calculate the total value without considering the Ace value initially
    totalValue = card1 + card2 + card3;

    // Check for the presence of an Ace (value 1) and decide its value
    int aceCount = (card1 == 1) + (card2 == 1) + (card3 == 1);

    // Add 10 to the total for each Ace, as long as it doesn't exceed 21
    while (aceCount > 0 && totalValue + 10 <= 21) {
        totalValue += 10;
        aceCount--;
    }

    // Display the total value of the three cards
    printf("The total value of the cards is: %d\n", totalValue);

    return 0;
}

// Explanation:
// Input: The program accepts the values of three cards from the user. It expects:
// 1 for an Ace, 2-10 for numbered cards, 11 for a Jack, 12 for a Queen, and 13 for a King.
// Face Card Conversion: The program converts any face card (11, 12, 13) to a value of 10.
// Ace Handling: It initially calculates the sum considering the Ace (1) as a 1. If there are any Aces and adding 10 for each Ace (to make it 11) does not exceed 21, it adds 10 to the total for each Ace.
// Display: The total value of the three cards is printed as the final result.
// Example Run:
// rust
// Copy code
// Enter the value of the first card (1 for Ace, 2-10 for numbered cards, 11 for Jack, 12 for Queen, 13 for King): 1
// Enter the value of the second card (1 for Ace, 2-10 for numbered cards, 11 for Jack, 12 for Queen, 13 for King): 10
// Enter the value of the third card (1 for Ace, 2-10 for numbered cards, 11 for Jack, 12 for Queen, 13 for King): 1
// The total value of the cards is: 12