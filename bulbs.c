#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    //prompt user for message
    string message = get_string("Message: ");
    //iterate through characters of string
    int length = strlen(message);
    for (int i = 0; i < length; i++)
    {
        //character to ASCII
        int num = message[i];
        //store binary
        int binary[] = {0, 0, 0, 0, 0, 0, 0, 0};
        //ASCII to binary
        int j = 0;
        while (num > 0)
        {
            binary[j] = num % 2;
            num = num / 2;
            j++;
        }
        //reverse binary numbers
        for (int k = 7; k >= 0; k--)
        {
            print_bulb(binary[k]);
        }
        printf("\n");
    }


}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
