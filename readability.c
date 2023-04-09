#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // prompt for text
    string text = get_string("Text: ");
    //text length
    int length = strlen(text);
    // count letters
    float l = 0;
    for (int i = 0; i < length; i++)
    {
        if (isalpha(text[i]))
        {
            l++;
        }
    }
    printf("%f\n", l);
    // count words
    float w = 1;
    for (int i = 0; i < length; i++)
    {
        if (isspace(text[i]))
        {
            w++;
        }
    }
    printf("%f\n", w);
    //count sentances
    float s = 0;
    for (int i = 0; i < length; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            s++;
        }
    }
    printf("%f\n", s);
    //calculate avg letters and words
    float L = l / w * 100;
    printf("%f\n", L);
    float S = s / w * 100;
    printf("%f\n", S);
    //calculate Colman-Liau
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    printf("%i\n", index);
    //return grade level
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }

}
