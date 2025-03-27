//# include <stdio.h>
//struct insa {
//	char name[10];
//	int age;
//	struct insa* impl_a;
//	struct insa* impl_b;
//};
//
//int main() {
//	struct insa p1 = { "KIM",28,NULL,NULL };
//	struct insa p2 = { "LEE",36,NULL, NULL };
//	struct insa p3 = { "PARK",41,NULL,NULL };
//	p1.impl_a = &p2;
//	p2.impl_b = &p3;
//	printf("%s\n", p1.impl_a->name);
//	printf("%d", p2.impl_b->age);
//}