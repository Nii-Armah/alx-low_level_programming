/**
 * _islower - Verify if a given character is in lowercase or not.
 *
 * Return: 1 if the given character is in lowercase. 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return 1;
	else
		return 0;
}
