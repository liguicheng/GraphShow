// GraghShow.cpp : �������̨Ӧ�ó������ڵ㡣
//
// ConsoleApplication6.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include "D:\ѧϰ�ļ�\����ļ�\graphshow1\mingw5\graphicis.h"
#include "D:\ѧϰ�ļ�\����ļ�\graphshow1\mingw5\easyx.h"
#include "D:\ѧϰ�ļ�\����ļ�\graphshow1\mingw5\CONIO.H"
#include "stdlib.h"
#include<stdio.h>

int TriangleShow(int x1, int y1, int x2, int y2, int x3, int y3);
int RectangleShow(int m, int n);
int CircleShow(int radius);
int EllipseShow(int x, int y);
int CircularRingShow(int radius1, int radius2);
int UnitShow(int maxx, int maxy);
int main()
{
	int number;
	printf("������Ҫ����ͼ�Σ�\n");
	printf("1��������\n");
	printf("2������\n");
	printf("3��Բ\n");
	printf("4����Բ\n");
	printf("5��Բ��\n");
	printf("6���˳�\n");
	printf("ע�����������ֵӦ��Ϊ��������ͼ��ϰ��س��ɷ��ؿ���̨������ͼ��\n");
	scanf_s("%d", &number);
	while (number != 6)
	{
		switch (number)
		{
		case 1:
			int x1, y1, x2, y2, x3, y3;
			printf("��һ�����꣺");
			scanf("%d %d", &x1, &y1);
			printf("�ڶ������꣺");
			scanf("%d %d", &x2, &y2);
			printf("���������꣺");
			scanf("%d %d", &x3, &y3);
			TriangleShow(x1, y1, x2, y2, x3, y3);
			break;
		case 2:
			int m, n;
			printf("���εĳ�����ֱ�Ϊ");
			scanf("%d %d", &m, &n);
			RectangleShow(m, n);
			break;
		case 3:
			int radius;
			printf("Բ�İ뾶Ϊ:");
			scanf("%d", &radius);
			CircleShow(radius);
			break;
		case 4:
			int x, y;
			printf("��Բ��x��y��뾶�ֱ�Ϊ");
			scanf("%d %d", &x, &y);
			EllipseShow(x, y);
			break;
		case 5:
			int radius1, radius2;
			printf("Բ������Բ�İ뾶�ֱ�Ϊ��");
			scanf("%d %d", &radius1, &radius2);
			CircularRingShow(radius1, radius2);
			break;

		}
		scanf("%d", &number);
	}
	system("pause");
	return 0;
}

int TriangleShow(int x1, int y1, int x2, int y2, int x3, int y3)
{
	int graphdriver = VGA;   //�Զ�������ʾ�����ͺ���ʾģʽ
	int graphmode = VGAHI;
	int maxx, maxy;  //������Ļ���������
	char c = 5;
	initgraph(&graphdriver, &graphmode, "");  //��ʼ��ͼ��ϵͳ

	maxx = getmaxx();
	maxy = getmaxy();
	UnitShow(maxx, maxy);

	outtextxy(maxx / 2 + 22, maxy / 2 + 10, '5');
	outtextxy(maxx / 2 - 10, maxy / 2 - 32, '5');
	line(maxx / 2, maxy / 2 + 300, maxx / 2, maxy / 2 - 300);
	line(maxx / 2 - 300, maxy / 2, maxx / 2 + 300, maxy / 2);
	line(maxx / 2 + x1 * 5, maxy / 2 - y1 * 5, maxx / 2 + x2 * 5, maxy / 2 - y2 * 5);
	line(maxx / 2 + x2 * 5, maxy / 2 - y2 * 5, maxx / 2 + x3 * 5, maxy / 2 - y3 * 5);
	line(maxx / 2 + x3 * 5, maxy / 2 - y3 * 5, maxx / 2 + x1 * 5, maxy / 2 - y1 * 5);

	getch();
	closegraph();


	return 0;
}

