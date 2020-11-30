#include<stdio.h>
#include<cs50.h>
#include<math.h>
#include<string.h>

int main(void)
{
    string Text = get_string("Text: ");
    int lc=0, wc=1, sc=0;

    for(int i=0; i<strlen(Text);i++)
    {
        char c = Text[i];
        if((c>='a' && c<='z') || (c>='A' && c<='Z'))
        {
            lc++;
        }
        else if(c == ' ')
        {
            wc++;
        }
        else if(c=='.' || c=='!' || c=='?')
        {
            sc++;
        }
    }
    
    printf("letters: %i\n words: %i\n sentences: %i\n", lc, wc, sc);

    float L = ((float)lc / (float)wc)*100;
    float S = ((float)sc / (float)wc)*100;
    float index = 0.058*L - 0.296*S -15.8;

    if(index>=16)
    {
        printf("Grade 16+");
    }
    else if(index<1)
    {
        printf("Before Grade 1");
    }
    else
    {
        printf("Grade %f", round(index));
    }
}
