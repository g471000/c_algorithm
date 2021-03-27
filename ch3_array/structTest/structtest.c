#include <stdio.h>
#define LEN 20
#define M1 "Have a nice day with"
#define M2 " and have a much laughs."

struct names {
	char first[LEN];
	char last[LEN];
};

struct guy {
	struct names handle;
	char friend[LEN];
	char job[LEN];
	float income;
};

int main() {
	static struct guy fellow = {
		{"Jieun", "Chon"},
		"Heize",
		"Data Engineer",
		75000000};
	printf("Dear %s, \n\n", fellow.handle.first);
	printf("Thank you %s %s.\n", fellow.handle.first, fellow.handle.last);
	printf("You are a %s with good records.\n", fellow.job);
	printf("%s%s%s\n\n", M1, fellow.friend, M2);
}

	