int RectangleShow(int m, int n)
{
	int graphdriver = DETECT;
	int graphmode;
	int maxx, maxy;  //������Ļ���������
	initgraph(&graphdriver, &graphmode, "");  //��ʼ��ͼ��ϵͳ

	maxx = getmaxx();
	maxy = getmaxy();
	UnitShow(maxx, maxy);
	line(maxx / 2, maxy / 2 + 300, maxx / 2, maxy / 2 - 300);
	line(maxx / 2 - 300, maxy / 2, maxx / 2 + 300, maxy / 2);

	outtextxy(maxx / 2 + 22, maxy / 2 + 10, '5');
	outtextxy(maxx / 2 - 10, maxy / 2 - 32, '5');
	rectangle(maxx / 2 - m * 5, maxy / 2 - n * 5, maxx / 2 + m * 5, maxy / 2 + n * 5);

	getch();
	closegraph();

	return 0;
}

int CircleShow(int radius)
{
	int graphdriver = DETECT;
	int graphmode;
	int maxx, maxy;  //������Ļ���������
	initgraph(&graphdriver, &graphmode, "");  //��ʼ��ͼ��ϵͳ

	maxx = getmaxx();
	maxy = getmaxy();
	UnitShow(maxx, maxy);
	line(maxx / 2, maxy / 2 + 300, maxx / 2, maxy / 2 - 300);
	line(maxx / 2 - 300, maxy / 2, maxx / 2 + 300, maxy / 2);

	outtextxy(maxx / 2 + 22, maxy / 2 + 10, '5');
	outtextxy(maxx / 2 - 10, maxy / 2 - 32, '5');
	circle(maxx / 2, maxy / 2, radius * 5);
	getch();
	closegraph();

	return 0;

}
int EllipseShow(int x, int y)
{
	int graphdriver = DETECT;
	int graphmode;
	int maxx, maxy;  //������Ļ���������
	initgraph(&graphdriver, &graphmode, "");  //��ʼ��ͼ��ϵͳ

	maxx = getmaxx();
	maxy = getmaxy();
	UnitShow(maxx, maxy);
	line(maxx / 2, maxy / 2 + 300, maxx / 2, maxy / 2 - 300);
	line(maxx / 2 - 300, maxy / 2, maxx / 2 + 300, maxy / 2);

	outtextxy(maxx / 2 + 22, maxy / 2 + 10, '5');
	outtextxy(maxx / 2 - 10, maxy / 2 - 32, '5');
	ellipse(maxx / 2 - x * 5, maxy / 2 - y * 5, maxx / 2 + x * 5, maxy / 2 + y * 5);
	getch();
	closegraph();

	return 0;

}

int CircularRingShow(int radius1, int radius2)
{
	int graphdriver = DETECT;
	int graphmode;
	int maxx, maxy;  //������Ļ���������
	initgraph(&graphdriver, &graphmode, "");  //��ʼ��ͼ��ϵͳ

	maxx = getmaxx();
	maxy = getmaxy();
	UnitShow(maxx, maxy);
	line(maxx / 2, maxy / 2 + 300, maxx / 2, maxy / 2 - 300);
	line(maxx / 2 - 300, maxy / 2, maxx / 2 + 300, maxy / 2);

	outtextxy(maxx / 2 + 22, maxy / 2 + 10, '5');
	outtextxy(maxx / 2 - 10, maxy / 2 - 32, '5');
	circle(maxx / 2, maxy / 2, radius1 * 5);
	circle(maxx / 2, maxy / 2, radius2 * 5);
	getch();
	closegraph();

	return 0;

}

