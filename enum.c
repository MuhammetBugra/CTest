#include <stdio.h>
#include <stdlib.h>
    enum sehirler {
    hatali,adana,adiyaman,afyon,agri,amasya,ankara };
int main() {
	enum sehirler il;
    il=ankara;
    printf("%d",il);
	return 0;
}
