#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    int lowercase_vowel,uppercase_vowel;
    lowercase_vowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    uppercase_vowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(lowercase_vowel||uppercase_vowel)
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
}