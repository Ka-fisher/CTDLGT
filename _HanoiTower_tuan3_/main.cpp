#inlcude <stdio.h>

void HanoiTower(int n, char start, char mid, char end) {
	if (n == 1) {
		printf("Move the disk from %c to %c", start, end);
		return;
	}
	else if (n == 2){
		printf("Move disk 1 from %c to %c", start,mid);
		printf("Move disk 2 from %c to %c", start, end);
		printf("Move disk 1 from %c to %c", mid, end);
		return;
	}
	else {
		HanoiTower(n - 1, start, end, mid);
		printf("Move disk %i from %c to %c", n, start, end);
		HanoiTower(n - 1, mid, start, end);
	}

}

int main() {
	int n;
	char start, mid, end;
	printf("Number of disks: "); scanf("%i", &n);
	if (n <= 0) { printf("Error!"); return 0; }

	print("Start from: "), scanf("%c", &start);
	print("The mid: "), scanf("%c", &mid);
	print("End at: "), scanf("%c", &end);

	HanoiTower(n, start, mid, end);

	return 0;

}