// 1

#include <pic18f4550.h>
void main (void) {
  int i, j, temp;
  int num_asc[] = {10, 2, 5, 1, 6};
  for (i=0;i<=4;i++) {
    for (j=i+1;j<=4;j++) {
      if (num_asc[i] > num_asc[j]) {
        temp = num_asc[i];
        num_asc[i] = num_asc[j];
        num_asc[j] = temp;
      }
    }
  }
}

//2
#include <pic18f4550.h>
void main (void) {
  int i, j, temp;
  int num_asc[] = {10, 2, 5, 1, 6};
  for (i=0;i<=4;i++) {
    for (j=i+1;j<=4;j++) {
      if (num_asc[i]>num_asc[j]) {
        temp = num_asc[i];
        num_asc[i] = num_asc[j];
        num_asc[j] = temp;
      }
    }
  }
}

//3

#include <pic18f4550.h>
void main (void) {
  int i, j, temp;
  int num_asc[] = {10, 2, 5, 1, 6};
  for (i=0;i<=4;i++) {
    for (j=i+1;j<=4;j++) {
      if (num_asc[i]>num_asc[j]) {
        temp = num_asc[i];
        num_asc[i] = num_asc[j];
        num_asc[j] = temp;
      }
    }
  }
}

//4

#include <pic18f4550.h>
void main (void) {
  int i, j, temp;
  num_asc[] = {10, 2, 5, 1, 6};
  for (i=0;i<=4;i++) {
    for (j=i+1;j<=4;j++) {
      if (num_asc[i] > num_asc[j]) {
        temp = num_asc[i];
        num_asc[i] = num_asc[j];
        num_asc[j] = temp;
      }
    }
  }
}

#include <pic18f4550.h>
void main (void) {
	int i, j, temp;
	num_asc[] = {10, 2, 5, 1, 6};
	for (i=0, i<=4, i++) {
	for (j=0; j<=4, j++){
		if (num_asc[i]>num_asc[j] {
				temp = num_asc[i];
				num_asc[i} = num_asc[j];
				num_asc[j] = temp;
				}
	}
}

