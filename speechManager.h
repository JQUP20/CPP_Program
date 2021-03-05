#pragma once
#include<iostream>
#include<vector>
#include<map>
#include<random>
#include<deque>
#include<numeric>
#include<fstream>
#include "speaker.h"
using namespace std;

//�ݽ�������
class SpeechManager
{
public:

	//����ѡ�� ����  12��
	vector<int>v1;

	//��һ�ֽ�������  6��
	vector<int>v2;

	//ʤ��ǰ��������  3��
	vector<int>vVictory;

	//��ű�� �Լ���Ӧ�� ����ѡ�� ����
	map<int, Speaker> m_Speaker;

	int m_Index;

	//���캯��
	SpeechManager();

	void show_Menu();

	void exitSystem();

	//��ʼ������12��ѡ��
	void createSpeaker();

	//��ʼ������
	void initSpeech();

	//��ʼ���� - �������̿���
	void startSpeech();

	//��ǩ
	void speechDraw();

	//����
	void speechContest();

	//�����¼
	void saveRecord();

	//��ʾ�������
	void showScore();

	//��ȡ��¼
	void loadRecord();

	//�ļ�Ϊ�յı�־
	bool fileIsEmpty;

	//�����¼
	map<int, vector<string>> m_Record;

	//��ʾ�������
	void showRecord();

	//��ռ�¼
	void clearRecord();

	//��������
	~SpeechManager();
};