int UnitShow(int maxx, int maxy)
{
	line(maxx / 2 + 25, maxy / 2, maxx / 2 + 25, maxy / 2 - 10);
	line(maxx / 2 + 50, maxy / 2, maxx / 2 + 50, maxy / 2 - 10);
	line(maxx / 2 + 75, maxy / 2, maxx / 2 + 75, maxy / 2 - 10);
	line(maxx / 2 + 100, maxy / 2, maxx / 2 + 100, maxy / 2 - 10);
	line(maxx / 2 + 125, maxy / 2, maxx / 2 + 125, maxy / 2 - 10);
	line(maxx / 2 + 150, maxy / 2, maxx / 2 + 150, maxy / 2 - 10);
	line(maxx / 2 + 175, maxy / 2, maxx / 2 + 175, maxy / 2 - 10);
	line(maxx / 2 + 200, maxy / 2, maxx / 2 + 200, maxy / 2 - 10);
	line(maxx / 2 + 225, maxy / 2, maxx / 2 + 225, maxy / 2 - 10);
	line(maxx / 2 + 250, maxy / 2, maxx / 2 + 250, maxy / 2 - 10);
	line(maxx / 2, maxy / 2 + 25, maxx / 2 + 10, maxy / 2 + 25);
	line(maxx / 2, maxy / 2 + 50, maxx / 2 + 10, maxy / 2 + 50);
	line(maxx / 2, maxy / 2 + 75, maxx / 2 + 10, maxy / 2 + 75);
	line(maxx / 2, maxy / 2 + 100, maxx / 2 + 10, maxy / 2 + 100);
	line(maxx / 2, maxy / 2 + 125, maxx / 2 + 10, maxy / 2 + 125);
	line(maxx / 2, maxy / 2 + 150, maxx / 2 + 10, maxy / 2 + 150);
	line(maxx / 2, maxy / 2 + 175, maxx / 2 + 10, maxy / 2 + 175);
	line(maxx / 2, maxy / 2 + 200, maxx / 2 + 10, maxy / 2 + 200);
	line(maxx / 2, maxy / 2 + 225, maxx / 2 + 10, maxy / 2 + 225);
	line(maxx / 2, maxy / 2 + 250, maxx / 2 + 10, maxy / 2 + 250);
	line(maxx / 2 - 25, maxy / 2, maxx / 2 - 25, maxy / 2 - 10);
	line(maxx / 2 - 50, maxy / 2, maxx / 2 - 50, maxy / 2 - 10);
	line(maxx / 2 - 75, maxy / 2, maxx / 2 - 75, maxy / 2 - 10);
	line(maxx / 2 - 100, maxy / 2, maxx / 2 - 100, maxy / 2 - 10);
	line(maxx / 2 - 125, maxy / 2, maxx / 2 - 125, maxy / 2 - 10);
	line(maxx / 2 - 150, maxy / 2, maxx / 2 - 150, maxy / 2 - 10);
	line(maxx / 2 - 175, maxy / 2, maxx / 2 - 175, maxy / 2 - 10);
	line(maxx / 2 - 200, maxy / 2, maxx / 2 - 200, maxy / 2 - 10);
	line(maxx / 2 - 225, maxy / 2, maxx / 2 - 225, maxy / 2 - 10);
	line(maxx / 2 - 250, maxy / 2, maxx / 2 - 250, maxy / 2 - 10);
	line(maxx / 2 - 275, maxy / 2, maxx / 2 - 275, maxy / 2 - 10);
	line(maxx / 2, maxy / 2 - 25, maxx / 2 + 10, maxy / 2 - 25);
	line(maxx / 2, maxy / 2 - 50, maxx / 2 + 10, maxy / 2 - 50);
	line(maxx / 2, maxy / 2 - 75, maxx / 2 + 10, maxy / 2 - 75);
	line(maxx / 2, maxy / 2 - 100, maxx / 2 + 10, maxy / 2 - 100);
	line(maxx / 2, maxy / 2 - 125, maxx / 2 + 10, maxy / 2 - 125);
	line(maxx / 2, maxy / 2 - 150, maxx / 2 + 10, maxy / 2 - 150);
	line(maxx / 2, maxy / 2 - 175, maxx / 2 + 10, maxy / 2 - 175);
	line(maxx / 2, maxy / 2 - 200, maxx / 2 + 10, maxy / 2 - 200);
	line(maxx / 2, maxy / 2 - 225, maxx / 2 + 10, maxy / 2 - 225);
	line(maxx / 2, maxy / 2 - 250, maxx / 2 + 10, maxy / 2 - 250);
	return 0;
}
