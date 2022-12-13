#include <stdio.h>
#include <stdbool.h>

int main()
{
    int prime[500], user_in, prime_count = 0;
    bool not_prime = false;


    printf("Enter the number till which you want prime numbers.\n");
    scanf("%d", &user_in);

    for (int count1 = (user_in - 1); count1 > 0; --count1)
    {
        not_prime = false;
        for (int count2 = (count1 - 1); count2 > 0; --count2)
        {
            if (count1 % count2 == 0)
            {
                if (count2 != 1)
                {
                    not_prime = true;
                    break;
                }
            }
        }
        if (not_prime == false)
        {
            prime[prime_count] = count1;
            prime_count = prime_count + 1;
        }
    }
    printf("The prime numbers from 1 to %d are.\n", user_in);
    for (int count1 = 0; count1<= 500; ++count1)
    {
        if (prime[count1] == 0)
        {
            break;
        }
        printf("%d\n", prime[count1]);
    }
    return 0;
}
