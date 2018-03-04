 # include <stdio.h>
enum towers { tower1 = 1, tower2, tower3 };
void move(enum towers tower1, enum towers tower2, enum towers tower3, int disks)
{
	if (disks == 1)
	{
		printf("Transfer one disk from tower %d to tower %d\n", tower1, tower3);
	}
	else {
		disks--;
		move(tower1, tower3, tower2, disks);
		printf("Transfer one disk from tower %d to tower %d\n", tower1, tower3);
		move(tower2, tower1, tower3, disks);


	}

}
int main()
{
	move(tower1, tower2, tower3, 3);
}
