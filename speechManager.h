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

//演讲管理类
class SpeechManager
{
public:

	//比赛选手 容器  12人
	vector<int>v1;

	//第一轮晋级容器  6人
	vector<int>v2;

	//胜利前三名容器  3人
	vector<int>vVictory;

	//存放编号 以及对应的 具体选手 容器
	map<int, Speaker> m_Speaker;

	int m_Index;

	//构造函数
	SpeechManager();

	void show_Menu();

	void exitSystem();

	//初始化创建12名选手
	void createSpeaker();

	//初始化属性
	void initSpeech();

	//开始比赛 - 比赛流程控制
	void startSpeech();

	//抽签
	void speechDraw();

	//比赛
	void speechContest();

	//保存记录
	void saveRecord();

	//显示比赛结果
	void showScore();

	//读取记录
	void loadRecord();

	//文件为空的标志
	bool fileIsEmpty;

	//往届记录
	map<int, vector<string>> m_Record;

	//显示往届分数
	void showRecord();

	//清空记录
	void clearRecord();

	//析构函数
	~SpeechManager();
};

