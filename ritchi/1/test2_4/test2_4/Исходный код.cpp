  #include <stdio.h>
#include<iostream>

  int len;

  void squeeze(char s1[], char s2[]);
  int strlen(char s[]);

  int main()
  {
      char s1[] = "BHiartpphdayy\0";
      printf("s1 = %s\n", s1);

      char s2[] = "Happy\0";
      printf("s2 = %s\n", s2);
      len = strlen(s2);

      squeeze(s1, s2);
      printf("new s1 = %s\n", s1);
	  system("pause");
      return 0;
  }

  /* squeeze: удал€ет все символы s2 из s1*/
  void squeeze(char s1[], char s2[])
  {
      int i, j, k;
      for (i = j = 0; s1[i] != '\0'; i++) {
          for (k = 0; s2[k] != s1[i] && s2[k] != '\0'; k++);
          if (k == len)
              s1[j++] = s1[i];
      }
      s1[j] = '\0';
  }

  /* strlen: возвращает длину строки s */
  int strlen(char s[])
  {
      int i;
      i = 0;
      while (s[i] != '\0')
          ++i;
      return i;
  }