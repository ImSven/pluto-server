#ifndef __JSON_HELPER__
#define __JSON_HELPER__


#include <string>
#include "cjson.h"
using namespace std;


//json������
class JsonHelper 
{
public:
	JsonHelper(string& strJson);  //��������json
	JsonHelper(const char* charJson);
	JsonHelper();  //��������json

	~JsonHelper();

public:
	//��ȡ�ӽڵ��ֵ
	bool GetJsonItem(const char* node_name, string & result);
	bool GetJsonItem(const char* node_name, char** result);
	bool GetJsonItem(const char* node_name, int & result);

	//��ȡ�����ӽڵ��ֵ
	bool GetJsonItem2(const char* node1, const char* node2, string & result);
	bool GetJsonItem2(const char* node1, const char* node2, int & result);

public:
	const string& Json2Str();
	char* Json2Char();

	bool SetJsonItem(const char* node_name, string& result);
	bool SetJsonItem(const char* node_name, char* result);
	bool SetJsonItem(const char* node_name, int result);

private:
	bool _ParseGet();
	bool _ParseSet();

private:
	cJSON* m_json;
	bool b_parse;	
	string m_str_json;
	

};


#endif

